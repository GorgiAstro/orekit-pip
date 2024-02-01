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
            mid_init$_8fd427ab23829bf5,
            mid_init$_7894216015228118,
            mid_fit_7b0eb81c6fb1791c,
            mid_fitAndTransform_d9fb07d4cbf99fb5,
            mid_getCenter_be783177b060994b,
            mid_getComponents_eda3f19b8225f78f,
            mid_getNumComponents_d6ab429752e7c267,
            mid_getVariance_be783177b060994b,
            mid_isBiasCorrection_eee3de00fe971136,
            mid_isScale_eee3de00fe971136,
            mid_transform_d9fb07d4cbf99fb5,
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
