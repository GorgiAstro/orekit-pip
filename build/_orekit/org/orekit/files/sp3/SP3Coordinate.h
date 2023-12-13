#ifndef org_orekit_files_sp3_SP3Coordinate_H
#define org_orekit_files_sp3_SP3Coordinate_H

#include "org/orekit/utils/TimeStampedPVCoordinates.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace files {
      namespace sp3 {
        class SP3Coordinate;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        class SP3Coordinate : public ::org::orekit::utils::TimeStampedPVCoordinates {
         public:
          enum {
            mid_init$_ad58f8869eeeecbb,
            mid_getClockAccuracy_b74f83833fdad017,
            mid_getClockCorrection_b74f83833fdad017,
            mid_getClockRateAccuracy_b74f83833fdad017,
            mid_getClockRateChange_b74f83833fdad017,
            mid_getPositionAccuracy_8b724f8b4fdad1a2,
            mid_getVelocityAccuracy_8b724f8b4fdad1a2,
            mid_hasClockEvent_9ab94ac1dc23b105,
            mid_hasClockPrediction_9ab94ac1dc23b105,
            mid_hasOrbitManeuverEvent_9ab94ac1dc23b105,
            mid_hasOrbitPrediction_9ab94ac1dc23b105,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SP3Coordinate(jobject obj) : ::org::orekit::utils::TimeStampedPVCoordinates(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SP3Coordinate(const SP3Coordinate& obj) : ::org::orekit::utils::TimeStampedPVCoordinates(obj) {}

          static SP3Coordinate *DUMMY;

          SP3Coordinate(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, jdouble, jdouble, jdouble, jboolean, jboolean, jboolean, jboolean);

          jdouble getClockAccuracy() const;
          jdouble getClockCorrection() const;
          jdouble getClockRateAccuracy() const;
          jdouble getClockRateChange() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getPositionAccuracy() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getVelocityAccuracy() const;
          jboolean hasClockEvent() const;
          jboolean hasClockPrediction() const;
          jboolean hasOrbitManeuverEvent() const;
          jboolean hasOrbitPrediction() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        extern PyType_Def PY_TYPE_DEF(SP3Coordinate);
        extern PyTypeObject *PY_TYPE(SP3Coordinate);

        class t_SP3Coordinate {
        public:
          PyObject_HEAD
          SP3Coordinate object;
          static PyObject *wrap_Object(const SP3Coordinate&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
