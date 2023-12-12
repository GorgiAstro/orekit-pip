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
            mid_init$_a3da1a935cb37f7b,
            mid_init$_9b50b4169e00a9a7,
            mid_fit_08e8cc218c0c12b9,
            mid_fitAndTransform_2b7f9de2d1ea1ddb,
            mid_getCenter_a53a7513ecedada2,
            mid_getComponents_8cf5267aa13a77f3,
            mid_getNumComponents_412668abc8d889e9,
            mid_getVariance_a53a7513ecedada2,
            mid_isBiasCorrection_89b302893bdbe1f1,
            mid_isScale_89b302893bdbe1f1,
            mid_transform_2b7f9de2d1ea1ddb,
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
