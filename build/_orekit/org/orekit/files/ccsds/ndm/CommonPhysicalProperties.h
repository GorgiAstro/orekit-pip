#ifndef org_orekit_files_ccsds_ndm_CommonPhysicalProperties_H
#define org_orekit_files_ccsds_ndm_CommonPhysicalProperties_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace complex {
      class Quaternion;
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
      namespace ccsds {
        namespace ndm {

          class CommonPhysicalProperties : public ::org::orekit::files::ccsds::section::CommentsContainer {
           public:
            enum {
              mid_init$_a1fa5dae97ea5ed2,
              mid_getMaxRcs_b74f83833fdad017,
              mid_getMinRcs_b74f83833fdad017,
              mid_getOebAreaAlongIntermediate_b74f83833fdad017,
              mid_getOebAreaAlongMax_b74f83833fdad017,
              mid_getOebAreaAlongMin_b74f83833fdad017,
              mid_getOebIntermediate_b74f83833fdad017,
              mid_getOebMax_b74f83833fdad017,
              mid_getOebMin_b74f83833fdad017,
              mid_getOebParentFrame_69d8be1b6b0a1a94,
              mid_getOebParentFrameEpoch_c325492395d89b24,
              mid_getOebQ_6890e724ec73e493,
              mid_getRcs_b74f83833fdad017,
              mid_getReflectance_b74f83833fdad017,
              mid_getVmAbsolute_b74f83833fdad017,
              mid_getVmApparent_b74f83833fdad017,
              mid_getVmApparentMax_b74f83833fdad017,
              mid_getVmApparentMin_b74f83833fdad017,
              mid_setMaxRcs_8ba9fe7a847cecad,
              mid_setMinRcs_8ba9fe7a847cecad,
              mid_setOebAreaAlongIntermediate_8ba9fe7a847cecad,
              mid_setOebAreaAlongMax_8ba9fe7a847cecad,
              mid_setOebAreaAlongMin_8ba9fe7a847cecad,
              mid_setOebIntermediate_8ba9fe7a847cecad,
              mid_setOebMax_8ba9fe7a847cecad,
              mid_setOebMin_8ba9fe7a847cecad,
              mid_setOebParentFrame_4755133c5c4c59be,
              mid_setOebParentFrameEpoch_02135a6ef25adb4b,
              mid_setOebQ_d5322b8b512aeb26,
              mid_setRcs_8ba9fe7a847cecad,
              mid_setReflectance_8ba9fe7a847cecad,
              mid_setVmAbsolute_8ba9fe7a847cecad,
              mid_setVmApparent_8ba9fe7a847cecad,
              mid_setVmApparentMax_8ba9fe7a847cecad,
              mid_setVmApparentMin_8ba9fe7a847cecad,
              mid_validate_8ba9fe7a847cecad,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CommonPhysicalProperties(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CommonPhysicalProperties(const CommonPhysicalProperties& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

            CommonPhysicalProperties();

            jdouble getMaxRcs() const;
            jdouble getMinRcs() const;
            jdouble getOebAreaAlongIntermediate() const;
            jdouble getOebAreaAlongMax() const;
            jdouble getOebAreaAlongMin() const;
            jdouble getOebIntermediate() const;
            jdouble getOebMax() const;
            jdouble getOebMin() const;
            ::org::orekit::files::ccsds::definitions::FrameFacade getOebParentFrame() const;
            ::org::orekit::time::AbsoluteDate getOebParentFrameEpoch() const;
            ::org::hipparchus::complex::Quaternion getOebQ() const;
            jdouble getRcs() const;
            jdouble getReflectance() const;
            jdouble getVmAbsolute() const;
            jdouble getVmApparent() const;
            jdouble getVmApparentMax() const;
            jdouble getVmApparentMin() const;
            void setMaxRcs(jdouble) const;
            void setMinRcs(jdouble) const;
            void setOebAreaAlongIntermediate(jdouble) const;
            void setOebAreaAlongMax(jdouble) const;
            void setOebAreaAlongMin(jdouble) const;
            void setOebIntermediate(jdouble) const;
            void setOebMax(jdouble) const;
            void setOebMin(jdouble) const;
            void setOebParentFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
            void setOebParentFrameEpoch(const ::org::orekit::time::AbsoluteDate &) const;
            void setOebQ(jint, jdouble) const;
            void setRcs(jdouble) const;
            void setReflectance(jdouble) const;
            void setVmAbsolute(jdouble) const;
            void setVmApparent(jdouble) const;
            void setVmApparentMax(jdouble) const;
            void setVmApparentMin(jdouble) const;
            void validate(jdouble) const;
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
      namespace ccsds {
        namespace ndm {
          extern PyType_Def PY_TYPE_DEF(CommonPhysicalProperties);
          extern PyTypeObject *PY_TYPE(CommonPhysicalProperties);

          class t_CommonPhysicalProperties {
          public:
            PyObject_HEAD
            CommonPhysicalProperties object;
            static PyObject *wrap_Object(const CommonPhysicalProperties&);
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
