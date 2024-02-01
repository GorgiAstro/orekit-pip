#ifndef org_orekit_rugged_refraction_ConstantRefractionLayer_H
#define org_orekit_rugged_refraction_ConstantRefractionLayer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        class ConstantRefractionLayer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_13edac039e8cc967,
            mid_getLowestAltitude_9981f74b2d109da6,
            mid_getRefractiveIndex_9981f74b2d109da6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConstantRefractionLayer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ConstantRefractionLayer(const ConstantRefractionLayer& obj) : ::java::lang::Object(obj) {}

          ConstantRefractionLayer(jdouble, jdouble);

          jdouble getLowestAltitude() const;
          jdouble getRefractiveIndex() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {
        extern PyType_Def PY_TYPE_DEF(ConstantRefractionLayer);
        extern PyTypeObject *PY_TYPE(ConstantRefractionLayer);

        class t_ConstantRefractionLayer {
        public:
          PyObject_HEAD
          ConstantRefractionLayer object;
          static PyObject *wrap_Object(const ConstantRefractionLayer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
