#ifndef org_orekit_forces_empirical_TimeSpanParametricAcceleration_H
#define org_orekit_forces_empirical_TimeSpanParametricAcceleration_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        class FieldEventDetector;
        class EventDetector;
      }
      class SpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace forces {
      namespace empirical {
        class AccelerationModel;
      }
      class ForceModel;
    }
    namespace utils {
      class ParameterDriver;
      class TimeSpanMap$Span;
      class TimeSpanMap;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
    class CalculusFieldElement;
    class Field;
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
            mid_init$_fdf46db75c3e782a,
            mid_init$_b106f18f1129bdba,
            mid_acceleration_b61fb59a041240c6,
            mid_acceleration_61944e27a39e8290,
            mid_addAccelerationModelValidAfter_9342f723ecfae537,
            mid_addAccelerationModelValidBefore_9342f723ecfae537,
            mid_dependsOnPositionOnly_89b302893bdbe1f1,
            mid_extractAccelerationModelRange_cdee4c9b841a225d,
            mid_extractParameters_2a4cb51cb18e4e8b,
            mid_extractParameters_32c7759b5aba450d,
            mid_getAccelerationModel_d68384122246eccc,
            mid_getAccelerationModelSpan_320d9b9cba67eeb8,
            mid_getEventDetectors_d7cce92225eb0db2,
            mid_getFieldEventDetectors_8130af76f6998f44,
            mid_getFirstSpan_2a24ed7b7f6cbca3,
            mid_getParametersDrivers_0d9551367f7ecdef,
            mid_init_0472264ad6f40bc2,
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

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
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
