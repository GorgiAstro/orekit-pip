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
      class Transform;
      class Frame;
      class FieldTransform;
      class EOPHistory;
      class TopocentricFrame;
    }
    namespace bodies {
      class GeodeticPoint;
    }
    namespace time {
      class FieldAbsoluteDate;
      class UT1Scale;
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace models {
      namespace earth {
        namespace displacement {
          class StationDisplacement;
        }
      }
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
            mid_init$_a649bdeaffd47ec2,
            mid_init$_60459a6516c52e90,
            mid_getBaseFrame_2bb3e750d93d59cc,
            mid_getClockDriftDriver_4194657b5e280ddc,
            mid_getClockOffsetDriver_4194657b5e280ddc,
            mid_getDisplacements_1d5cad14381c93b4,
            mid_getEastOffsetDriver_4194657b5e280ddc,
            mid_getEstimatedEarthFrame_6c9bc0a928c56d4e,
            mid_getEstimatedUT1_22bf001d2b53d119,
            mid_getNorthOffsetDriver_4194657b5e280ddc,
            mid_getOffsetGeodeticPoint_999793d0df1eca2f,
            mid_getOffsetToInertial_0f4fe59b7c3f7001,
            mid_getOffsetToInertial_8dcac9b165b89489,
            mid_getOffsetToInertial_8cad1e5bac6f50a9,
            mid_getPolarDriftXDriver_4194657b5e280ddc,
            mid_getPolarDriftYDriver_4194657b5e280ddc,
            mid_getPolarOffsetXDriver_4194657b5e280ddc,
            mid_getPolarOffsetYDriver_4194657b5e280ddc,
            mid_getPrimeMeridianDriftDriver_4194657b5e280ddc,
            mid_getPrimeMeridianOffsetDriver_4194657b5e280ddc,
            mid_getZenithOffsetDriver_4194657b5e280ddc,
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
