#ifndef org_orekit_forces_drag_IsotropicDrag_H
#define org_orekit_forces_drag_IsotropicDrag_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
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
    namespace forces {
      namespace drag {
        class DragSensitive;
      }
    }
    namespace propagation {
      class SpacecraftState;
      class FieldSpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        class IsotropicDrag : public ::java::lang::Object {
         public:
          enum {
            mid_init$_1d715fa3b7b756e1,
            mid_init$_667a7965403ed91a,
            mid_dragAcceleration_72c100be3e679e5e,
            mid_dragAcceleration_3061f9a13979e9fa,
            mid_getDragParametersDrivers_a6156df500549a58,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IsotropicDrag(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IsotropicDrag(const IsotropicDrag& obj) : ::java::lang::Object(obj) {}

          IsotropicDrag(jdouble, jdouble);
          IsotropicDrag(jdouble, jdouble, jdouble, jdouble);

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D dragAcceleration(const ::org::orekit::propagation::SpacecraftState &, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const JArray< jdouble > &) const;
          ::java::util::List getDragParametersDrivers() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {
        extern PyType_Def PY_TYPE_DEF(IsotropicDrag);
        extern PyTypeObject *PY_TYPE(IsotropicDrag);

        class t_IsotropicDrag {
        public:
          PyObject_HEAD
          IsotropicDrag object;
          static PyObject *wrap_Object(const IsotropicDrag&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
