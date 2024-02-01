#ifndef org_orekit_frames_FramesFactory_H
#define org_orekit_frames_FramesFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Predefined;
      class FieldTransform;
      class LazyLoadedFrames;
      class VersionedITRF;
      class Transform;
      class FactoryManagedFrame;
      class ITRFVersion;
      class Frame;
      class EOPHistory;
      class EopHistoryLoader;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class UTCScale;
      class AbsoluteDate;
      class FieldAbsoluteDate;
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
          mid_addDefaultEOP1980HistoryLoaders_799a817065a795a1,
          mid_addDefaultEOP2000HistoryLoaders_799a817065a795a1,
          mid_addEOPHistoryLoader_de5bd84d562632cf,
          mid_buildUncachedITRF_3b3b622e31ec9f50,
          mid_clearEOPHistoryLoaders_ff7cb6c242604316,
          mid_findEOP_6f32f7ea37e7380b,
          mid_getCIRF_84e014d661e18862,
          mid_getEME2000_449c13dc13254059,
          mid_getEOPHistory_5f3b1864e8a02d51,
          mid_getEcliptic_6c55c8e7e159d424,
          mid_getFrame_2914574e34e220d9,
          mid_getFrames_6b4dd5dc4c932983,
          mid_getGCRF_cb151471db4570f0,
          mid_getGTOD_7aa0049260c7fcad,
          mid_getGTOD_84e014d661e18862,
          mid_getICRF_cb151471db4570f0,
          mid_getITRF_84e014d661e18862,
          mid_getITRF_8580ffa0332936c5,
          mid_getITRFEquinox_84e014d661e18862,
          mid_getMOD_d7c1cc155dc219ec,
          mid_getMOD_7aa0049260c7fcad,
          mid_getNonInterpolatingTransform_53dc2db7b752bb5e,
          mid_getNonInterpolatingTransform_8a45f1c7458079da,
          mid_getPZ9011_84e014d661e18862,
          mid_getTEME_449c13dc13254059,
          mid_getTIRF_d7c1cc155dc219ec,
          mid_getTIRF_84e014d661e18862,
          mid_getTOD_7aa0049260c7fcad,
          mid_getTOD_84e014d661e18862,
          mid_getVeis1950_449c13dc13254059,
          mid_setEOPContinuityThreshold_1ad26e8c8c0cd65b,
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
