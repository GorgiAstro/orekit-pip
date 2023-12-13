#ifndef org_orekit_frames_FramesFactory_H
#define org_orekit_frames_FramesFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class FieldTransform;
      class VersionedITRF;
      class Predefined;
      class EOPHistory;
      class Transform;
      class Frame;
      class LazyLoadedFrames;
      class FactoryManagedFrame;
      class ITRFVersion;
      class EopHistoryLoader;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class FieldAbsoluteDate;
      class UTCScale;
      class AbsoluteDate;
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
    namespace frames {

      class FramesFactory : public ::java::lang::Object {
       public:
        enum {
          mid_addDefaultEOP1980HistoryLoaders_e39b9463875d2aea,
          mid_addDefaultEOP2000HistoryLoaders_e39b9463875d2aea,
          mid_addEOPHistoryLoader_f075adbabba5d6bc,
          mid_buildUncachedITRF_01e80ae3803485ac,
          mid_clearEOPHistoryLoaders_a1fa5dae97ea5ed2,
          mid_findEOP_c247e78135557d7e,
          mid_getCIRF_b8f4087626aff39a,
          mid_getEME2000_38d89ffeb32a6f21,
          mid_getEOPHistory_a77e9d6bc0da2439,
          mid_getEcliptic_15d291dcc172f59b,
          mid_getFrame_acd75386f33c2984,
          mid_getFrames_5dce20e74866c277,
          mid_getGCRF_2c51111cc6894ba1,
          mid_getGTOD_816956b542562f07,
          mid_getGTOD_b8f4087626aff39a,
          mid_getICRF_2c51111cc6894ba1,
          mid_getITRF_b8f4087626aff39a,
          mid_getITRF_2e00eadcfbf4fef8,
          mid_getITRFEquinox_b8f4087626aff39a,
          mid_getMOD_5e99e4a3c4469bb0,
          mid_getMOD_816956b542562f07,
          mid_getNonInterpolatingTransform_4144c620244f368d,
          mid_getNonInterpolatingTransform_12e9f713a8248456,
          mid_getPZ9011_b8f4087626aff39a,
          mid_getTEME_38d89ffeb32a6f21,
          mid_getTIRF_5e99e4a3c4469bb0,
          mid_getTIRF_b8f4087626aff39a,
          mid_getTOD_816956b542562f07,
          mid_getTOD_b8f4087626aff39a,
          mid_getVeis1950_38d89ffeb32a6f21,
          mid_setEOPContinuityThreshold_8ba9fe7a847cecad,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FramesFactory(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FramesFactory(const FramesFactory& obj) : ::java::lang::Object(obj) {}

        static ::java::lang::String *BULLETINA_FILENAME;
        static ::java::lang::String *BULLETINB_1980_FILENAME;
        static ::java::lang::String *BULLETINB_2000_FILENAME;
        static ::java::lang::String *CSV_FILENAME;
        static ::java::lang::String *EOPC04_1980_FILENAME;
        static ::java::lang::String *EOPC04_2000_FILENAME;
        static ::java::lang::String *RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME;
        static ::java::lang::String *RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME;
        static ::java::lang::String *XML_1980_FILENAME;
        static ::java::lang::String *XML_2000_FILENAME;

        static void addDefaultEOP1980HistoryLoaders(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
        static void addDefaultEOP2000HistoryLoaders(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
        static void addEOPHistoryLoader(const ::org::orekit::utils::IERSConventions &, const ::org::orekit::frames::EopHistoryLoader &);
        static ::org::orekit::frames::Frame buildUncachedITRF(const ::org::orekit::frames::EOPHistory &, const ::org::orekit::time::UTCScale &);
        static void clearEOPHistoryLoaders();
        static ::org::orekit::frames::EOPHistory findEOP(const ::org::orekit::frames::Frame &);
        static ::org::orekit::frames::FactoryManagedFrame getCIRF(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getEME2000();
        static ::org::orekit::frames::EOPHistory getEOPHistory(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::Frame getEcliptic(const ::org::orekit::utils::IERSConventions &);
        static ::org::orekit::frames::Frame getFrame(const ::org::orekit::frames::Predefined &);
        static ::org::orekit::frames::LazyLoadedFrames getFrames();
        static ::org::orekit::frames::Frame getGCRF();
        static ::org::orekit::frames::FactoryManagedFrame getGTOD(jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getGTOD(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::Frame getICRF();
        static ::org::orekit::frames::FactoryManagedFrame getITRF(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::VersionedITRF getITRF(const ::org::orekit::frames::ITRFVersion &, const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getITRFEquinox(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getMOD(const ::org::orekit::utils::IERSConventions &);
        static ::org::orekit::frames::FactoryManagedFrame getMOD(jboolean);
        static ::org::orekit::frames::Transform getNonInterpolatingTransform(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &);
        static ::org::orekit::frames::FieldTransform getNonInterpolatingTransform(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &);
        static ::org::orekit::frames::FactoryManagedFrame getPZ9011(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getTEME();
        static ::org::orekit::frames::FactoryManagedFrame getTIRF(const ::org::orekit::utils::IERSConventions &);
        static ::org::orekit::frames::FactoryManagedFrame getTIRF(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getTOD(jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getTOD(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getVeis1950();
        static void setEOPContinuityThreshold(jdouble);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(FramesFactory);
      extern PyTypeObject *PY_TYPE(FramesFactory);

      class t_FramesFactory {
      public:
        PyObject_HEAD
        FramesFactory object;
        static PyObject *wrap_Object(const FramesFactory&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
