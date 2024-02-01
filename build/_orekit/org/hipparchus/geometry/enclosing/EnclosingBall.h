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
            mid_init$_cf4862cbcf9de4b8,
            mid_contains_b6fdb6918bf382eb,
            mid_contains_675116de3e6daf6a,
            mid_getCenter_e843ca29d3ae6a7a,
            mid_getRadius_9981f74b2d109da6,
            mid_getSupport_b82b5fae3ca878b3,
            mid_getSupportSize_d6ab429752e7c267,
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
