#ifndef org_orekit_forces_inertia_InertialForces_H
#define org_orekit_forces_inertia_InertialForces_H

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
  }
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace errors {
      class OrekitIllegalArgumentException;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace frames {
      class Frame;
    }
    namespace forces {
      class ForceModel;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace inertia {

        class InertialForces : public ::java::lang::Object {
         public:
          enum {
            mid_init$_535d1f91a93c8b4d,
            mid_acceleration_b61fb59a041240c6,
            mid_acceleration_61944e27a39e8290,
            mid_dependsOnPositionOnly_89b302893bdbe1f1,
            mid_getParametersDrivers_0d9551367f7ecdef,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit InertialForces(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          InertialForces(const InertialForces& obj) : ::java::lang::Object(obj) {}

          InertialForces(const ::org::orekit::frames::Frame &);

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          jboolean dependsOnPositionOnly() const;
          ::java::util::List getParametersDrivers() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace inertia {
        extern PyType_Def PY_TYPE_DEF(InertialForces);
        extern PyTypeObject *PY_TYPE(InertialForces);

        class t_InertialForces {
        public:
          PyObject_HEAD
          InertialForces object;
          static PyObject *wrap_Object(const InertialForces&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
