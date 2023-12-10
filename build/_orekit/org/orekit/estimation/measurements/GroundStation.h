#ifndef org_orekit_estimation_measurements_GroundStation_H
#define org_orekit_estimation_measurements_GroundStation_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {
          class StationDisplacement;
        }
      }
    }
    namespace frames {
      class TopocentricFrame;
      class EOPHistory;
      class Frame;
      class FieldTransform;
      class Transform;
    }
    namespace bodies {
      class GeodeticPoint;
    }
    namespace time {
      class UT1Scale;
      class AbsoluteDate;
      class FieldAbsoluteDate;
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
            mid_init$_359d9aed85301acb,
            mid_init$_0fceb273e92d7c84,
            mid_getBaseFrame_e17d4157ae504252,
            mid_getClockDriftDriver_a25ed222178aa59f,
            mid_getClockOffsetDriver_a25ed222178aa59f,
            mid_getDisplacements_1d7cd7b627f6155e,
            mid_getEastOffsetDriver_a25ed222178aa59f,
            mid_getEstimatedEarthFrame_b86f9f61d97a7244,
            mid_getEstimatedUT1_b384d97b3c055d24,
            mid_getNorthOffsetDriver_a25ed222178aa59f,
            mid_getOffsetGeodeticPoint_018502dfb824b2a5,
            mid_getOffsetToInertial_699d2ff355610ec1,
            mid_getOffsetToInertial_3a8071b5885d64d5,
            mid_getOffsetToInertial_70e2ca8f44903f00,
            mid_getPolarDriftXDriver_a25ed222178aa59f,
            mid_getPolarDriftYDriver_a25ed222178aa59f,
            mid_getPolarOffsetXDriver_a25ed222178aa59f,
            mid_getPolarOffsetYDriver_a25ed222178aa59f,
            mid_getPrimeMeridianDriftDriver_a25ed222178aa59f,
            mid_getPrimeMeridianOffsetDriver_a25ed222178aa59f,
            mid_getZenithOffsetDriver_a25ed222178aa59f,
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
