#ifndef org_orekit_forces_gravity_potential_OceanTidesWave_H
#define org_orekit_forces_gravity_potential_OceanTidesWave_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class BodiesElements;
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
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class OceanTidesWave : public ::java::lang::Object {
           public:
            enum {
              mid_init$_518038235ea0862f,
              mid_addContribution_80e6f30d2d5a3965,
              mid_getDoodson_570ce0828f81a2c1,
              mid_getMaxDegree_570ce0828f81a2c1,
              mid_getMaxOrder_570ce0828f81a2c1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OceanTidesWave(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OceanTidesWave(const OceanTidesWave& obj) : ::java::lang::Object(obj) {}

            OceanTidesWave(jint, jint, jint, const JArray< JArray< JArray< jdouble > > > &);

            void addContribution(const ::org::orekit::data::BodiesElements &, const JArray< JArray< jdouble > > &, const JArray< JArray< jdouble > > &) const;
            jint getDoodson() const;
            jint getMaxDegree() const;
            jint getMaxOrder() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          extern PyType_Def PY_TYPE_DEF(OceanTidesWave);
          extern PyTypeObject *PY_TYPE(OceanTidesWave);

          class t_OceanTidesWave {
          public:
            PyObject_HEAD
            OceanTidesWave object;
            static PyObject *wrap_Object(const OceanTidesWave&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
