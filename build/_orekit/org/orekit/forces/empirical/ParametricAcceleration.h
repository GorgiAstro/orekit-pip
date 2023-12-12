#ifndef org_orekit_forces_empirical_ParametricAcceleration_H
#define org_orekit_forces_empirical_ParametricAcceleration_H

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
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        class EventDetector;
        class FieldEventDetector;
      }
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace forces {
      namespace empirical {
        class AccelerationModel;
      }
      class ForceModel;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class List;
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        class ParametricAcceleration : public ::java::lang::Object {
         public:
          enum {
            mid_init$_fdf46db75c3e782a,
            mid_init$_b106f18f1129bdba,
            mid_acceleration_61944e27a39e8290,
            mid_acceleration_b61fb59a041240c6,
            mid_dependsOnPositionOnly_89b302893bdbe1f1,
            mid_getEventDetectors_d7cce92225eb0db2,
            mid_getFieldEventDetectors_8130af76f6998f44,
            mid_getParametersDrivers_0d9551367f7ecdef,
            mid_init_0472264ad6f40bc2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ParametricAcceleration(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ParametricAcceleration(const ParametricAcceleration& obj) : ::java::lang::Object(obj) {}

          ParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jboolean, const ::org::orekit::forces::empirical::AccelerationModel &);
          ParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::forces::empirical::AccelerationModel &);

          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          jboolean dependsOnPositionOnly() const;
          ::java::util::stream::Stream getEventDetectors() const;
          ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
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
        extern PyType_Def PY_TYPE_DEF(ParametricAcceleration);
        extern PyTypeObject *PY_TYPE(ParametricAcceleration);

        class t_ParametricAcceleration {
        public:
          PyObject_HEAD
          ParametricAcceleration object;
          static PyObject *wrap_Object(const ParametricAcceleration&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
