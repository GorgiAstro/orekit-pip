#ifndef org_hipparchus_stat_projection_PCA_H
#define org_hipparchus_stat_projection_PCA_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace stat {
      namespace projection {
        class PCA;
      }
    }
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
            mid_init$_99803b0791f320ff,
            mid_init$_0e9bc5460f08ea27,
            mid_fit_c913668afa3c2c2a,
            mid_fitAndTransform_9c0348b17db96525,
            mid_getCenter_60c7040667a7dc5c,
            mid_getComponents_0358d8ea02f2cdb1,
            mid_getNumComponents_570ce0828f81a2c1,
            mid_getVariance_60c7040667a7dc5c,
            mid_isBiasCorrection_b108b35ef48e27bd,
            mid_isScale_b108b35ef48e27bd,
            mid_transform_9c0348b17db96525,
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
