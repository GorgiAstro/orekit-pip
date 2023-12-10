#ifndef org_orekit_files_rinex_navigation_IonosphereNequickGMessage_H
#define org_orekit_files_rinex_navigation_IonosphereNequickGMessage_H

#include "org/orekit/files/rinex/navigation/IonosphereBaseMessage.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {
        class Unit;
      }
    }
    namespace gnss {
      class SatelliteSystem;
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
      namespace rinex {
        namespace navigation {

          class IonosphereNequickGMessage : public ::org::orekit::files::rinex::navigation::IonosphereBaseMessage {
           public:
            enum {
              mid_init$_70c1a5d645cab07e,
              mid_getAi0_456d9a2f64d6b28d,
              mid_getAi1_456d9a2f64d6b28d,
              mid_getAi2_456d9a2f64d6b28d,
              mid_getFlags_f2f64475e4580546,
              mid_setAi0_77e0f9a1f260e2e5,
              mid_setAi1_77e0f9a1f260e2e5,
              mid_setAi2_77e0f9a1f260e2e5,
              mid_setFlags_0a2a1ac2721c0336,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IonosphereNequickGMessage(jobject obj) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IonosphereNequickGMessage(const IonosphereNequickGMessage& obj) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(obj) {}

            static ::org::orekit::utils::units::Unit *SFU;
            static ::org::orekit::utils::units::Unit *SFU_PER_DEG;
            static ::org::orekit::utils::units::Unit *SFU_PER_DEG2;

            IonosphereNequickGMessage(const ::org::orekit::gnss::SatelliteSystem &, jint, const ::java::lang::String &);

            jdouble getAi0() const;
            jdouble getAi1() const;
            jdouble getAi2() const;
            jint getFlags() const;
            void setAi0(jdouble) const;
            void setAi1(jdouble) const;
            void setAi2(jdouble) const;
            void setFlags(jint) const;
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
        namespace navigation {
          extern PyType_Def PY_TYPE_DEF(IonosphereNequickGMessage);
          extern PyTypeObject *PY_TYPE(IonosphereNequickGMessage);

          class t_IonosphereNequickGMessage {
          public:
            PyObject_HEAD
            IonosphereNequickGMessage object;
            static PyObject *wrap_Object(const IonosphereNequickGMessage&);
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
