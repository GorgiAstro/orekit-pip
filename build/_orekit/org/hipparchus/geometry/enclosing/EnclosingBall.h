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
            mid_init$_a92fa33132e2e6cb,
            mid_contains_ceb3835b9ab36ec4,
            mid_contains_302ed2f0b34524bb,
            mid_getCenter_268784e47ab908a6,
            mid_getRadius_456d9a2f64d6b28d,
            mid_getSupport_a65b446f3778f2ab,
            mid_getSupportSize_f2f64475e4580546,
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
