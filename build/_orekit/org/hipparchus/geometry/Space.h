#ifndef org_hipparchus_geometry_Space_H
#define org_hipparchus_geometry_Space_H

#include "java/io/Serializable.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
    }
    namespace geometry {
      class Space;
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

      class Space : public ::java::io::Serializable {
       public:
        enum {
          mid_getDimension_d6ab429752e7c267,
          mid_getSubSpace_a30bf0b437744017,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Space(jobject obj) : ::java::io::Serializable(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Space(const Space& obj) : ::java::io::Serializable(obj) {}

        jint getDimension() const;
        Space getSubSpace() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      extern PyType_Def PY_TYPE_DEF(Space);
      extern PyTypeObject *PY_TYPE(Space);

      class t_Space {
      public:
        PyObject_HEAD
        Space object;
        static PyObject *wrap_Object(const Space&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
