#ifndef org_orekit_gnss_metric_ntrip_NtripClient_H
#define org_orekit_gnss_metric_ntrip_NtripClient_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          class MessageObserver;
          class SourceTable;
          class Type;
        }
      }
    }
  }
}
namespace java {
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

          class NtripClient : public ::java::lang::Object {
           public:
            enum {
              mid_init$_409747bddf859341,
              mid_addObserver_4cc5c5cdb5b5be2f,
              mid_checkException_ff7cb6c242604316,
              mid_getHost_d2c8eb4129821f0e,
              mid_getPort_d6ab429752e7c267,
              mid_getSourceTable_3ac901a526a53433,
              mid_setFix_a1f752ef84c10e69,
              mid_setReconnectParameters_905e65280a4e6722,
              mid_setTimeout_8fd427ab23829bf5,
              mid_startStreaming_f037fdaad5f5f57b,
              mid_stopStreaming_8fd427ab23829bf5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NtripClient(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NtripClient(const NtripClient& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_MAX_RECONNECT;
            static jint DEFAULT_PORT;
            static jdouble DEFAULT_RECONNECT_DELAY;
            static jdouble DEFAULT_RECONNECT_DELAY_FACTOR;
            static jint DEFAULT_TIMEOUT;

            NtripClient(const ::java::lang::String &, jint);

            void addObserver(jint, const ::java::lang::String &, const ::org::orekit::gnss::metric::ntrip::MessageObserver &) const;
            void checkException() const;
            ::java::lang::String getHost() const;
            jint getPort() const;
            ::org::orekit::gnss::metric::ntrip::SourceTable getSourceTable() const;
            void setFix(jint, jint, jdouble, jdouble, jdouble, jdouble, jdouble) const;
            void setReconnectParameters(jdouble, jdouble, jint) const;
            void setTimeout(jint) const;
            void startStreaming(const ::java::lang::String &, const ::org::orekit::gnss::metric::ntrip::Type &, jboolean, jboolean) const;
            void stopStreaming(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(NtripClient);
          extern PyTypeObject *PY_TYPE(NtripClient);

          class t_NtripClient {
          public:
            PyObject_HEAD
            NtripClient object;
            static PyObject *wrap_Object(const NtripClient&);
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
