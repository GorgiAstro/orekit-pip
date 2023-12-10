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
              mid_init$_a82ff7a18fa6993f,
              mid_getAi0_dff5885c2c873297,
              mid_getAi1_dff5885c2c873297,
              mid_getAi2_dff5885c2c873297,
              mid_getFlags_570ce0828f81a2c1,
              mid_setAi0_17db3a65980d3441,
              mid_setAi1_17db3a65980d3441,
              mid_setAi2_17db3a65980d3441,
              mid_setFlags_99803b0791f320ff,
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
