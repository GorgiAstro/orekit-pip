#ifndef org_orekit_estimation_measurements_GroundStation_H
#define org_orekit_estimation_measurements_GroundStation_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class UT1Scale;
    }
    namespace models {
      namespace earth {
        namespace displacement {
          class StationDisplacement;
        }
      }
    }
    namespace frames {
      class FieldTransform;
      class TopocentricFrame;
      class Transform;
      class Frame;
      class EOPHistory;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
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
            mid_init$_2c9031d766545c51,
            mid_init$_a3f52cf9727f39a6,
            mid_getBaseFrame_d0e5c3c9d5578806,
            mid_getClockDriftDriver_7daccb22665e511b,
            mid_getClockOffsetDriver_7daccb22665e511b,
            mid_getDisplacements_fa6c07d489a11cbc,
            mid_getEastOffsetDriver_7daccb22665e511b,
            mid_getEstimatedEarthFrame_cb151471db4570f0,
            mid_getEstimatedUT1_ac848fda7f5ef1ad,
            mid_getNorthOffsetDriver_7daccb22665e511b,
            mid_getOffsetGeodeticPoint_fcf69cfd0f2dce3f,
            mid_getOffsetToInertial_d6f3b63bcf7680d5,
            mid_getOffsetToInertial_9bfbf8a64f37336b,
            mid_getOffsetToInertial_efc9ead827db6ffb,
            mid_getPolarDriftXDriver_7daccb22665e511b,
            mid_getPolarDriftYDriver_7daccb22665e511b,
            mid_getPolarOffsetXDriver_7daccb22665e511b,
            mid_getPolarOffsetYDriver_7daccb22665e511b,
            mid_getPrimeMeridianDriftDriver_7daccb22665e511b,
            mid_getPrimeMeridianOffsetDriver_7daccb22665e511b,
            mid_getZenithOffsetDriver_7daccb22665e511b,
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
