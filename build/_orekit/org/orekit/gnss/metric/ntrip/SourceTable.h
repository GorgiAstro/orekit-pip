#ifndef org_orekit_gnss_metric_ntrip_SourceTable_H
#define org_orekit_gnss_metric_ntrip_SourceTable_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          class CasterRecord;
          class DataStreamRecord;
          class NetworkRecord;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          class SourceTable : public ::java::lang::Object {
           public:
            enum {
              mid_getCasters_e62d3bb06d56d7e3,
              mid_getDataStreams_e62d3bb06d56d7e3,
              mid_getNetworks_e62d3bb06d56d7e3,
              mid_getNtripFlags_1c1fa1e935d6cdcf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SourceTable(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SourceTable(const SourceTable& obj) : ::java::lang::Object(obj) {}

            ::java::util::List getCasters() const;
            ::java::util::List getDataStreams() const;
            ::java::util::List getNetworks() const;
            ::java::lang::String getNtripFlags() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          extern PyType_Def PY_TYPE_DEF(SourceTable);
          extern PyTypeObject *PY_TYPE(SourceTable);

          class t_SourceTable {
          public:
            PyObject_HEAD
            SourceTable object;
            static PyObject *wrap_Object(const SourceTable&);
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
