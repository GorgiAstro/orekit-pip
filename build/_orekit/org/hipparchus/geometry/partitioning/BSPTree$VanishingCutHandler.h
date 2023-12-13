#ifndef org_hipparchus_geometry_partitioning_BSPTree$VanishingCutHandler_H
#define org_hipparchus_geometry_partitioning_BSPTree$VanishingCutHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class BSPTree;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        class BSPTree$VanishingCutHandler : public ::java::lang::Object {
         public:
          enum {
            mid_fixNode_00f0f0312191ba7e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BSPTree$VanishingCutHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BSPTree$VanishingCutHandler(const BSPTree$VanishingCutHandler& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::geometry::partitioning::BSPTree fixNode(const ::org::hipparchus::geometry::partitioning::BSPTree &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        extern PyType_Def PY_TYPE_DEF(BSPTree$VanishingCutHandler);
        extern PyTypeObject *PY_TYPE(BSPTree$VanishingCutHandler);

        class t_BSPTree$VanishingCutHandler {
        public:
          PyObject_HEAD
          BSPTree$VanishingCutHandler object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BSPTree$VanishingCutHandler *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BSPTree$VanishingCutHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BSPTree$VanishingCutHandler&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
