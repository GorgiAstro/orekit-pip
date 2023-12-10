#ifndef org_orekit_files_sp3_DataUsed_H
#define org_orekit_files_sp3_DataUsed_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        class DataUsed;
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
    namespace files {
      namespace sp3 {

        class DataUsed : public ::java::lang::Enum {
         public:
          enum {
            mid_getKey_0090f7797e403f43,
            mid_parse_98fea967950d5792,
            mid_valueOf_77c7cecd18cf70ed,
            mid_values_2e0b34ad799220f7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DataUsed(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DataUsed(const DataUsed& obj) : ::java::lang::Enum(obj) {}

          static DataUsed *CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE;
          static DataUsed *CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE;
          static DataUsed *CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE;
          static DataUsed *CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE;
          static DataUsed *CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE;
          static DataUsed *CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE;
          static DataUsed *MIXED;
          static DataUsed *ORBIT;
          static DataUsed *SATELLITE_LASER_RANGING;
          static DataUsed *TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE;
          static DataUsed *TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE;
          static DataUsed *TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE;
          static DataUsed *TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE;
          static DataUsed *UNDIFFERENTIATED_CARRIER_PHASE;
          static DataUsed *UNDIFFERENTIATED_CODE_PHASE;

          ::java::lang::String getKey() const;
          static DataUsed parse(const ::java::lang::String &, const ::java::lang::String &, jchar);
          static DataUsed valueOf(const ::java::lang::String &);
          static JArray< DataUsed > values();
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
        extern PyType_Def PY_TYPE_DEF(DataUsed);
        extern PyTypeObject *PY_TYPE(DataUsed);

        class t_DataUsed {
        public:
          PyObject_HEAD
          DataUsed object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DataUsed *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DataUsed&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DataUsed&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
