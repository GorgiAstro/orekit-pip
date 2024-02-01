#ifndef org_hipparchus_geometry_hull_ConvexHullGenerator_H
#define org_hipparchus_geometry_hull_ConvexHullGenerator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
    }
    namespace geometry {
      namespace hull {
        class ConvexHull;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace hull {

        class ConvexHullGenerator : public ::java::lang::Object {
         public:
          enum {
            mid_generate_f0192278b7b44179,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConvexHullGenerator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ConvexHullGenerator(const ConvexHullGenerator& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::geometry::hull::ConvexHull generate(const ::java::util::Collection &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace hull {
        extern PyType_Def PY_TYPE_DEF(ConvexHullGenerator);
        extern PyTypeObject *PY_TYPE(ConvexHullGenerator);

        class t_ConvexHullGenerator {
        public:
          PyObject_HEAD
          ConvexHullGenerator object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_ConvexHullGenerator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ConvexHullGenerator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ConvexHullGenerator&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
