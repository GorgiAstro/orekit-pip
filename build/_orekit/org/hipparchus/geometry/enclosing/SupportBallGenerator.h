#ifndef org_hipparchus_geometry_enclosing_SupportBallGenerator_H
#define org_hipparchus_geometry_enclosing_SupportBallGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {
        class EnclosingBall;
      }
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
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {

        class SupportBallGenerator : public ::java::lang::Object {
         public:
          enum {
            mid_ballOnSupport_1093dd6e31c1164f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SupportBallGenerator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SupportBallGenerator(const SupportBallGenerator& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::geometry::enclosing::EnclosingBall ballOnSupport(const ::java::util::List &) const;
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
        extern PyType_Def PY_TYPE_DEF(SupportBallGenerator);
        extern PyTypeObject *PY_TYPE(SupportBallGenerator);

        class t_SupportBallGenerator {
        public:
          PyObject_HEAD
          SupportBallGenerator object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_SupportBallGenerator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SupportBallGenerator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SupportBallGenerator&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
