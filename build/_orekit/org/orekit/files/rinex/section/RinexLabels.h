#ifndef org_orekit_files_rinex_section_RinexLabels_H
#define org_orekit_files_rinex_section_RinexLabels_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace section {
          class RinexLabels;
        }
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
      namespace rinex {
        namespace section {

          class RinexLabels : public ::java::lang::Enum {
           public:
            enum {
              mid_getLabel_1c1fa1e935d6cdcf,
              mid_matches_cde6b28e15c96b75,
              mid_valueOf_054b20b7c728ef4e,
              mid_values_9965677b3e03746d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RinexLabels(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RinexLabels(const RinexLabels& obj) : ::java::lang::Enum(obj) {}

            static RinexLabels *ANTENNA_B_SIGHT_XYZ;
            static RinexLabels *ANTENNA_DELTA_H_E_N;
            static RinexLabels *ANTENNA_DELTA_X_Y_Z;
            static RinexLabels *ANTENNA_PHASE_CENTER;
            static RinexLabels *ANTENNA_ZERODIR_AZI;
            static RinexLabels *ANTENNA_ZERODIR_XYZ;
            static RinexLabels *ANT_NB_TYPE;
            static RinexLabels *APPROX_POSITION_XYZ;
            static RinexLabels *CENTER_OF_MASS_XYZ;
            static RinexLabels *COMMENT;
            static RinexLabels *DOI;
            static RinexLabels *END;
            static RinexLabels *GLONASS_COD_PHS_BIS;
            static RinexLabels *GLONASS_SLOT_FRQ_NB;
            static RinexLabels *INTERVAL;
            static RinexLabels *LEAP_SECONDS;
            static RinexLabels *LICENSE;
            static RinexLabels *MARKER_NAME;
            static RinexLabels *MARKER_NUMBER;
            static RinexLabels *MARKER_TYPE;
            static RinexLabels *NB_OF_SATELLITES;
            static RinexLabels *NB_TYPES_OF_OBSERV;
            static RinexLabels *OBSERVER_AGENCY;
            static RinexLabels *OBS_SCALE_FACTOR;
            static RinexLabels *PRN_NB_OF_OBS;
            static RinexLabels *PROGRAM;
            static RinexLabels *RCV_CLOCK_OFFS_APPL;
            static RinexLabels *REC_NB_TYPE_VERS;
            static RinexLabels *SIGNAL_STRENGTH_UNIT;
            static RinexLabels *STATION_INFORMATION;
            static RinexLabels *SYS_DCBS_APPLIED;
            static RinexLabels *SYS_NB_TYPES_OF_OBSERV;
            static RinexLabels *SYS_PCVS_APPLIED;
            static RinexLabels *SYS_PHASE_SHIFT;
            static RinexLabels *SYS_SCALE_FACTOR;
            static RinexLabels *TIME_OF_FIRST_OBS;
            static RinexLabels *TIME_OF_LAST_OBS;
            static RinexLabels *VERSION;
            static RinexLabels *WAVELENGTH_FACT_L1_2;

            ::java::lang::String getLabel() const;
            jboolean matches(const ::java::lang::String &) const;
            static RinexLabels valueOf(const ::java::lang::String &);
            static JArray< RinexLabels > values();
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
        namespace section {
          extern PyType_Def PY_TYPE_DEF(RinexLabels);
          extern PyTypeObject *PY_TYPE(RinexLabels);

          class t_RinexLabels {
          public:
            PyObject_HEAD
            RinexLabels object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_RinexLabels *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const RinexLabels&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const RinexLabels&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
