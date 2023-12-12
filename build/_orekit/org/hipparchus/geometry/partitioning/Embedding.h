#ifndef org_hipparchus_geometry_partitioning_Embedding_H
#define org_hipparchus_geometry_partitioning_Embedding_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Point;
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

        class Embedding : public ::java::lang::Object {
         public:
          enum {
            mid_toSpace_328d0d966eeb9668,
            mid_toSubSpace_328d0d966eeb9668,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Embedding(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Embedding(const Embedding& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::geometry::Point toSpace(const ::org::hipparchus::geometry::Point &) const;
          ::org::hipparchus::geometry::Point toSubSpace(const ::org::hipparchus::geometry::Point &) const;
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
        extern PyType_Def PY_TYPE_DEF(Embedding);
        extern PyTypeObject *PY_TYPE(Embedding);

        class t_Embedding {
        public:
          PyObject_HEAD
          Embedding object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_Embedding *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Embedding&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Embedding&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
