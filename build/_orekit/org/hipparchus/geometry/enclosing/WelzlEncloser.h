#ifndef org_hipparchus_geometry_enclosing_WelzlEncloser_H
#define org_hipparchus_geometry_enclosing_WelzlEncloser_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {
        class SupportBallGenerator;
        class Encloser;
        class EnclosingBall;
      }
      class Point;
      class Space;
    }
  }
}
namespace java {
  namespace lang {
    class Iterable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {

        class WelzlEncloser : public ::java::lang::Object {
         public:
          enum {
            mid_init$_4679422c92ac5620,
            mid_enclose_fc71bba104f0320f,
            mid_selectFarthest_077faae7be41ab87,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit WelzlEncloser(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          WelzlEncloser(const WelzlEncloser& obj) : ::java::lang::Object(obj) {}

          WelzlEncloser(jdouble, const ::org::hipparchus::geometry::enclosing::SupportBallGenerator &);

          ::org::hipparchus::geometry::enclosing::EnclosingBall enclose(const ::java::lang::Iterable &) const;
          ::org::hipparchus::geometry::Point selectFarthest(const ::java::lang::Iterable &, const ::org::hipparchus::geometry::enclosing::EnclosingBall &) const;
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
        extern PyType_Def PY_TYPE_DEF(WelzlEncloser);
        extern PyTypeObject *PY_TYPE(WelzlEncloser);

        class t_WelzlEncloser {
        public:
          PyObject_HEAD
          WelzlEncloser object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_WelzlEncloser *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const WelzlEncloser&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const WelzlEncloser&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
