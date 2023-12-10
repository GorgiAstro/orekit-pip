#ifndef org_hipparchus_stat_projection_PCA_H
#define org_hipparchus_stat_projection_PCA_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace projection {
        class PCA;
      }
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
    namespace stat {
      namespace projection {

        class PCA : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0a2a1ac2721c0336,
            mid_init$_5c6137a1aec058a4,
            mid_fit_c12386fb64cc3d5c,
            mid_fitAndTransform_557d9547e284535f,
            mid_getCenter_7cdc325af0834901,
            mid_getComponents_43de1192439efa92,
            mid_getNumComponents_f2f64475e4580546,
            mid_getVariance_7cdc325af0834901,
            mid_isBiasCorrection_e470b6d9e0d979db,
            mid_isScale_e470b6d9e0d979db,
            mid_transform_557d9547e284535f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PCA(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PCA(const PCA& obj) : ::java::lang::Object(obj) {}

          PCA(jint);
          PCA(jint, jboolean, jboolean);

          PCA fit(const JArray< JArray< jdouble > > &) const;
          JArray< JArray< jdouble > > fitAndTransform(const JArray< JArray< jdouble > > &) const;
          JArray< jdouble > getCenter() const;
          JArray< JArray< jdouble > > getComponents() const;
          jint getNumComponents() const;
          JArray< jdouble > getVariance() const;
          jboolean isBiasCorrection() const;
          jboolean isScale() const;
          JArray< JArray< jdouble > > transform(const JArray< JArray< jdouble > > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace projection {
        extern PyType_Def PY_TYPE_DEF(PCA);
        extern PyTypeObject *PY_TYPE(PCA);

        class t_PCA {
        public:
          PyObject_HEAD
          PCA object;
          static PyObject *wrap_Object(const PCA&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif