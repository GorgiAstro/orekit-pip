#ifndef org_hipparchus_geometry_enclosing_Encloser_H
#define org_hipparchus_geometry_enclosing_Encloser_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Iterable;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {
        class EnclosingBall;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {

        class Encloser : public ::java::lang::Object {
         public:
          enum {
            mid_enclose_11758fc9a7169c2c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Encloser(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Encloser(const Encloser& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::geometry::enclosing::EnclosingBall enclose(const ::java::lang::Iterable &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {
        extern PyType_Def PY_TYPE_DEF(Encloser);
        extern PyTypeObject *PY_TYPE(Encloser);

        class t_Encloser {
        public:
          PyObject_HEAD
          Encloser object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_Encloser *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Encloser&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Encloser&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
