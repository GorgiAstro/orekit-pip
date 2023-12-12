#ifndef org_orekit_frames_FramesFactory_H
#define org_orekit_frames_FramesFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class UTCScale;
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace frames {
      class LazyLoadedFrames;
      class Transform;
      class EopHistoryLoader;
      class Frame;
      class Predefined;
      class FieldTransform;
      class ITRFVersion;
      class EOPHistory;
      class VersionedITRF;
      class FactoryManagedFrame;
    }
    namespace utils {
      class IERSConventions;
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
          mid_addDefaultEOP1980HistoryLoaders_7ef3cb05fa691170,
          mid_addDefaultEOP2000HistoryLoaders_7ef3cb05fa691170,
          mid_addEOPHistoryLoader_4f61b75864dcff87,
          mid_buildUncachedITRF_cda2d3efafd0c0db,
          mid_clearEOPHistoryLoaders_0640e6acf969ed28,
          mid_findEOP_289e035f9d645fc8,
          mid_getCIRF_af417399ee2f3e0d,
          mid_getEME2000_e96d0d85e78fc6bd,
          mid_getEOPHistory_9cf4a1ec2e53bbd3,
          mid_getEcliptic_bb61238dc14574bc,
          mid_getFrame_9103848bb456e582,
          mid_getFrames_19dab31df3f9900d,
          mid_getGCRF_6c9bc0a928c56d4e,
          mid_getGTOD_a06a41ba6e4eb36a,
          mid_getGTOD_af417399ee2f3e0d,
          mid_getICRF_6c9bc0a928c56d4e,
          mid_getITRF_af417399ee2f3e0d,
          mid_getITRF_e7702de838b8de68,
          mid_getITRFEquinox_af417399ee2f3e0d,
          mid_getMOD_57509cacf2364dd9,
          mid_getMOD_a06a41ba6e4eb36a,
          mid_getNonInterpolatingTransform_28d0e572b753aaa4,
          mid_getNonInterpolatingTransform_2ae6ba70779ea979,
          mid_getPZ9011_af417399ee2f3e0d,
          mid_getTEME_e96d0d85e78fc6bd,
          mid_getTIRF_57509cacf2364dd9,
          mid_getTIRF_af417399ee2f3e0d,
          mid_getTOD_a06a41ba6e4eb36a,
          mid_getTOD_af417399ee2f3e0d,
          mid_getVeis1950_e96d0d85e78fc6bd,
          mid_setEOPContinuityThreshold_10f281d777284cea,
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
