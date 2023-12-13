#ifndef org_orekit_estimation_measurements_GroundStation_H
#define org_orekit_estimation_measurements_GroundStation_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class FieldTransform;
      class EOPHistory;
      class Transform;
      class TopocentricFrame;
      class Frame;
    }
    namespace time {
      class FieldAbsoluteDate;
      class UT1Scale;
      class AbsoluteDate;
    }
    namespace bodies {
      class GeodeticPoint;
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
            mid_init$_153388b9c226b897,
            mid_init$_2a576616b9e520cb,
            mid_getBaseFrame_c2b113ddceb69262,
            mid_getClockDriftDriver_a59daa5e273117e1,
            mid_getClockOffsetDriver_a59daa5e273117e1,
            mid_getDisplacements_ab135c4e373d337c,
            mid_getEastOffsetDriver_a59daa5e273117e1,
            mid_getEstimatedEarthFrame_2c51111cc6894ba1,
            mid_getEstimatedUT1_03c3c9443d7f95bb,
            mid_getNorthOffsetDriver_a59daa5e273117e1,
            mid_getOffsetGeodeticPoint_2f2ea1b3ce15a97a,
            mid_getOffsetToInertial_d366b6c6071d64e1,
            mid_getOffsetToInertial_b7a75136987e4aae,
            mid_getOffsetToInertial_e929bc1c2d83ca7b,
            mid_getPolarDriftXDriver_a59daa5e273117e1,
            mid_getPolarDriftYDriver_a59daa5e273117e1,
            mid_getPolarOffsetXDriver_a59daa5e273117e1,
            mid_getPolarOffsetYDriver_a59daa5e273117e1,
            mid_getPrimeMeridianDriftDriver_a59daa5e273117e1,
            mid_getPrimeMeridianOffsetDriver_a59daa5e273117e1,
            mid_getZenithOffsetDriver_a59daa5e273117e1,
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
