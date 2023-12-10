#ifndef org_orekit_files_rinex_clock_RinexClock$Receiver_H
#define org_orekit_files_rinex_clock_RinexClock$Receiver_H

#include "java/lang/Object.h"

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
      namespace rinex {
        namespace clock {

          class RinexClock$Receiver : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e988acb14b88b552,
              mid_getDesignator_0090f7797e403f43,
              mid_getReceiverIdentifier_0090f7797e403f43,
              mid_getX_456d9a2f64d6b28d,
              mid_getY_456d9a2f64d6b28d,
              mid_getZ_456d9a2f64d6b28d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RinexClock$Receiver(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RinexClock$Receiver(const RinexClock$Receiver& obj) : ::java::lang::Object(obj) {}

            RinexClock$Receiver(const ::java::lang::String &, const ::java::lang::String &, jdouble, jdouble, jdouble);

            ::java::lang::String getDesignator() const;
            ::java::lang::String getReceiverIdentifier() const;
            jdouble getX() const;
            jdouble getY() const;
            jdouble getZ() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {
          extern PyType_Def PY_TYPE_DEF(RinexClock$Receiver);
          extern PyTypeObject *PY_TYPE(RinexClock$Receiver);

          class t_RinexClock$Receiver {
          public:
            PyObject_HEAD
            RinexClock$Receiver object;
            static PyObject *wrap_Object(const RinexClock$Receiver&);
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
