#ifndef org_orekit_estimation_measurements_GroundStation_H
#define org_orekit_estimation_measurements_GroundStation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
  }
  namespace orekit {
    namespace frames {
      class Frame;
      class TopocentricFrame;
      class FieldTransform;
      class EOPHistory;
      class Transform;
    }
    namespace time {
      class UT1Scale;
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace models {
      namespace earth {
        namespace displacement {
          class StationDisplacement;
        }
      }
    }
    namespace bodies {
      class GeodeticPoint;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Integer;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class GroundStation : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f9eb40be2920d1a6,
            mid_init$_1de7772c6acacc4d,
            mid_getBaseFrame_52fc31c455206160,
            mid_getClockDriftDriver_ac0e5f8f2fa86f4f,
            mid_getClockOffsetDriver_ac0e5f8f2fa86f4f,
            mid_getDisplacements_c91b4b894f01b233,
            mid_getEastOffsetDriver_ac0e5f8f2fa86f4f,
            mid_getEstimatedEarthFrame_c8fe21bcdac65bf6,
            mid_getEstimatedUT1_2493bae90e875538,
            mid_getNorthOffsetDriver_ac0e5f8f2fa86f4f,
            mid_getOffsetGeodeticPoint_ef043ede1a468814,
            mid_getOffsetToInertial_acc34ffcb984c9a1,
            mid_getOffsetToInertial_eab458a2e778e0a3,
            mid_getOffsetToInertial_81125c99e02b85db,
            mid_getPolarDriftXDriver_ac0e5f8f2fa86f4f,
            mid_getPolarDriftYDriver_ac0e5f8f2fa86f4f,
            mid_getPolarOffsetXDriver_ac0e5f8f2fa86f4f,
            mid_getPolarOffsetYDriver_ac0e5f8f2fa86f4f,
            mid_getPrimeMeridianDriftDriver_ac0e5f8f2fa86f4f,
            mid_getPrimeMeridianOffsetDriver_ac0e5f8f2fa86f4f,
            mid_getZenithOffsetDriver_ac0e5f8f2fa86f4f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GroundStation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GroundStation(const GroundStation& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *DRIFT_SUFFIX;
          static ::java::lang::String *INTERMEDIATE_SUFFIX;
          static ::java::lang::String *OFFSET_SUFFIX;

          GroundStation(const ::org::orekit::frames::TopocentricFrame &);
          GroundStation(const ::org::orekit::frames::TopocentricFrame &, const ::org::orekit::frames::EOPHistory &, const JArray< ::org::orekit::models::earth::displacement::StationDisplacement > &);

          ::org::orekit::frames::TopocentricFrame getBaseFrame() const;
          ::org::orekit::utils::ParameterDriver getClockDriftDriver() const;
          ::org::orekit::utils::ParameterDriver getClockOffsetDriver() const;
          JArray< ::org::orekit::models::earth::displacement::StationDisplacement > getDisplacements() const;
          ::org::orekit::utils::ParameterDriver getEastOffsetDriver() const;
          ::org::orekit::frames::Frame getEstimatedEarthFrame() const;
          ::org::orekit::time::UT1Scale getEstimatedUT1() const;
          ::org::orekit::utils::ParameterDriver getNorthOffsetDriver() const;
          ::org::orekit::bodies::GeodeticPoint getOffsetGeodeticPoint(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::frames::Transform getOffsetToInertial(const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, jboolean) const;
          ::org::orekit::frames::FieldTransform getOffsetToInertial(const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, jint, const ::java::util::Map &) const;
          ::org::orekit::frames::FieldTransform getOffsetToInertial(const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, jint, const ::java::util::Map &) const;
          ::org::orekit::utils::ParameterDriver getPolarDriftXDriver() const;
          ::org::orekit::utils::ParameterDriver getPolarDriftYDriver() const;
          ::org::orekit::utils::ParameterDriver getPolarOffsetXDriver() const;
          ::org::orekit::utils::ParameterDriver getPolarOffsetYDriver() const;
          ::org::orekit::utils::ParameterDriver getPrimeMeridianDriftDriver() const;
          ::org::orekit::utils::ParameterDriver getPrimeMeridianOffsetDriver() const;
          ::org::orekit::utils::ParameterDriver getZenithOffsetDriver() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        extern PyType_Def PY_TYPE_DEF(GroundStation);
        extern PyTypeObject *PY_TYPE(GroundStation);

        class t_GroundStation {
        public:
          PyObject_HEAD
          GroundStation object;
          static PyObject *wrap_Object(const GroundStation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
