#ifndef org_orekit_files_sp3_SP3FileType_H
#define org_orekit_files_sp3_SP3FileType_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        class SP3FileType;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        class SP3FileType : public ::java::lang::Enum {
         public:
          enum {
            mid_getKey_1c1fa1e935d6cdcf,
            mid_parse_d892c60b18cb8deb,
            mid_valueOf_d892c60b18cb8deb,
            mid_values_a90cb300b9e0b2f2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SP3FileType(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SP3FileType(const SP3FileType& obj) : ::java::lang::Enum(obj) {}

          static SP3FileType *COMPASS;
          static SP3FileType *GALILEO;
          static SP3FileType *GLONASS;
          static SP3FileType *GPS;
          static SP3FileType *IRNSS;
          static SP3FileType *LEO;
          static SP3FileType *MIXED;
          static SP3FileType *QZSS;
          static SP3FileType *SBAS;
          static SP3FileType *UNDEFINED;

          ::java::lang::String getKey() const;
          static SP3FileType parse(const ::java::lang::String &);
          static SP3FileType valueOf(const ::java::lang::String &);
          static JArray< SP3FileType > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        extern PyType_Def PY_TYPE_DEF(SP3FileType);
        extern PyTypeObject *PY_TYPE(SP3FileType);

        class t_SP3FileType {
        public:
          PyObject_HEAD
          SP3FileType object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SP3FileType *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SP3FileType&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SP3FileType&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
