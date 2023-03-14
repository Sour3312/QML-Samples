import QtQuick 2.12
import QtQuick.Window 2.3
import QtLocation 5.12
import QtPositioning 5.12
import QtQuick.Controls 2.5

Rectangle {
    width: 600
    height: 600
    visible: true

    Plugin {
        id: osmPlugin
        name: "osm"
    }


    Map {
        id: map
        anchors.fill: parent
        plugin: osmPlugin
        center: QtPositioning.coordinate(23.343083617090777, 85.31584732839102)
        zoomLevel: 13

        MapItemView {
            model : myModel
            delegate: MapQuickItem {
                coordinate: model.position
                sourceItem: Image {
                    id: image_1
                    source: "http://maps.gstatic.com/mapfiles/ridefinder-images/mm_20_red.png"
                }
                anchorPoint.x: image_1.width
                anchorPoint.y: image_1.height
            }
        }
    }
}
