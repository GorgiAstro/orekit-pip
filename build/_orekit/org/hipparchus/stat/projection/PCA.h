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
            mid_init$_44ed599e93e8a30c,
            mid_init$_79d569e065493120,
            mid_fit_a97c2eb77f399243,
            mid_fitAndTransform_fa7294d53f56a3e3,
            mid_getCenter_25e1757a36c4dde2,
            mid_getComponents_3b7b373db8e7887f,
            mid_getNumComponents_55546ef6a647f39b,
            mid_getVariance_25e1757a36c4dde2,
            mid_isBiasCorrection_9ab94ac1dc23b105,
            mid_isScale_9ab94ac1dc23b105,
            mid_transform_fa7294d53f56a3e3,
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
