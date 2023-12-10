#ifndef org_orekit_forces_inertia_InertialForces_H
#define org_orekit_forces_inertia_InertialForces_H

#include "java/lang/Object.h"

namespace org {
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
  }
  namespace orekit {
    namespace errors {
      class OrekitIllegalArgumentException;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace forces {
      class ForceModel;
    }
    namespace propagation {
      class SpacecraftState;
      class FieldSpacecraftState;
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
            mid_init$_b1992bd1bb70f476,
            mid_acceleration_78989e44b99f7cc2,
            mid_acceleration_00aba28d3abe9a8c,
            mid_dependsOnPositionOnly_e470b6d9e0d979db,
            mid_getParametersDrivers_a6156df500549a58,
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