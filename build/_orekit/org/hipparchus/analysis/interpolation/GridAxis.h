#ifndef org_hipparchus_analysis_interpolation_GridAxis_H
#define org_hipparchus_analysis_interpolation_GridAxis_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
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
    namespace analysis {
      namespace interpolation {

        class GridAxis : public ::java::lang::Object {
         public:
          enum {
            mid_init$_338593130772139f,
            mid_getN_570ce0828f81a2c1,
            mid_interpolationIndex_4508852644846c83,
            mid_node_46f85b53d9aedd96,
            mid_size_570ce0828f81a2c1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GridAxis(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GridAxis(const GridAxis& obj) : ::java::lang::Object(obj) {}

          GridAxis(const JArray< jdouble > &, jint);

          jint getN() const;
          jint interpolationIndex(jdouble) const;
          jdouble node(jint) const;
          jint size() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        extern PyType_Def PY_TYPE_DEF(GridAxis);
        extern PyTypeObject *PY_TYPE(GridAxis);

        class t_GridAxis {
        public:
          PyObject_HEAD
          GridAxis object;
          static PyObject *wrap_Object(const GridAxis&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
