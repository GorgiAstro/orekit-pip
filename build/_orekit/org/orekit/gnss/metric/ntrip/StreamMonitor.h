#ifndef org_orekit_gnss_metric_ntrip_StreamMonitor_H
#define org_orekit_gnss_metric_ntrip_StreamMonitor_H

#include "org/orekit/gnss/metric/parser/AbstractEncodedMessage.h"

namespace java {
  namespace lang {
    class Runnable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          class Type;
          class MessageObserver;
          class NtripClient;
        }
      }
    }
    namespace errors {
      class OrekitException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          class StreamMonitor : public ::org::orekit::gnss::metric::parser::AbstractEncodedMessage {
           public:
            enum {
              mid_init$_1b25a01a27e47695,
              mid_addObserver_2fd2308d42ce0a43,
              mid_getException_5062f2ffb53bc0b4,
              mid_run_0640e6acf969ed28,
              mid_stopMonitoring_0640e6acf969ed28,
              mid_fetchByte_412668abc8d889e9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StreamMonitor(jobject obj) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StreamMonitor(const StreamMonitor& obj) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(obj) {}

            StreamMonitor(const ::org::orekit::gnss::metric::ntrip::NtripClient &, const ::java::lang::String &, const ::org::orekit::gnss::metric::ntrip::Type &, jboolean, jboolean, jdouble, jdouble, jint);

            void addObserver(jint, const ::org::orekit::gnss::metric::ntrip::MessageObserver &) const;
            ::org::orekit::errors::OrekitException getException() const;
            void run() const;
            void stopMonitoring() const;
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
          extern PyType_Def PY_TYPE_DEF(StreamMonitor);
          extern PyTypeObject *PY_TYPE(StreamMonitor);

          class t_StreamMonitor {
          public:
            PyObject_HEAD
            StreamMonitor object;
            static PyObject *wrap_Object(const StreamMonitor&);
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
