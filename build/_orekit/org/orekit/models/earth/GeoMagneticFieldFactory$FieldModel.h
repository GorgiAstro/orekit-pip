#ifndef org_orekit_models_earth_GeoMagneticFieldFactory$FieldModel_H
#define org_orekit_models_earth_GeoMagneticFieldFactory$FieldModel_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        class GeoMagneticFieldFactory$FieldModel;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        class GeoMagneticFieldFactory$FieldModel : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_876865b83506c75e,
            mid_values_370185eaef43d24c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GeoMagneticFieldFactory$FieldModel(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GeoMagneticFieldFactory$FieldModel(const GeoMagneticFieldFactory$FieldModel& obj) : ::java::lang::Enum(obj) {}

          static GeoMagneticFieldFactory$FieldModel *IGRF;
          static GeoMagneticFieldFactory$FieldModel *WMM;

          static GeoMagneticFieldFactory$FieldModel valueOf(const ::java::lang::String &);
          static JArray< GeoMagneticFieldFactory$FieldModel > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        extern PyType_Def PY_TYPE_DEF(GeoMagneticFieldFactory$FieldModel);
        extern PyTypeObject *PY_TYPE(GeoMagneticFieldFactory$FieldModel);

        class t_GeoMagneticFieldFactory$FieldModel {
        public:
          PyObject_HEAD
          GeoMagneticFieldFactory$FieldModel object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_GeoMagneticFieldFactory$FieldModel *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const GeoMagneticFieldFactory$FieldModel&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const GeoMagneticFieldFactory$FieldModel&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
