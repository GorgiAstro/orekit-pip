#ifndef org_orekit_forces_empirical_TimeSpanParametricAcceleration_H
#define org_orekit_forces_empirical_TimeSpanParametricAcceleration_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class CalculusFieldElement;
    class Field;
  }
  namespace orekit {
    namespace utils {
      class TimeSpanMap;
      class TimeSpanMap$Span;
      class ParameterDriver;
    }
    namespace forces {
      class ForceModel;
      namespace empirical {
        class AccelerationModel;
      }
    }
    namespace propagation {
      class SpacecraftState;
      class FieldSpacecraftState;
      namespace events {
        class EventDetector;
        class FieldEventDetector;
      }
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
  }
}
namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        class TimeSpanParametricAcceleration : public ::java::lang::Object {
         public:
          enum {
            mid_init$_fe8be0364ca74ee2,
            mid_init$_0de0371c7296ad8d,
            mid_acceleration_00aba28d3abe9a8c,
            mid_acceleration_78989e44b99f7cc2,
            mid_addAccelerationModelValidAfter_91f97c45321ef11b,
            mid_addAccelerationModelValidBefore_91f97c45321ef11b,
            mid_dependsOnPositionOnly_e470b6d9e0d979db,
            mid_extractAccelerationModelRange_df7496d2771de2ea,
            mid_extractParameters_d7d552e275320f67,
            mid_extractParameters_8b177eb25e4eb468,
            mid_getAccelerationModel_3c4e1c0fbc8f4df5,
            mid_getAccelerationModelSpan_e815c41e031d3908,
            mid_getEventDetectors_a68a17dd093f796d,
            mid_getFieldEventDetectors_1328ddb491531a35,
            mid_getFirstSpan_39a1e35b17737f60,
            mid_getParametersDrivers_a6156df500549a58,
            mid_init_3d13474d79f5e7bc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TimeSpanParametricAcceleration(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TimeSpanParametricAcceleration(const TimeSpanParametricAcceleration& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *DATE_AFTER;
          static ::java::lang::String *DATE_BEFORE;

          TimeSpanParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jboolean, const ::org::orekit::forces::empirical::AccelerationModel &);
          TimeSpanParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::forces::empirical::AccelerationModel &);

          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          void addAccelerationModelValidAfter(const ::org::orekit::forces::empirical::AccelerationModel &, const ::org::orekit::time::AbsoluteDate &) const;
          void addAccelerationModelValidBefore(const ::org::orekit::forces::empirical::AccelerationModel &, const ::org::orekit::time::AbsoluteDate &) const;
          jboolean dependsOnPositionOnly() const;
          ::org::orekit::utils::TimeSpanMap extractAccelerationModelRange(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
          JArray< jdouble > extractParameters(const JArray< jdouble > &, const ::org::orekit::time::AbsoluteDate &) const;
          JArray< ::org::hipparchus::CalculusFieldElement > extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::orekit::time::FieldAbsoluteDate &) const;
          ::org::orekit::forces::empirical::AccelerationModel getAccelerationModel(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::utils::TimeSpanMap$Span getAccelerationModelSpan(const ::org::orekit::time::AbsoluteDate &) const;
          ::java::util::stream::Stream getEventDetectors() const;
          ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
          ::org::orekit::utils::TimeSpanMap$Span getFirstSpan() const;
          ::java::util::List getParametersDrivers() const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {
        extern PyType_Def PY_TYPE_DEF(TimeSpanParametricAcceleration);
        extern PyTypeObject *PY_TYPE(TimeSpanParametricAcceleration);

        class t_TimeSpanParametricAcceleration {
        public:
          PyObject_HEAD
          TimeSpanParametricAcceleration object;
          static PyObject *wrap_Object(const TimeSpanParametricAcceleration&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
