import QtQuick 5.13
import QtQuick.Window 5.12
import QtQuick.Controls 5.12
import QtPositioning 5.12
import QtLocation 5.12

Window {
    id: root
    visible: true
    width: 640
    height: 480
    title: qsTr("My Qt Location")

    Map {
        id: the_map
        anchors.fill: parent
        minimumZoomLevel: 3
        maximumZoomLevel: 16
        zoomLevel: 10
        center: QtPositioning.coordinate(30.67, 104.06)

        plugin: Plugin {
            name: "osm"

//            PluginParameter {
//                name: "mapPath"
//                value: applicationDirPath+"/dianzi_gaode_ArcgisServerTiles/_alllayers"
//            }

//            PluginParameter {
//                name: "format"
//                value: "png"
//            }
        }

        //MapParameter { }
    }
}
