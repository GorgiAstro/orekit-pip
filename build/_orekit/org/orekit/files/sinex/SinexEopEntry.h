#ifndef org_orekit_files_sinex_SinexEopEntry_H
#define org_orekit_files_sinex_SinexEopEntry_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class IERSConventions$NutationCorrectionConverter;
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
      class TimeStamped;
    }
    namespace frames {
      class EOPEntry;
      class ITRFVersion;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        class SinexEopEntry : public ::java::lang::Object {
         public:
          enum {
            mid_init$_20affcbd28542333,
            mid_getDate_7a97f7e149e79afb,
            mid_getLod_557b8123390d8d0c,
            mid_getNutLn_557b8123390d8d0c,
            mid_getNutOb_557b8123390d8d0c,
            mid_getNutX_557b8123390d8d0c,
            mid_getNutY_557b8123390d8d0c,
            mid_getUt1MinusUtc_557b8123390d8d0c,
            mid_getXPo_557b8123390d8d0c,
            mid_getYPo_557b8123390d8d0c,
            mid_setLod_10f281d777284cea,
            mid_setNutLn_10f281d777284cea,
            mid_setNutOb_10f281d777284cea,
            mid_setNutX_10f281d777284cea,
            mid_setNutY_10f281d777284cea,
            mid_setUt1MinusUtc_10f281d777284cea,
            mid_setxPo_10f281d777284cea,
            mid_setyPo_10f281d777284cea,
            mid_toEopEntry_29ec6104a94c2ddc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SinexEopEntry(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SinexEopEntry(const SinexEopEntry& obj) : ::java::lang::Object(obj) {}

          SinexEopEntry(const ::org::orekit::time::AbsoluteDate &);

          ::org::orekit::time::AbsoluteDate getDate() const;
          jdouble getLod() const;
          jdouble getNutLn() const;
          jdouble getNutOb() const;
          jdouble getNutX() const;
          jdouble getNutY() const;
          jdouble getUt1MinusUtc() const;
          jdouble getXPo() const;
          jdouble getYPo() const;
          void setLod(jdouble) const;
          void setNutLn(jdouble) const;
          void setNutOb(jdouble) const;
          void setNutX(jdouble) const;
          void setNutY(jdouble) const;
          void setUt1MinusUtc(jdouble) const;
          void setxPo(jdouble) const;
          void setyPo(jdouble) const;
          ::org::orekit::frames::EOPEntry toEopEntry(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter &, const ::org::orekit::frames::ITRFVersion &, const ::org::orekit::time::TimeScale &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {
        extern PyType_Def PY_TYPE_DEF(SinexEopEntry);
        extern PyTypeObject *PY_TYPE(SinexEopEntry);

        class t_SinexEopEntry {
        public:
          PyObject_HEAD
          SinexEopEntry object;
          static PyObject *wrap_Object(const SinexEopEntry&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
