#ifndef org_hipparchus_geometry_enclosing_EnclosingBall_H
#define org_hipparchus_geometry_enclosing_EnclosingBall_H

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
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {

        class EnclosingBall : public ::java::lang::Object {
         public:
          enum {
            mid_init$_b2470e81f68b6dba,
            mid_contains_51403b98cc649329,
            mid_contains_0ba81b37dd665c3c,
            mid_getCenter_e164db6eb4ec1f00,
            mid_getRadius_dff5885c2c873297,
            mid_getSupport_55a29d8e9344cdba,
            mid_getSupportSize_570ce0828f81a2c1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EnclosingBall(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EnclosingBall(const EnclosingBall& obj) : ::java::lang::Object(obj) {}

          EnclosingBall(const ::org::hipparchus::geometry::Point &, jdouble, const JArray< ::org::hipparchus::geometry::Point > &);

          jboolean contains(const ::org::hipparchus::geometry::Point &) const;
          jboolean contains(const ::org::hipparchus::geometry::Point &, jdouble) const;
          ::org::hipparchus::geometry::Point getCenter() const;
          jdouble getRadius() const;
          JArray< ::org::hipparchus::geometry::Point > getSupport() const;
          jint getSupportSize() const;
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
        extern PyType_Def PY_TYPE_DEF(EnclosingBall);
        extern PyTypeObject *PY_TYPE(EnclosingBall);

        class t_EnclosingBall {
        public:
          PyObject_HEAD
          EnclosingBall object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_EnclosingBall *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const EnclosingBall&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const EnclosingBall&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
