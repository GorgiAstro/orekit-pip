import orekit
from org.orekit.utils import Constants
from orekit.pyhelpers import setup_orekit_curdir, download_orekit_data_curdir

if __name__ == '__main__':
    vm = orekit.initVM()
    print ('Java version:',vm.java_version)
    print ('Orekit version:', orekit.VERSION)

    download_orekit_data_curdir()
    setup_orekit_curdir()

    print(f"Earth equatorial radius: {Constants.WGS84_EARTH_EQUATORIAL_RADIUS}m")
