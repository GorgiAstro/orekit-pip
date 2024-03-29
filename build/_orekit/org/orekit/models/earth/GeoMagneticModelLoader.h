#ifndef org_orekit_models_earth_GeoMagneticModelLoader_H
#define org_orekit_models_earth_GeoMagneticModelLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace text {
    class ParseException;
  }
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        class GeoMagneticField;
      }
    }
    namespace data {
      class DataLoader;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        class GeoMagneticModelLoader : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_getModels_3bfef5c77ceb081a,
            mid_loadData_bec0f846e5ec73da,
            mid_stillAcceptsData_eee3de00fe971136,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GeoMagneticModelLoader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GeoMagneticModelLoader(const GeoMagneticModelLoader& obj) : ::java::lang::Object(obj) {}

          GeoMagneticModelLoader();

          ::java::util::Collection getModels() const;
          void loadData(const ::java::io::InputStream &, const ::java::lang::String &) const;
          jboolean stillAcceptsData() const;
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
        extern PyType_Def PY_TYPE_DEF(GeoMagneticModelLoader);
        extern PyTypeObject *PY_TYPE(GeoMagneticModelLoader);

        class t_GeoMagneticModelLoader {
        public:
          PyObject_HEAD
          GeoMagneticModelLoader object;
          static PyObject *wrap_Object(const GeoMagneticModelLoader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
