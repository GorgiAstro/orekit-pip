#ifndef org_orekit_forces_maneuvers_Control3DVectorCostType_H
#define org_orekit_forces_maneuvers_Control3DVectorCostType_H

#include "java/lang/Enum.h"

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
      namespace maneuvers {
        class Control3DVectorCostType;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        class Control3DVectorCostType : public ::java::lang::Enum {
         public:
          enum {
            mid_evaluate_561f21e3ac14fa34,
            mid_evaluate_80b2470b9511edd1,
            mid_valueOf_5b136ac3771fe77f,
            mid_values_8872ca4503b3b756,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Control3DVectorCostType(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Control3DVectorCostType(const Control3DVectorCostType& obj) : ::java::lang::Enum(obj) {}

          static Control3DVectorCostType *INF_NORM;
          static Control3DVectorCostType *NONE;
          static Control3DVectorCostType *ONE_NORM;
          static Control3DVectorCostType *TWO_NORM;

          ::org::hipparchus::CalculusFieldElement evaluate(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
          jdouble evaluate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          static Control3DVectorCostType valueOf(const ::java::lang::String &);
          static JArray< Control3DVectorCostType > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        extern PyType_Def PY_TYPE_DEF(Control3DVectorCostType);
        extern PyTypeObject *PY_TYPE(Control3DVectorCostType);

        class t_Control3DVectorCostType {
        public:
          PyObject_HEAD
          Control3DVectorCostType object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Control3DVectorCostType *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Control3DVectorCostType&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Control3DVectorCostType&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
