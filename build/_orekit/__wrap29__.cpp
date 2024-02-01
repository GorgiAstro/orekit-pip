#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/Selector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *Selector::class$ = NULL;
        jmethodID *Selector::mids$ = NULL;
        bool Selector::live$ = false;

        jclass Selector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/Selector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_select_82f92590f4247da1] = env->getMethodID(cls, "select", "(DD)D");
            mids$[mid_selectFirst_0fc66ee74538f12c] = env->getMethodID(cls, "selectFirst", "(DD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Selector::Selector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Selector::select(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_select_82f92590f4247da1], a0, a1);
        }

        jboolean Selector::selectFirst(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_selectFirst_0fc66ee74538f12c], a0, a1);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        static PyObject *t_Selector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Selector_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Selector_init_(t_Selector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Selector_select(t_Selector *self, PyObject *args);
        static PyObject *t_Selector_selectFirst(t_Selector *self, PyObject *args);

        static PyMethodDef t_Selector__methods_[] = {
          DECLARE_METHOD(t_Selector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Selector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Selector, select, METH_VARARGS),
          DECLARE_METHOD(t_Selector, selectFirst, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Selector)[] = {
          { Py_tp_methods, t_Selector__methods_ },
          { Py_tp_init, (void *) t_Selector_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Selector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Selector, t_Selector, Selector);

        void t_Selector::install(PyObject *module)
        {
          installType(&PY_TYPE(Selector), &PY_TYPE_DEF(Selector), module, "Selector", 0);
        }

        void t_Selector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Selector), "class_", make_descriptor(Selector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Selector), "wrapfn_", make_descriptor(t_Selector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Selector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Selector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Selector::initializeClass, 1)))
            return NULL;
          return t_Selector::wrap_Object(Selector(((t_Selector *) arg)->object.this$));
        }
        static PyObject *t_Selector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Selector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Selector_init_(t_Selector *self, PyObject *args, PyObject *kwds)
        {
          Selector object((jobject) NULL);

          INT_CALL(object = Selector());
          self->object = object;

          return 0;
        }

        static PyObject *t_Selector_select(t_Selector *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.select(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "select", args);
          return NULL;
        }

        static PyObject *t_Selector_selectFirst(t_Selector *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.selectFirst(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "selectFirst", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCovarianceHistoryMetadata::class$ = NULL;
              jmethodID *OrbitCovarianceHistoryMetadata::mids$ = NULL;
              bool OrbitCovarianceHistoryMetadata::live$ = false;

              jclass OrbitCovarianceHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_8497861b879c83f7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_getCovBasis_d2c8eb4129821f0e] = env->getMethodID(cls, "getCovBasis", "()Ljava/lang/String;");
                  mids$[mid_getCovBasisID_d2c8eb4129821f0e] = env->getMethodID(cls, "getCovBasisID", "()Ljava/lang/String;");
                  mids$[mid_getCovConfidence_9981f74b2d109da6] = env->getMethodID(cls, "getCovConfidence", "()D");
                  mids$[mid_getCovFrameEpoch_80e11148db499dda] = env->getMethodID(cls, "getCovFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getCovID_d2c8eb4129821f0e] = env->getMethodID(cls, "getCovID", "()Ljava/lang/String;");
                  mids$[mid_getCovNextID_d2c8eb4129821f0e] = env->getMethodID(cls, "getCovNextID", "()Ljava/lang/String;");
                  mids$[mid_getCovOrdering_08d7eff08cd4715e] = env->getMethodID(cls, "getCovOrdering", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;");
                  mids$[mid_getCovPrevID_d2c8eb4129821f0e] = env->getMethodID(cls, "getCovPrevID", "()Ljava/lang/String;");
                  mids$[mid_getCovReferenceFrame_0fc1562b68204151] = env->getMethodID(cls, "getCovReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getCovScaleMax_9981f74b2d109da6] = env->getMethodID(cls, "getCovScaleMax", "()D");
                  mids$[mid_getCovScaleMin_9981f74b2d109da6] = env->getMethodID(cls, "getCovScaleMin", "()D");
                  mids$[mid_getCovType_53d3e424bd18099f] = env->getMethodID(cls, "getCovType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");
                  mids$[mid_getCovUnits_d751c1a57012b438] = env->getMethodID(cls, "getCovUnits", "()Ljava/util/List;");
                  mids$[mid_setCovBasis_105e1eadb709d9ac] = env->getMethodID(cls, "setCovBasis", "(Ljava/lang/String;)V");
                  mids$[mid_setCovBasisID_105e1eadb709d9ac] = env->getMethodID(cls, "setCovBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovConfidence_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCovConfidence", "(D)V");
                  mids$[mid_setCovFrameEpoch_8497861b879c83f7] = env->getMethodID(cls, "setCovFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setCovID_105e1eadb709d9ac] = env->getMethodID(cls, "setCovID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovNextID_105e1eadb709d9ac] = env->getMethodID(cls, "setCovNextID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovOrdering_e084f07c2339d9a4] = env->getMethodID(cls, "setCovOrdering", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;)V");
                  mids$[mid_setCovPrevID_105e1eadb709d9ac] = env->getMethodID(cls, "setCovPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovReferenceFrame_2c8b859a72c0094e] = env->getMethodID(cls, "setCovReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setCovScaleMax_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCovScaleMax", "(D)V");
                  mids$[mid_setCovScaleMin_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCovScaleMin", "(D)V");
                  mids$[mid_setCovType_60e103afec7f4bee] = env->getMethodID(cls, "setCovType", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;)V");
                  mids$[mid_setCovUnits_aa335fea495d60e0] = env->getMethodID(cls, "setCovUnits", "(Ljava/util/List;)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitCovarianceHistoryMetadata::OrbitCovarianceHistoryMetadata(const ::org::orekit::time::AbsoluteDate & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_8497861b879c83f7, a0.this$)) {}

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovBasis() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovBasis_d2c8eb4129821f0e]));
              }

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovBasisID_d2c8eb4129821f0e]));
              }

              jdouble OrbitCovarianceHistoryMetadata::getCovConfidence() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCovConfidence_9981f74b2d109da6]);
              }

              ::org::orekit::time::AbsoluteDate OrbitCovarianceHistoryMetadata::getCovFrameEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCovFrameEpoch_80e11148db499dda]));
              }

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovID_d2c8eb4129821f0e]));
              }

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovNextID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovNextID_d2c8eb4129821f0e]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering OrbitCovarianceHistoryMetadata::getCovOrdering() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering(env->callObjectMethod(this$, mids$[mid_getCovOrdering_08d7eff08cd4715e]));
              }

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovPrevID_d2c8eb4129821f0e]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade OrbitCovarianceHistoryMetadata::getCovReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getCovReferenceFrame_0fc1562b68204151]));
              }

              jdouble OrbitCovarianceHistoryMetadata::getCovScaleMax() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCovScaleMax_9981f74b2d109da6]);
              }

              jdouble OrbitCovarianceHistoryMetadata::getCovScaleMin() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCovScaleMin_9981f74b2d109da6]);
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType OrbitCovarianceHistoryMetadata::getCovType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType(env->callObjectMethod(this$, mids$[mid_getCovType_53d3e424bd18099f]));
              }

              ::java::util::List OrbitCovarianceHistoryMetadata::getCovUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovUnits_d751c1a57012b438]));
              }

              void OrbitCovarianceHistoryMetadata::setCovBasis(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovBasis_105e1eadb709d9ac], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovBasisID_105e1eadb709d9ac], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovConfidence(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovConfidence_1ad26e8c8c0cd65b], a0);
              }

              void OrbitCovarianceHistoryMetadata::setCovFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovFrameEpoch_8497861b879c83f7], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovID_105e1eadb709d9ac], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovNextID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovNextID_105e1eadb709d9ac], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovOrdering(const ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovOrdering_e084f07c2339d9a4], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovPrevID_105e1eadb709d9ac], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovReferenceFrame_2c8b859a72c0094e], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovScaleMax(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovScaleMax_1ad26e8c8c0cd65b], a0);
              }

              void OrbitCovarianceHistoryMetadata::setCovScaleMin(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovScaleMin_1ad26e8c8c0cd65b], a0);
              }

              void OrbitCovarianceHistoryMetadata::setCovType(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovType_60e103afec7f4bee], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovUnits(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovUnits_aa335fea495d60e0], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_OrbitCovarianceHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitCovarianceHistoryMetadata_init_(t_OrbitCovarianceHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovBasis(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovBasisID(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovConfidence(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovFrameEpoch(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovID(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovNextID(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovOrdering(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovPrevID(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovReferenceFrame(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovScaleMax(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovScaleMin(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovType(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovUnits(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovBasis(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovBasisID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovConfidence(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovNextID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovOrdering(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovPrevID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovScaleMax(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovScaleMin(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovType(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovUnits(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_validate(t_OrbitCovarianceHistoryMetadata *self, PyObject *args);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covBasis(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covBasis(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covBasisID(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covBasisID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covConfidence(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covConfidence(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covID(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covNextID(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covNextID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covOrdering(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covOrdering(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covPrevID(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covPrevID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covScaleMax(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covScaleMax(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covScaleMin(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covScaleMin(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covType(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covType(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covUnits(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covUnits(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitCovarianceHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covBasis),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covBasisID),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covConfidence),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covFrameEpoch),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covID),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covNextID),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covOrdering),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covPrevID),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covReferenceFrame),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covScaleMax),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covScaleMin),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covType),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covUnits),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCovarianceHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovBasis, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovBasisID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovConfidence, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovFrameEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovNextID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovOrdering, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovPrevID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovScaleMax, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovScaleMin, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovType, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovUnits, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovBasis, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovBasisID, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovConfidence, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovFrameEpoch, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovID, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovNextID, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovOrdering, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovPrevID, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovReferenceFrame, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovScaleMax, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovScaleMin, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovType, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovUnits, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCovarianceHistoryMetadata)[] = {
                { Py_tp_methods, t_OrbitCovarianceHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_OrbitCovarianceHistoryMetadata_init_ },
                { Py_tp_getset, t_OrbitCovarianceHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCovarianceHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OrbitCovarianceHistoryMetadata, t_OrbitCovarianceHistoryMetadata, OrbitCovarianceHistoryMetadata);

              void t_OrbitCovarianceHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCovarianceHistoryMetadata), &PY_TYPE_DEF(OrbitCovarianceHistoryMetadata), module, "OrbitCovarianceHistoryMetadata", 0);
              }

              void t_OrbitCovarianceHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadata), "class_", make_descriptor(OrbitCovarianceHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadata), "wrapfn_", make_descriptor(t_OrbitCovarianceHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCovarianceHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_OrbitCovarianceHistoryMetadata::wrap_Object(OrbitCovarianceHistoryMetadata(((t_OrbitCovarianceHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_OrbitCovarianceHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCovarianceHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitCovarianceHistoryMetadata_init_(t_OrbitCovarianceHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                OrbitCovarianceHistoryMetadata object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  INT_CALL(object = OrbitCovarianceHistoryMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovBasis(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovBasis());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovBasisID(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovBasisID());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovConfidence(t_OrbitCovarianceHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCovConfidence());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovFrameEpoch(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovID(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovID());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovNextID(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovNextID());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovOrdering(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovOrdering());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ordering::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovPrevID(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovPrevID());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovReferenceFrame(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovScaleMax(t_OrbitCovarianceHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCovScaleMax());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovScaleMin(t_OrbitCovarianceHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCovScaleMin());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovType(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovUnits(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovBasis(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovBasis", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovBasisID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovBasisID", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovConfidence(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setCovConfidence(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovConfidence", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCovFrameEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovFrameEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovID", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovNextID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovNextID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovNextID", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovOrdering(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ordering::parameters_))
                {
                  OBJ_CALL(self->object.setCovOrdering(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovOrdering", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovPrevID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovPrevID", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCovReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovScaleMax(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setCovScaleMax(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovScaleMax", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovScaleMin(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setCovScaleMin(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovScaleMin", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovType(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setCovType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovType", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovUnits(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setCovUnits(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovUnits", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_validate(t_OrbitCovarianceHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OrbitCovarianceHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covBasis(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovBasis());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covBasis(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covBasis", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covBasisID(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovBasisID());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covBasisID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covBasisID", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covConfidence(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCovConfidence());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covConfidence(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setCovConfidence(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covConfidence", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovFrameEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covFrameEpoch", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covID(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovID());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covID", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covNextID(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovNextID());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covNextID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovNextID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covNextID", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covOrdering(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovOrdering());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ordering::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covOrdering(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovOrdering(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covOrdering", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covPrevID(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovPrevID());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covPrevID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covPrevID", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covScaleMax(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCovScaleMax());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covScaleMax(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setCovScaleMax(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covScaleMax", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covScaleMin(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCovScaleMin());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covScaleMin(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setCovScaleMin(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covScaleMin", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covType(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covType(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covType", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covUnits(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovUnits());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covUnits(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovUnits(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covUnits", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonDatesSelector.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DatesSelector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonDatesSelector::class$ = NULL;
      jmethodID *PythonDatesSelector::mids$ = NULL;
      bool PythonDatesSelector::live$ = false;

      jclass PythonDatesSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonDatesSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_selectDates_0499dac7e83b853d] = env->getMethodID(cls, "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDatesSelector::PythonDatesSelector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonDatesSelector::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonDatesSelector::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonDatesSelector::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_PythonDatesSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDatesSelector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDatesSelector_init_(t_PythonDatesSelector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDatesSelector_finalize(t_PythonDatesSelector *self);
      static PyObject *t_PythonDatesSelector_pythonExtension(t_PythonDatesSelector *self, PyObject *args);
      static void JNICALL t_PythonDatesSelector_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDatesSelector_selectDates1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static PyObject *t_PythonDatesSelector_get__self(t_PythonDatesSelector *self, void *data);
      static PyGetSetDef t_PythonDatesSelector__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDatesSelector, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDatesSelector__methods_[] = {
        DECLARE_METHOD(t_PythonDatesSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDatesSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDatesSelector, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDatesSelector, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDatesSelector)[] = {
        { Py_tp_methods, t_PythonDatesSelector__methods_ },
        { Py_tp_init, (void *) t_PythonDatesSelector_init_ },
        { Py_tp_getset, t_PythonDatesSelector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDatesSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDatesSelector, t_PythonDatesSelector, PythonDatesSelector);

      void t_PythonDatesSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDatesSelector), &PY_TYPE_DEF(PythonDatesSelector), module, "PythonDatesSelector", 1);
      }

      void t_PythonDatesSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDatesSelector), "class_", make_descriptor(PythonDatesSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDatesSelector), "wrapfn_", make_descriptor(t_PythonDatesSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDatesSelector), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDatesSelector::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonDatesSelector_pythonDecRef0 },
          { "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;", (void *) t_PythonDatesSelector_selectDates1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonDatesSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDatesSelector::initializeClass, 1)))
          return NULL;
        return t_PythonDatesSelector::wrap_Object(PythonDatesSelector(((t_PythonDatesSelector *) arg)->object.this$));
      }
      static PyObject *t_PythonDatesSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDatesSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDatesSelector_init_(t_PythonDatesSelector *self, PyObject *args, PyObject *kwds)
      {
        PythonDatesSelector object((jobject) NULL);

        INT_CALL(object = PythonDatesSelector());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDatesSelector_finalize(t_PythonDatesSelector *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDatesSelector_pythonExtension(t_PythonDatesSelector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static void JNICALL t_PythonDatesSelector_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDatesSelector::mids$[PythonDatesSelector::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDatesSelector::mids$[PythonDatesSelector::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonDatesSelector_selectDates1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDatesSelector::mids$[PythonDatesSelector::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "selectDates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("selectDates", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static PyObject *t_PythonDatesSelector_get__self(t_PythonDatesSelector *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataProvider::class$ = NULL;
      jmethodID *DataProvider::mids$ = NULL;
      bool DataProvider::live$ = false;

      jclass DataProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataProvider");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_DataProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataProvider_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_DataProvider__methods_[] = {
        DECLARE_METHOD(t_DataProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataProvider, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataProvider)[] = {
        { Py_tp_methods, t_DataProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataProvider, t_DataProvider, DataProvider);

      void t_DataProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(DataProvider), &PY_TYPE_DEF(DataProvider), module, "DataProvider", 0);
      }

      void t_DataProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvider), "class_", make_descriptor(DataProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvider), "wrapfn_", make_descriptor(t_DataProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataProvider::initializeClass, 1)))
          return NULL;
        return t_DataProvider::wrap_Object(DataProvider(((t_DataProvider *) arg)->object.this$));
      }
      static PyObject *t_DataProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RiccatiEquationSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RiccatiEquationSolver::class$ = NULL;
      jmethodID *RiccatiEquationSolver::mids$ = NULL;
      bool RiccatiEquationSolver::live$ = false;

      jclass RiccatiEquationSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RiccatiEquationSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getK_b2eebabce70526d8] = env->getMethodID(cls, "getK", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getP_b2eebabce70526d8] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::RealMatrix RiccatiEquationSolver::getK() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getK_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix RiccatiEquationSolver::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_b2eebabce70526d8]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_RiccatiEquationSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RiccatiEquationSolver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RiccatiEquationSolver_getK(t_RiccatiEquationSolver *self);
      static PyObject *t_RiccatiEquationSolver_getP(t_RiccatiEquationSolver *self);
      static PyObject *t_RiccatiEquationSolver_get__k(t_RiccatiEquationSolver *self, void *data);
      static PyObject *t_RiccatiEquationSolver_get__p(t_RiccatiEquationSolver *self, void *data);
      static PyGetSetDef t_RiccatiEquationSolver__fields_[] = {
        DECLARE_GET_FIELD(t_RiccatiEquationSolver, k),
        DECLARE_GET_FIELD(t_RiccatiEquationSolver, p),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RiccatiEquationSolver__methods_[] = {
        DECLARE_METHOD(t_RiccatiEquationSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RiccatiEquationSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RiccatiEquationSolver, getK, METH_NOARGS),
        DECLARE_METHOD(t_RiccatiEquationSolver, getP, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RiccatiEquationSolver)[] = {
        { Py_tp_methods, t_RiccatiEquationSolver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RiccatiEquationSolver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RiccatiEquationSolver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RiccatiEquationSolver, t_RiccatiEquationSolver, RiccatiEquationSolver);

      void t_RiccatiEquationSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(RiccatiEquationSolver), &PY_TYPE_DEF(RiccatiEquationSolver), module, "RiccatiEquationSolver", 0);
      }

      void t_RiccatiEquationSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolver), "class_", make_descriptor(RiccatiEquationSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolver), "wrapfn_", make_descriptor(t_RiccatiEquationSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RiccatiEquationSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RiccatiEquationSolver::initializeClass, 1)))
          return NULL;
        return t_RiccatiEquationSolver::wrap_Object(RiccatiEquationSolver(((t_RiccatiEquationSolver *) arg)->object.this$));
      }
      static PyObject *t_RiccatiEquationSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RiccatiEquationSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RiccatiEquationSolver_getK(t_RiccatiEquationSolver *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getK());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RiccatiEquationSolver_getP(t_RiccatiEquationSolver *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RiccatiEquationSolver_get__k(t_RiccatiEquationSolver *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getK());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_RiccatiEquationSolver_get__p(t_RiccatiEquationSolver *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *QZSSCivilianNavigationMessage::class$ = NULL;
            jmethodID *QZSSCivilianNavigationMessage::mids$ = NULL;
            bool QZSSCivilianNavigationMessage::live$ = false;

            jclass QZSSCivilianNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_b35db77cae58639e] = env->getMethodID(cls, "<init>", "(Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            QZSSCivilianNavigationMessage::QZSSCivilianNavigationMessage(jboolean a0) : ::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_b35db77cae58639e, a0)) {}
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_QZSSCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_QZSSCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_QZSSCivilianNavigationMessage_init_(t_QZSSCivilianNavigationMessage *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_QZSSCivilianNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_QZSSCivilianNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_QZSSCivilianNavigationMessage, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(QZSSCivilianNavigationMessage)[] = {
              { Py_tp_methods, t_QZSSCivilianNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_QZSSCivilianNavigationMessage_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(QZSSCivilianNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage),
              NULL
            };

            DEFINE_TYPE(QZSSCivilianNavigationMessage, t_QZSSCivilianNavigationMessage, QZSSCivilianNavigationMessage);

            void t_QZSSCivilianNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(QZSSCivilianNavigationMessage), &PY_TYPE_DEF(QZSSCivilianNavigationMessage), module, "QZSSCivilianNavigationMessage", 0);
            }

            void t_QZSSCivilianNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSCivilianNavigationMessage), "class_", make_descriptor(QZSSCivilianNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSCivilianNavigationMessage), "wrapfn_", make_descriptor(t_QZSSCivilianNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSCivilianNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_QZSSCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, QZSSCivilianNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_QZSSCivilianNavigationMessage::wrap_Object(QZSSCivilianNavigationMessage(((t_QZSSCivilianNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_QZSSCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, QZSSCivilianNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_QZSSCivilianNavigationMessage_init_(t_QZSSCivilianNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              jboolean a0;
              QZSSCivilianNavigationMessage object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = QZSSCivilianNavigationMessage(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/units/UnitsCache.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *UnitsCache::class$ = NULL;
        jmethodID *UnitsCache::mids$ = NULL;
        bool UnitsCache::live$ = false;

        jclass UnitsCache::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/UnitsCache");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getUnits_d6c2d8d5a508daeb] = env->getMethodID(cls, "getUnits", "(Ljava/lang/String;)Lorg/orekit/utils/units/Unit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnitsCache::UnitsCache() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::orekit::utils::units::Unit UnitsCache::getUnits(const ::java::lang::String & a0) const
        {
          return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getUnits_d6c2d8d5a508daeb], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {
        static PyObject *t_UnitsCache_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnitsCache_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnitsCache_init_(t_UnitsCache *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnitsCache_getUnits(t_UnitsCache *self, PyObject *arg);

        static PyMethodDef t_UnitsCache__methods_[] = {
          DECLARE_METHOD(t_UnitsCache, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnitsCache, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnitsCache, getUnits, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnitsCache)[] = {
          { Py_tp_methods, t_UnitsCache__methods_ },
          { Py_tp_init, (void *) t_UnitsCache_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnitsCache)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnitsCache, t_UnitsCache, UnitsCache);

        void t_UnitsCache::install(PyObject *module)
        {
          installType(&PY_TYPE(UnitsCache), &PY_TYPE_DEF(UnitsCache), module, "UnitsCache", 0);
        }

        void t_UnitsCache::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsCache), "class_", make_descriptor(UnitsCache::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsCache), "wrapfn_", make_descriptor(t_UnitsCache::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsCache), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnitsCache_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnitsCache::initializeClass, 1)))
            return NULL;
          return t_UnitsCache::wrap_Object(UnitsCache(((t_UnitsCache *) arg)->object.this$));
        }
        static PyObject *t_UnitsCache_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnitsCache::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnitsCache_init_(t_UnitsCache *self, PyObject *args, PyObject *kwds)
        {
          UnitsCache object((jobject) NULL);

          INT_CALL(object = UnitsCache());
          self->object = object;

          return 0;
        }

        static PyObject *t_UnitsCache_getUnits(t_UnitsCache *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::utils::units::Unit result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getUnits(a0));
            return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getUnits", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldODEState::class$ = NULL;
      jmethodID *FieldODEState::mids$ = NULL;
      bool FieldODEState::live$ = false;

      jclass FieldODEState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldODEState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8556964e7b03aae6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_ad8360099586064a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getCompleteState_94ed2e0620f8833d] = env->getMethodID(cls, "getCompleteState", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCompleteStateDimension_d6ab429752e7c267] = env->getMethodID(cls, "getCompleteStateDimension", "()I");
          mids$[mid_getNumberOfSecondaryStates_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfSecondaryStates", "()I");
          mids$[mid_getPrimaryState_94ed2e0620f8833d] = env->getMethodID(cls, "getPrimaryState", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPrimaryStateDimension_d6ab429752e7c267] = env->getMethodID(cls, "getPrimaryStateDimension", "()I");
          mids$[mid_getSecondaryState_15c819004b045aca] = env->getMethodID(cls, "getSecondaryState", "(I)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getSecondaryStateDimension_d938fc64e8c6df2d] = env->getMethodID(cls, "getSecondaryStateDimension", "(I)I");
          mids$[mid_getTime_08d37e3f77b7239d] = env->getMethodID(cls, "getTime", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_copy_ed1934a6d28c3ac3] = env->getMethodID(cls, "copy", "([[Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldODEState::FieldODEState(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8556964e7b03aae6, a0.this$, a1.this$)) {}

      FieldODEState::FieldODEState(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ad8360099586064a, a0.this$, a1.this$, a2.this$)) {}

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEState::getCompleteState() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getCompleteState_94ed2e0620f8833d]));
      }

      jint FieldODEState::getCompleteStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getCompleteStateDimension_d6ab429752e7c267]);
      }

      jint FieldODEState::getNumberOfSecondaryStates() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfSecondaryStates_d6ab429752e7c267]);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEState::getPrimaryState() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getPrimaryState_94ed2e0620f8833d]));
      }

      jint FieldODEState::getPrimaryStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getPrimaryStateDimension_d6ab429752e7c267]);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEState::getSecondaryState(jint a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getSecondaryState_15c819004b045aca], a0));
      }

      jint FieldODEState::getSecondaryStateDimension(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getSecondaryStateDimension_d938fc64e8c6df2d], a0);
      }

      ::org::hipparchus::CalculusFieldElement FieldODEState::getTime() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTime_08d37e3f77b7239d]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      static PyObject *t_FieldODEState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEState_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEState_of_(t_FieldODEState *self, PyObject *args);
      static int t_FieldODEState_init_(t_FieldODEState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldODEState_getCompleteState(t_FieldODEState *self);
      static PyObject *t_FieldODEState_getCompleteStateDimension(t_FieldODEState *self);
      static PyObject *t_FieldODEState_getNumberOfSecondaryStates(t_FieldODEState *self);
      static PyObject *t_FieldODEState_getPrimaryState(t_FieldODEState *self);
      static PyObject *t_FieldODEState_getPrimaryStateDimension(t_FieldODEState *self);
      static PyObject *t_FieldODEState_getSecondaryState(t_FieldODEState *self, PyObject *arg);
      static PyObject *t_FieldODEState_getSecondaryStateDimension(t_FieldODEState *self, PyObject *arg);
      static PyObject *t_FieldODEState_getTime(t_FieldODEState *self);
      static PyObject *t_FieldODEState_get__completeState(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__completeStateDimension(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__numberOfSecondaryStates(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__primaryState(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__primaryStateDimension(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__time(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__parameters_(t_FieldODEState *self, void *data);
      static PyGetSetDef t_FieldODEState__fields_[] = {
        DECLARE_GET_FIELD(t_FieldODEState, completeState),
        DECLARE_GET_FIELD(t_FieldODEState, completeStateDimension),
        DECLARE_GET_FIELD(t_FieldODEState, numberOfSecondaryStates),
        DECLARE_GET_FIELD(t_FieldODEState, primaryState),
        DECLARE_GET_FIELD(t_FieldODEState, primaryStateDimension),
        DECLARE_GET_FIELD(t_FieldODEState, time),
        DECLARE_GET_FIELD(t_FieldODEState, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldODEState__methods_[] = {
        DECLARE_METHOD(t_FieldODEState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEState, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldODEState, getCompleteState, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEState, getCompleteStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEState, getNumberOfSecondaryStates, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEState, getPrimaryState, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEState, getPrimaryStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEState, getSecondaryState, METH_O),
        DECLARE_METHOD(t_FieldODEState, getSecondaryStateDimension, METH_O),
        DECLARE_METHOD(t_FieldODEState, getTime, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldODEState)[] = {
        { Py_tp_methods, t_FieldODEState__methods_ },
        { Py_tp_init, (void *) t_FieldODEState_init_ },
        { Py_tp_getset, t_FieldODEState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldODEState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldODEState, t_FieldODEState, FieldODEState);
      PyObject *t_FieldODEState::wrap_Object(const FieldODEState& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEState::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEState *self = (t_FieldODEState *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldODEState::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEState::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEState *self = (t_FieldODEState *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldODEState::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldODEState), &PY_TYPE_DEF(FieldODEState), module, "FieldODEState", 0);
      }

      void t_FieldODEState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEState), "class_", make_descriptor(FieldODEState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEState), "wrapfn_", make_descriptor(t_FieldODEState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEState), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldODEState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldODEState::initializeClass, 1)))
          return NULL;
        return t_FieldODEState::wrap_Object(FieldODEState(((t_FieldODEState *) arg)->object.this$));
      }
      static PyObject *t_FieldODEState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldODEState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldODEState_of_(t_FieldODEState *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldODEState_init_(t_FieldODEState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            FieldODEState object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldODEState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a2((jobject) NULL);
            PyTypeObject **p2;
            FieldODEState object((jobject) NULL);

            if (!parseArgs(args, "K[K[[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldODEState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldODEState_getCompleteState(t_FieldODEState *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteState());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEState_getCompleteStateDimension(t_FieldODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEState_getNumberOfSecondaryStates(t_FieldODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEState_getPrimaryState(t_FieldODEState *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryState());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEState_getPrimaryStateDimension(t_FieldODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEState_getSecondaryState(t_FieldODEState *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryState(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryState", arg);
        return NULL;
      }

      static PyObject *t_FieldODEState_getSecondaryStateDimension(t_FieldODEState *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryStateDimension(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryStateDimension", arg);
        return NULL;
      }

      static PyObject *t_FieldODEState_getTime(t_FieldODEState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTime());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldODEState_get__parameters_(t_FieldODEState *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldODEState_get__completeState(t_FieldODEState *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteState());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEState_get__completeStateDimension(t_FieldODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldODEState_get__numberOfSecondaryStates(t_FieldODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldODEState_get__primaryState(t_FieldODEState *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryState());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEState_get__primaryStateDimension(t_FieldODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldODEState_get__time(t_FieldODEState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTime());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *LexicalAnalyzer::class$ = NULL;
            jmethodID *LexicalAnalyzer::mids$ = NULL;
            bool LexicalAnalyzer::live$ = false;

            jclass LexicalAnalyzer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_b478c9bff3268dbb] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::lang::Object LexicalAnalyzer::accept(const ::org::orekit::files::ccsds::utils::lexical::MessageParser & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_accept_b478c9bff3268dbb], a0.this$));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            static PyObject *t_LexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LexicalAnalyzer_accept(t_LexicalAnalyzer *self, PyObject *arg);

            static PyMethodDef t_LexicalAnalyzer__methods_[] = {
              DECLARE_METHOD(t_LexicalAnalyzer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LexicalAnalyzer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LexicalAnalyzer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LexicalAnalyzer)[] = {
              { Py_tp_methods, t_LexicalAnalyzer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LexicalAnalyzer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LexicalAnalyzer, t_LexicalAnalyzer, LexicalAnalyzer);

            void t_LexicalAnalyzer::install(PyObject *module)
            {
              installType(&PY_TYPE(LexicalAnalyzer), &PY_TYPE_DEF(LexicalAnalyzer), module, "LexicalAnalyzer", 0);
            }

            void t_LexicalAnalyzer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzer), "class_", make_descriptor(LexicalAnalyzer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzer), "wrapfn_", make_descriptor(t_LexicalAnalyzer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LexicalAnalyzer::initializeClass, 1)))
                return NULL;
              return t_LexicalAnalyzer::wrap_Object(LexicalAnalyzer(((t_LexicalAnalyzer *) arg)->object.this$));
            }
            static PyObject *t_LexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LexicalAnalyzer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LexicalAnalyzer_accept(t_LexicalAnalyzer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::MessageParser a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::utils::lexical::MessageParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::lexical::t_MessageParser::parameters_))
              {
                OBJ_CALL(result = self->object.accept(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ValueAndJacobianFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *ValueAndJacobianFunction::class$ = NULL;
            jmethodID *ValueAndJacobianFunction::mids$ = NULL;
            bool ValueAndJacobianFunction::live$ = false;

            jclass ValueAndJacobianFunction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/ValueAndJacobianFunction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_computeJacobian_56698d8a4cf94853] = env->getMethodID(cls, "computeJacobian", "([D)Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_computeValue_16e45efbf7373c57] = env->getMethodID(cls, "computeValue", "([D)Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::linear::RealMatrix ValueAndJacobianFunction::computeJacobian(const JArray< jdouble > & a0) const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeJacobian_56698d8a4cf94853], a0.this$));
            }

            ::org::hipparchus::linear::RealVector ValueAndJacobianFunction::computeValue(const JArray< jdouble > & a0) const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_computeValue_16e45efbf7373c57], a0.this$));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_ValueAndJacobianFunction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ValueAndJacobianFunction_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ValueAndJacobianFunction_computeJacobian(t_ValueAndJacobianFunction *self, PyObject *arg);
            static PyObject *t_ValueAndJacobianFunction_computeValue(t_ValueAndJacobianFunction *self, PyObject *arg);

            static PyMethodDef t_ValueAndJacobianFunction__methods_[] = {
              DECLARE_METHOD(t_ValueAndJacobianFunction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ValueAndJacobianFunction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ValueAndJacobianFunction, computeJacobian, METH_O),
              DECLARE_METHOD(t_ValueAndJacobianFunction, computeValue, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ValueAndJacobianFunction)[] = {
              { Py_tp_methods, t_ValueAndJacobianFunction__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ValueAndJacobianFunction)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction),
              NULL
            };

            DEFINE_TYPE(ValueAndJacobianFunction, t_ValueAndJacobianFunction, ValueAndJacobianFunction);

            void t_ValueAndJacobianFunction::install(PyObject *module)
            {
              installType(&PY_TYPE(ValueAndJacobianFunction), &PY_TYPE_DEF(ValueAndJacobianFunction), module, "ValueAndJacobianFunction", 0);
            }

            void t_ValueAndJacobianFunction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ValueAndJacobianFunction), "class_", make_descriptor(ValueAndJacobianFunction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ValueAndJacobianFunction), "wrapfn_", make_descriptor(t_ValueAndJacobianFunction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ValueAndJacobianFunction), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ValueAndJacobianFunction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ValueAndJacobianFunction::initializeClass, 1)))
                return NULL;
              return t_ValueAndJacobianFunction::wrap_Object(ValueAndJacobianFunction(((t_ValueAndJacobianFunction *) arg)->object.this$));
            }
            static PyObject *t_ValueAndJacobianFunction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ValueAndJacobianFunction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ValueAndJacobianFunction_computeJacobian(t_ValueAndJacobianFunction *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(result = self->object.computeJacobian(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "computeJacobian", arg);
              return NULL;
            }

            static PyObject *t_ValueAndJacobianFunction_computeValue(t_ValueAndJacobianFunction *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(result = self->object.computeValue(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "computeValue", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/SimpleUnivariateValueChecker.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *SimpleUnivariateValueChecker::class$ = NULL;
        jmethodID *SimpleUnivariateValueChecker::mids$ = NULL;
        bool SimpleUnivariateValueChecker::live$ = false;

        jclass SimpleUnivariateValueChecker::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/SimpleUnivariateValueChecker");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_905e65280a4e6722] = env->getMethodID(cls, "<init>", "(DDI)V");
            mids$[mid_converged_d40e8b51bbfb148a] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/optim/univariate/UnivariatePointValuePair;Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimpleUnivariateValueChecker::SimpleUnivariateValueChecker(jdouble a0, jdouble a1) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        SimpleUnivariateValueChecker::SimpleUnivariateValueChecker(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_905e65280a4e6722, a0, a1, a2)) {}

        jboolean SimpleUnivariateValueChecker::converged(jint a0, const ::org::hipparchus::optim::univariate::UnivariatePointValuePair & a1, const ::org::hipparchus::optim::univariate::UnivariatePointValuePair & a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_converged_d40e8b51bbfb148a], a0, a1.this$, a2.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {
        static PyObject *t_SimpleUnivariateValueChecker_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleUnivariateValueChecker_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleUnivariateValueChecker_of_(t_SimpleUnivariateValueChecker *self, PyObject *args);
        static int t_SimpleUnivariateValueChecker_init_(t_SimpleUnivariateValueChecker *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SimpleUnivariateValueChecker_converged(t_SimpleUnivariateValueChecker *self, PyObject *args);
        static PyObject *t_SimpleUnivariateValueChecker_get__parameters_(t_SimpleUnivariateValueChecker *self, void *data);
        static PyGetSetDef t_SimpleUnivariateValueChecker__fields_[] = {
          DECLARE_GET_FIELD(t_SimpleUnivariateValueChecker, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SimpleUnivariateValueChecker__methods_[] = {
          DECLARE_METHOD(t_SimpleUnivariateValueChecker, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleUnivariateValueChecker, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleUnivariateValueChecker, of_, METH_VARARGS),
          DECLARE_METHOD(t_SimpleUnivariateValueChecker, converged, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpleUnivariateValueChecker)[] = {
          { Py_tp_methods, t_SimpleUnivariateValueChecker__methods_ },
          { Py_tp_init, (void *) t_SimpleUnivariateValueChecker_init_ },
          { Py_tp_getset, t_SimpleUnivariateValueChecker__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpleUnivariateValueChecker)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::AbstractConvergenceChecker),
          NULL
        };

        DEFINE_TYPE(SimpleUnivariateValueChecker, t_SimpleUnivariateValueChecker, SimpleUnivariateValueChecker);
        PyObject *t_SimpleUnivariateValueChecker::wrap_Object(const SimpleUnivariateValueChecker& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SimpleUnivariateValueChecker::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SimpleUnivariateValueChecker *self = (t_SimpleUnivariateValueChecker *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SimpleUnivariateValueChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SimpleUnivariateValueChecker::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SimpleUnivariateValueChecker *self = (t_SimpleUnivariateValueChecker *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SimpleUnivariateValueChecker::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpleUnivariateValueChecker), &PY_TYPE_DEF(SimpleUnivariateValueChecker), module, "SimpleUnivariateValueChecker", 0);
        }

        void t_SimpleUnivariateValueChecker::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleUnivariateValueChecker), "class_", make_descriptor(SimpleUnivariateValueChecker::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleUnivariateValueChecker), "wrapfn_", make_descriptor(t_SimpleUnivariateValueChecker::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleUnivariateValueChecker), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimpleUnivariateValueChecker_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpleUnivariateValueChecker::initializeClass, 1)))
            return NULL;
          return t_SimpleUnivariateValueChecker::wrap_Object(SimpleUnivariateValueChecker(((t_SimpleUnivariateValueChecker *) arg)->object.this$));
        }
        static PyObject *t_SimpleUnivariateValueChecker_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpleUnivariateValueChecker::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SimpleUnivariateValueChecker_of_(t_SimpleUnivariateValueChecker *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SimpleUnivariateValueChecker_init_(t_SimpleUnivariateValueChecker *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              SimpleUnivariateValueChecker object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = SimpleUnivariateValueChecker(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              SimpleUnivariateValueChecker object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = SimpleUnivariateValueChecker(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SimpleUnivariateValueChecker_converged(t_SimpleUnivariateValueChecker *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::optim::univariate::UnivariatePointValuePair a1((jobject) NULL);
          ::org::hipparchus::optim::univariate::UnivariatePointValuePair a2((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "Ikk", ::org::hipparchus::optim::univariate::UnivariatePointValuePair::initializeClass, ::org::hipparchus::optim::univariate::UnivariatePointValuePair::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.converged(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(SimpleUnivariateValueChecker), (PyObject *) self, "converged", args, 2);
        }
        static PyObject *t_SimpleUnivariateValueChecker_get__parameters_(t_SimpleUnivariateValueChecker *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$InvalidPVProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AggregatedPVCoordinatesProvider$InvalidPVProvider::class$ = NULL;
      jmethodID *AggregatedPVCoordinatesProvider$InvalidPVProvider::mids$ = NULL;
      bool AggregatedPVCoordinatesProvider$InvalidPVProvider::live$ = false;

      jclass AggregatedPVCoordinatesProvider$InvalidPVProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AggregatedPVCoordinatesProvider$InvalidPVProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_getPVCoordinates_6236a35378ed47a5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AggregatedPVCoordinatesProvider$InvalidPVProvider::AggregatedPVCoordinatesProvider$InvalidPVProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates AggregatedPVCoordinatesProvider$InvalidPVProvider::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_6236a35378ed47a5], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AggregatedPVCoordinatesProvider$InvalidPVProvider_init_(t_AggregatedPVCoordinatesProvider$InvalidPVProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_getPVCoordinates(t_AggregatedPVCoordinatesProvider$InvalidPVProvider *self, PyObject *args);

      static PyMethodDef t_AggregatedPVCoordinatesProvider$InvalidPVProvider__methods_[] = {
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$InvalidPVProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$InvalidPVProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$InvalidPVProvider, getPVCoordinates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AggregatedPVCoordinatesProvider$InvalidPVProvider)[] = {
        { Py_tp_methods, t_AggregatedPVCoordinatesProvider$InvalidPVProvider__methods_ },
        { Py_tp_init, (void *) t_AggregatedPVCoordinatesProvider$InvalidPVProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AggregatedPVCoordinatesProvider$InvalidPVProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider, t_AggregatedPVCoordinatesProvider$InvalidPVProvider, AggregatedPVCoordinatesProvider$InvalidPVProvider);

      void t_AggregatedPVCoordinatesProvider$InvalidPVProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider), &PY_TYPE_DEF(AggregatedPVCoordinatesProvider$InvalidPVProvider), module, "AggregatedPVCoordinatesProvider$InvalidPVProvider", 0);
      }

      void t_AggregatedPVCoordinatesProvider$InvalidPVProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider), "class_", make_descriptor(AggregatedPVCoordinatesProvider$InvalidPVProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider), "wrapfn_", make_descriptor(t_AggregatedPVCoordinatesProvider$InvalidPVProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AggregatedPVCoordinatesProvider$InvalidPVProvider::initializeClass, 1)))
          return NULL;
        return t_AggregatedPVCoordinatesProvider$InvalidPVProvider::wrap_Object(AggregatedPVCoordinatesProvider$InvalidPVProvider(((t_AggregatedPVCoordinatesProvider$InvalidPVProvider *) arg)->object.this$));
      }
      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AggregatedPVCoordinatesProvider$InvalidPVProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AggregatedPVCoordinatesProvider$InvalidPVProvider_init_(t_AggregatedPVCoordinatesProvider$InvalidPVProvider *self, PyObject *args, PyObject *kwds)
      {
        AggregatedPVCoordinatesProvider$InvalidPVProvider object((jobject) NULL);

        INT_CALL(object = AggregatedPVCoordinatesProvider$InvalidPVProvider());
        self->object = object;

        return 0;
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_getPVCoordinates(t_AggregatedPVCoordinatesProvider$InvalidPVProvider *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *Atmosphere::class$ = NULL;
          jmethodID *Atmosphere::mids$ = NULL;
          bool Atmosphere::live$ = false;

          jclass Atmosphere::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/Atmosphere");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDensity_0c5821935d445848] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_65e73ef68b3713d0] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getVelocity_9eb9e27560bce34b] = env->getMethodID(cls, "getVelocity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getVelocity_9e32d405e56d9d4c] = env->getMethodID(cls, "getVelocity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement Atmosphere::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_0c5821935d445848], a0.this$, a1.this$, a2.this$));
          }

          jdouble Atmosphere::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_65e73ef68b3713d0], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::frames::Frame Atmosphere::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Atmosphere::getVelocity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_9eb9e27560bce34b], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Atmosphere::getVelocity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_9e32d405e56d9d4c], a0.this$, a1.this$, a2.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          static PyObject *t_Atmosphere_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Atmosphere_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Atmosphere_getDensity(t_Atmosphere *self, PyObject *args);
          static PyObject *t_Atmosphere_getFrame(t_Atmosphere *self);
          static PyObject *t_Atmosphere_getVelocity(t_Atmosphere *self, PyObject *args);
          static PyObject *t_Atmosphere_get__frame(t_Atmosphere *self, void *data);
          static PyGetSetDef t_Atmosphere__fields_[] = {
            DECLARE_GET_FIELD(t_Atmosphere, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Atmosphere__methods_[] = {
            DECLARE_METHOD(t_Atmosphere, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Atmosphere, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Atmosphere, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_Atmosphere, getFrame, METH_NOARGS),
            DECLARE_METHOD(t_Atmosphere, getVelocity, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Atmosphere)[] = {
            { Py_tp_methods, t_Atmosphere__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Atmosphere__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Atmosphere)[] = {
            &PY_TYPE_DEF(::java::io::Serializable),
            NULL
          };

          DEFINE_TYPE(Atmosphere, t_Atmosphere, Atmosphere);

          void t_Atmosphere::install(PyObject *module)
          {
            installType(&PY_TYPE(Atmosphere), &PY_TYPE_DEF(Atmosphere), module, "Atmosphere", 0);
          }

          void t_Atmosphere::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Atmosphere), "class_", make_descriptor(Atmosphere::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Atmosphere), "wrapfn_", make_descriptor(t_Atmosphere::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Atmosphere), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Atmosphere_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Atmosphere::initializeClass, 1)))
              return NULL;
            return t_Atmosphere::wrap_Object(Atmosphere(((t_Atmosphere *) arg)->object.this$));
          }
          static PyObject *t_Atmosphere_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Atmosphere::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Atmosphere_getDensity(t_Atmosphere *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_Atmosphere_getFrame(t_Atmosphere *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_Atmosphere_getVelocity(t_Atmosphere *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getVelocity(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getVelocity(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getVelocity", args);
            return NULL;
          }

          static PyObject *t_Atmosphere_get__frame(t_Atmosphere *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *StreamingCpfWriter$HeaderLineWriter::class$ = NULL;
        jmethodID *StreamingCpfWriter$HeaderLineWriter::mids$ = NULL;
        bool StreamingCpfWriter$HeaderLineWriter::live$ = false;
        StreamingCpfWriter$HeaderLineWriter *StreamingCpfWriter$HeaderLineWriter::H1 = NULL;
        StreamingCpfWriter$HeaderLineWriter *StreamingCpfWriter$HeaderLineWriter::H2 = NULL;

        jclass StreamingCpfWriter$HeaderLineWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getIdentifier_d2c8eb4129821f0e] = env->getMethodID(cls, "getIdentifier", "()Ljava/lang/String;");
            mids$[mid_valueOf_c16aa7d478e1e3a3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter;");
            mids$[mid_values_6d7eb59bb2fe7c85] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter;");
            mids$[mid_write_52244c0882f76251] = env->getMethodID(cls, "write", "(Lorg/orekit/files/ilrs/CPFHeader;Ljava/lang/Appendable;Lorg/orekit/time/TimeScale;)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            H1 = new StreamingCpfWriter$HeaderLineWriter(env->getStaticObjectField(cls, "H1", "Lorg/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter;"));
            H2 = new StreamingCpfWriter$HeaderLineWriter(env->getStaticObjectField(cls, "H2", "Lorg/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String StreamingCpfWriter$HeaderLineWriter::getIdentifier() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getIdentifier_d2c8eb4129821f0e]));
        }

        StreamingCpfWriter$HeaderLineWriter StreamingCpfWriter$HeaderLineWriter::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StreamingCpfWriter$HeaderLineWriter(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c16aa7d478e1e3a3], a0.this$));
        }

        JArray< StreamingCpfWriter$HeaderLineWriter > StreamingCpfWriter$HeaderLineWriter::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< StreamingCpfWriter$HeaderLineWriter >(env->callStaticObjectMethod(cls, mids$[mid_values_6d7eb59bb2fe7c85]));
        }

        void StreamingCpfWriter$HeaderLineWriter::write(const ::org::orekit::files::ilrs::CPFHeader & a0, const ::java::lang::Appendable & a1, const ::org::orekit::time::TimeScale & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_write_52244c0882f76251], a0.this$, a1.this$, a2.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_of_(t_StreamingCpfWriter$HeaderLineWriter *self, PyObject *args);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_getIdentifier(t_StreamingCpfWriter$HeaderLineWriter *self);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_values(PyTypeObject *type);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_write(t_StreamingCpfWriter$HeaderLineWriter *self, PyObject *args);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_get__identifier(t_StreamingCpfWriter$HeaderLineWriter *self, void *data);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_get__parameters_(t_StreamingCpfWriter$HeaderLineWriter *self, void *data);
        static PyGetSetDef t_StreamingCpfWriter$HeaderLineWriter__fields_[] = {
          DECLARE_GET_FIELD(t_StreamingCpfWriter$HeaderLineWriter, identifier),
          DECLARE_GET_FIELD(t_StreamingCpfWriter$HeaderLineWriter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StreamingCpfWriter$HeaderLineWriter__methods_[] = {
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, of_, METH_VARARGS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, getIdentifier, METH_NOARGS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, values, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, write, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingCpfWriter$HeaderLineWriter)[] = {
          { Py_tp_methods, t_StreamingCpfWriter$HeaderLineWriter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StreamingCpfWriter$HeaderLineWriter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingCpfWriter$HeaderLineWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(StreamingCpfWriter$HeaderLineWriter, t_StreamingCpfWriter$HeaderLineWriter, StreamingCpfWriter$HeaderLineWriter);
        PyObject *t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(const StreamingCpfWriter$HeaderLineWriter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StreamingCpfWriter$HeaderLineWriter *self = (t_StreamingCpfWriter$HeaderLineWriter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_StreamingCpfWriter$HeaderLineWriter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StreamingCpfWriter$HeaderLineWriter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StreamingCpfWriter$HeaderLineWriter *self = (t_StreamingCpfWriter$HeaderLineWriter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_StreamingCpfWriter$HeaderLineWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingCpfWriter$HeaderLineWriter), &PY_TYPE_DEF(StreamingCpfWriter$HeaderLineWriter), module, "StreamingCpfWriter$HeaderLineWriter", 0);
        }

        void t_StreamingCpfWriter$HeaderLineWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "class_", make_descriptor(StreamingCpfWriter$HeaderLineWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "wrapfn_", make_descriptor(t_StreamingCpfWriter$HeaderLineWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "boxfn_", make_descriptor(boxObject));
          env->getClass(StreamingCpfWriter$HeaderLineWriter::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "H1", make_descriptor(t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(*StreamingCpfWriter$HeaderLineWriter::H1)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "H2", make_descriptor(t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(*StreamingCpfWriter$HeaderLineWriter::H2)));
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingCpfWriter$HeaderLineWriter::initializeClass, 1)))
            return NULL;
          return t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(StreamingCpfWriter$HeaderLineWriter(((t_StreamingCpfWriter$HeaderLineWriter *) arg)->object.this$));
        }
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingCpfWriter$HeaderLineWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_of_(t_StreamingCpfWriter$HeaderLineWriter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_getIdentifier(t_StreamingCpfWriter$HeaderLineWriter *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getIdentifier());
          return j2p(result);
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          StreamingCpfWriter$HeaderLineWriter result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::StreamingCpfWriter$HeaderLineWriter::valueOf(a0));
            return t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_values(PyTypeObject *type)
        {
          JArray< StreamingCpfWriter$HeaderLineWriter > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::ilrs::StreamingCpfWriter$HeaderLineWriter::values());
          return JArray<jobject>(result.this$).wrap(t_StreamingCpfWriter$HeaderLineWriter::wrap_jobject);
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_write(t_StreamingCpfWriter$HeaderLineWriter *self, PyObject *args)
        {
          ::org::orekit::files::ilrs::CPFHeader a0((jobject) NULL);
          ::java::lang::Appendable a1((jobject) NULL);
          ::org::orekit::time::TimeScale a2((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::files::ilrs::CPFHeader::initializeClass, ::java::lang::Appendable::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "write", args);
          return NULL;
        }
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_get__parameters_(t_StreamingCpfWriter$HeaderLineWriter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_get__identifier(t_StreamingCpfWriter$HeaderLineWriter *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getIdentifier());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/dfp/DfpField.h"
#include "org/hipparchus/dfp/DfpField.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/dfp/Dfp.h"
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *DfpField::class$ = NULL;
      jmethodID *DfpField::mids$ = NULL;
      bool DfpField::live$ = false;
      jint DfpField::FLAG_DIV_ZERO = (jint) 0;
      jint DfpField::FLAG_INEXACT = (jint) 0;
      jint DfpField::FLAG_INVALID = (jint) 0;
      jint DfpField::FLAG_OVERFLOW = (jint) 0;
      jint DfpField::FLAG_UNDERFLOW = (jint) 0;

      jclass DfpField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/DfpField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_clearIEEEFlags_ff7cb6c242604316] = env->getMethodID(cls, "clearIEEEFlags", "()V");
          mids$[mid_computeExp_6c69a9f186dcd94b] = env->getStaticMethodID(cls, "computeExp", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_computeLn_00bbef85bd29e052] = env->getStaticMethodID(cls, "computeLn", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDegToRad_4b2d5e048d6e2660] = env->getMethodID(cls, "getDegToRad", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getE_4b2d5e048d6e2660] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getESplit_04f69f04f1bb77bf] = env->getMethodID(cls, "getESplit", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getExtendedField_75edf5f8864ad6b3] = env->getMethodID(cls, "getExtendedField", "(IZ)Lorg/hipparchus/dfp/DfpField;");
          mids$[mid_getIEEEFlags_d6ab429752e7c267] = env->getMethodID(cls, "getIEEEFlags", "()I");
          mids$[mid_getLn10_4b2d5e048d6e2660] = env->getMethodID(cls, "getLn10", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getLn2_4b2d5e048d6e2660] = env->getMethodID(cls, "getLn2", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getLn2Split_04f69f04f1bb77bf] = env->getMethodID(cls, "getLn2Split", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getLn5_4b2d5e048d6e2660] = env->getMethodID(cls, "getLn5", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getLn5Split_04f69f04f1bb77bf] = env->getMethodID(cls, "getLn5Split", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getOne_4b2d5e048d6e2660] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getPi_4b2d5e048d6e2660] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getPiSplit_04f69f04f1bb77bf] = env->getMethodID(cls, "getPiSplit", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getRadToDeg_4b2d5e048d6e2660] = env->getMethodID(cls, "getRadToDeg", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getRadixDigits_d6ab429752e7c267] = env->getMethodID(cls, "getRadixDigits", "()I");
          mids$[mid_getRoundingMode_61e9ede417fcba7d] = env->getMethodID(cls, "getRoundingMode", "()Lorg/hipparchus/dfp/DfpField$RoundingMode;");
          mids$[mid_getRuntimeClass_d5247e4b166c4ce8] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getSqr2_4b2d5e048d6e2660] = env->getMethodID(cls, "getSqr2", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getSqr2Reciprocal_4b2d5e048d6e2660] = env->getMethodID(cls, "getSqr2Reciprocal", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getSqr2Split_04f69f04f1bb77bf] = env->getMethodID(cls, "getSqr2Split", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getSqr3_4b2d5e048d6e2660] = env->getMethodID(cls, "getSqr3", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getSqr3Reciprocal_4b2d5e048d6e2660] = env->getMethodID(cls, "getSqr3Reciprocal", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getTwo_4b2d5e048d6e2660] = env->getMethodID(cls, "getTwo", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getZero_4b2d5e048d6e2660] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_newDfp_4b2d5e048d6e2660] = env->getMethodID(cls, "newDfp", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_d41bacfbb0036b2f] = env->getMethodID(cls, "newDfp", "(Ljava/lang/String;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_f4723517f29214b4] = env->getMethodID(cls, "newDfp", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_d026e8379de654e0] = env->getMethodID(cls, "newDfp", "(B)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_e99ab98f8c6bb318] = env->getMethodID(cls, "newDfp", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_c17cec9f6bbb62d4] = env->getMethodID(cls, "newDfp", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_9e2bf41ef3516323] = env->getMethodID(cls, "newDfp", "(J)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_1a6c1bff63409b1a] = env->getMethodID(cls, "newDfp", "(BB)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_setIEEEFlags_8fd427ab23829bf5] = env->getMethodID(cls, "setIEEEFlags", "(I)V");
          mids$[mid_setIEEEFlagsBits_8fd427ab23829bf5] = env->getMethodID(cls, "setIEEEFlagsBits", "(I)V");
          mids$[mid_setRoundingMode_daf037a5ce730483] = env->getMethodID(cls, "setRoundingMode", "(Lorg/hipparchus/dfp/DfpField$RoundingMode;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          FLAG_DIV_ZERO = env->getStaticIntField(cls, "FLAG_DIV_ZERO");
          FLAG_INEXACT = env->getStaticIntField(cls, "FLAG_INEXACT");
          FLAG_INVALID = env->getStaticIntField(cls, "FLAG_INVALID");
          FLAG_OVERFLOW = env->getStaticIntField(cls, "FLAG_OVERFLOW");
          FLAG_UNDERFLOW = env->getStaticIntField(cls, "FLAG_UNDERFLOW");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DfpField::DfpField(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      void DfpField::clearIEEEFlags() const
      {
        env->callVoidMethod(this$, mids$[mid_clearIEEEFlags_ff7cb6c242604316]);
      }

      ::org::hipparchus::dfp::Dfp DfpField::computeExp(const ::org::hipparchus::dfp::Dfp & a0, const ::org::hipparchus::dfp::Dfp & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_computeExp_6c69a9f186dcd94b], a0.this$, a1.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpField::computeLn(const ::org::hipparchus::dfp::Dfp & a0, const ::org::hipparchus::dfp::Dfp & a1, const ::org::hipparchus::dfp::Dfp & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_computeLn_00bbef85bd29e052], a0.this$, a1.this$, a2.this$));
      }

      jboolean DfpField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      ::org::hipparchus::dfp::Dfp DfpField::getDegToRad() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getDegToRad_4b2d5e048d6e2660]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getE() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getE_4b2d5e048d6e2660]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getESplit() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getESplit_04f69f04f1bb77bf]));
      }

      DfpField DfpField::getExtendedField(jint a0, jboolean a1) const
      {
        return DfpField(env->callObjectMethod(this$, mids$[mid_getExtendedField_75edf5f8864ad6b3], a0, a1));
      }

      jint DfpField::getIEEEFlags() const
      {
        return env->callIntMethod(this$, mids$[mid_getIEEEFlags_d6ab429752e7c267]);
      }

      ::org::hipparchus::dfp::Dfp DfpField::getLn10() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getLn10_4b2d5e048d6e2660]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getLn2() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getLn2_4b2d5e048d6e2660]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getLn2Split() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getLn2Split_04f69f04f1bb77bf]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getLn5() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getLn5_4b2d5e048d6e2660]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getLn5Split() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getLn5Split_04f69f04f1bb77bf]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getOne() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getOne_4b2d5e048d6e2660]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getPi() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getPi_4b2d5e048d6e2660]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getPiSplit() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getPiSplit_04f69f04f1bb77bf]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getRadToDeg() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getRadToDeg_4b2d5e048d6e2660]));
      }

      jint DfpField::getRadixDigits() const
      {
        return env->callIntMethod(this$, mids$[mid_getRadixDigits_d6ab429752e7c267]);
      }

      ::org::hipparchus::dfp::DfpField$RoundingMode DfpField::getRoundingMode() const
      {
        return ::org::hipparchus::dfp::DfpField$RoundingMode(env->callObjectMethod(this$, mids$[mid_getRoundingMode_61e9ede417fcba7d]));
      }

      ::java::lang::Class DfpField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d5247e4b166c4ce8]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getSqr2() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getSqr2_4b2d5e048d6e2660]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getSqr2Reciprocal() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getSqr2Reciprocal_4b2d5e048d6e2660]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getSqr2Split() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getSqr2Split_04f69f04f1bb77bf]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getSqr3() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getSqr3_4b2d5e048d6e2660]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getSqr3Reciprocal() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getSqr3Reciprocal_4b2d5e048d6e2660]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getTwo() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getTwo_4b2d5e048d6e2660]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getZero() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getZero_4b2d5e048d6e2660]));
      }

      jint DfpField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_4b2d5e048d6e2660]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_d41bacfbb0036b2f], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(const ::org::hipparchus::dfp::Dfp & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_f4723517f29214b4], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jbyte a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_d026e8379de654e0], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jdouble a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_e99ab98f8c6bb318], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jint a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_c17cec9f6bbb62d4], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jlong a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_9e2bf41ef3516323], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jbyte a0, jbyte a1) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_1a6c1bff63409b1a], a0, a1));
      }

      void DfpField::setIEEEFlags(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setIEEEFlags_8fd427ab23829bf5], a0);
      }

      void DfpField::setIEEEFlagsBits(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setIEEEFlagsBits_8fd427ab23829bf5], a0);
      }

      void DfpField::setRoundingMode(const ::org::hipparchus::dfp::DfpField$RoundingMode & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setRoundingMode_daf037a5ce730483], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      static PyObject *t_DfpField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpField_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DfpField_init_(t_DfpField *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DfpField_clearIEEEFlags(t_DfpField *self);
      static PyObject *t_DfpField_computeExp(PyTypeObject *type, PyObject *args);
      static PyObject *t_DfpField_computeLn(PyTypeObject *type, PyObject *args);
      static PyObject *t_DfpField_equals(t_DfpField *self, PyObject *args);
      static PyObject *t_DfpField_getDegToRad(t_DfpField *self);
      static PyObject *t_DfpField_getE(t_DfpField *self);
      static PyObject *t_DfpField_getESplit(t_DfpField *self);
      static PyObject *t_DfpField_getExtendedField(t_DfpField *self, PyObject *args);
      static PyObject *t_DfpField_getIEEEFlags(t_DfpField *self);
      static PyObject *t_DfpField_getLn10(t_DfpField *self);
      static PyObject *t_DfpField_getLn2(t_DfpField *self);
      static PyObject *t_DfpField_getLn2Split(t_DfpField *self);
      static PyObject *t_DfpField_getLn5(t_DfpField *self);
      static PyObject *t_DfpField_getLn5Split(t_DfpField *self);
      static PyObject *t_DfpField_getOne(t_DfpField *self);
      static PyObject *t_DfpField_getPi(t_DfpField *self);
      static PyObject *t_DfpField_getPiSplit(t_DfpField *self);
      static PyObject *t_DfpField_getRadToDeg(t_DfpField *self);
      static PyObject *t_DfpField_getRadixDigits(t_DfpField *self);
      static PyObject *t_DfpField_getRoundingMode(t_DfpField *self);
      static PyObject *t_DfpField_getRuntimeClass(t_DfpField *self);
      static PyObject *t_DfpField_getSqr2(t_DfpField *self);
      static PyObject *t_DfpField_getSqr2Reciprocal(t_DfpField *self);
      static PyObject *t_DfpField_getSqr2Split(t_DfpField *self);
      static PyObject *t_DfpField_getSqr3(t_DfpField *self);
      static PyObject *t_DfpField_getSqr3Reciprocal(t_DfpField *self);
      static PyObject *t_DfpField_getTwo(t_DfpField *self);
      static PyObject *t_DfpField_getZero(t_DfpField *self);
      static PyObject *t_DfpField_hashCode(t_DfpField *self, PyObject *args);
      static PyObject *t_DfpField_newDfp(t_DfpField *self, PyObject *args);
      static PyObject *t_DfpField_setIEEEFlags(t_DfpField *self, PyObject *arg);
      static PyObject *t_DfpField_setIEEEFlagsBits(t_DfpField *self, PyObject *arg);
      static PyObject *t_DfpField_setRoundingMode(t_DfpField *self, PyObject *arg);
      static PyObject *t_DfpField_get__degToRad(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__e(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__eSplit(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__iEEEFlags(t_DfpField *self, void *data);
      static int t_DfpField_set__iEEEFlags(t_DfpField *self, PyObject *arg, void *data);
      static int t_DfpField_set__iEEEFlagsBits(t_DfpField *self, PyObject *arg, void *data);
      static PyObject *t_DfpField_get__ln10(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__ln2(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__ln2Split(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__ln5(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__ln5Split(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__one(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__pi(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__piSplit(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__radToDeg(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__radixDigits(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__roundingMode(t_DfpField *self, void *data);
      static int t_DfpField_set__roundingMode(t_DfpField *self, PyObject *arg, void *data);
      static PyObject *t_DfpField_get__runtimeClass(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr2(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr2Reciprocal(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr2Split(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr3(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr3Reciprocal(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__two(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__zero(t_DfpField *self, void *data);
      static PyGetSetDef t_DfpField__fields_[] = {
        DECLARE_GET_FIELD(t_DfpField, degToRad),
        DECLARE_GET_FIELD(t_DfpField, e),
        DECLARE_GET_FIELD(t_DfpField, eSplit),
        DECLARE_GETSET_FIELD(t_DfpField, iEEEFlags),
        DECLARE_SET_FIELD(t_DfpField, iEEEFlagsBits),
        DECLARE_GET_FIELD(t_DfpField, ln10),
        DECLARE_GET_FIELD(t_DfpField, ln2),
        DECLARE_GET_FIELD(t_DfpField, ln2Split),
        DECLARE_GET_FIELD(t_DfpField, ln5),
        DECLARE_GET_FIELD(t_DfpField, ln5Split),
        DECLARE_GET_FIELD(t_DfpField, one),
        DECLARE_GET_FIELD(t_DfpField, pi),
        DECLARE_GET_FIELD(t_DfpField, piSplit),
        DECLARE_GET_FIELD(t_DfpField, radToDeg),
        DECLARE_GET_FIELD(t_DfpField, radixDigits),
        DECLARE_GETSET_FIELD(t_DfpField, roundingMode),
        DECLARE_GET_FIELD(t_DfpField, runtimeClass),
        DECLARE_GET_FIELD(t_DfpField, sqr2),
        DECLARE_GET_FIELD(t_DfpField, sqr2Reciprocal),
        DECLARE_GET_FIELD(t_DfpField, sqr2Split),
        DECLARE_GET_FIELD(t_DfpField, sqr3),
        DECLARE_GET_FIELD(t_DfpField, sqr3Reciprocal),
        DECLARE_GET_FIELD(t_DfpField, two),
        DECLARE_GET_FIELD(t_DfpField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DfpField__methods_[] = {
        DECLARE_METHOD(t_DfpField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpField, clearIEEEFlags, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, computeExp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DfpField, computeLn, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DfpField, equals, METH_VARARGS),
        DECLARE_METHOD(t_DfpField, getDegToRad, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getE, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getESplit, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getExtendedField, METH_VARARGS),
        DECLARE_METHOD(t_DfpField, getIEEEFlags, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn10, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn2, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn2Split, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn5, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn5Split, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getPi, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getPiSplit, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getRadToDeg, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getRadixDigits, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getRoundingMode, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr2, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr2Reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr2Split, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr3, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr3Reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getTwo, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_DfpField, newDfp, METH_VARARGS),
        DECLARE_METHOD(t_DfpField, setIEEEFlags, METH_O),
        DECLARE_METHOD(t_DfpField, setIEEEFlagsBits, METH_O),
        DECLARE_METHOD(t_DfpField, setRoundingMode, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DfpField)[] = {
        { Py_tp_methods, t_DfpField__methods_ },
        { Py_tp_init, (void *) t_DfpField_init_ },
        { Py_tp_getset, t_DfpField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DfpField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DfpField, t_DfpField, DfpField);

      void t_DfpField::install(PyObject *module)
      {
        installType(&PY_TYPE(DfpField), &PY_TYPE_DEF(DfpField), module, "DfpField", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "RoundingMode", make_descriptor(&PY_TYPE_DEF(DfpField$RoundingMode)));
      }

      void t_DfpField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "class_", make_descriptor(DfpField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "wrapfn_", make_descriptor(t_DfpField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "boxfn_", make_descriptor(boxObject));
        env->getClass(DfpField::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_DIV_ZERO", make_descriptor(DfpField::FLAG_DIV_ZERO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_INEXACT", make_descriptor(DfpField::FLAG_INEXACT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_INVALID", make_descriptor(DfpField::FLAG_INVALID));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_OVERFLOW", make_descriptor(DfpField::FLAG_OVERFLOW));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_UNDERFLOW", make_descriptor(DfpField::FLAG_UNDERFLOW));
      }

      static PyObject *t_DfpField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DfpField::initializeClass, 1)))
          return NULL;
        return t_DfpField::wrap_Object(DfpField(((t_DfpField *) arg)->object.this$));
      }
      static PyObject *t_DfpField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DfpField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DfpField_init_(t_DfpField *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        DfpField object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = DfpField(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DfpField_clearIEEEFlags(t_DfpField *self)
      {
        OBJ_CALL(self->object.clearIEEEFlags());
        Py_RETURN_NONE;
      }

      static PyObject *t_DfpField_computeExp(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp a1((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::dfp::Dfp::initializeClass, ::org::hipparchus::dfp::Dfp::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpField::computeExp(a0, a1));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "computeExp", args);
        return NULL;
      }

      static PyObject *t_DfpField_computeLn(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp a1((jobject) NULL);
        ::org::hipparchus::dfp::Dfp a2((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::dfp::Dfp::initializeClass, ::org::hipparchus::dfp::Dfp::initializeClass, ::org::hipparchus::dfp::Dfp::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpField::computeLn(a0, a1, a2));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "computeLn", args);
        return NULL;
      }

      static PyObject *t_DfpField_equals(t_DfpField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(DfpField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_DfpField_getDegToRad(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getDegToRad());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getE(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getE());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getESplit(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getESplit());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getExtendedField(t_DfpField *self, PyObject *args)
      {
        jint a0;
        jboolean a1;
        DfpField result((jobject) NULL);

        if (!parseArgs(args, "IZ", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getExtendedField(a0, a1));
          return t_DfpField::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getExtendedField", args);
        return NULL;
      }

      static PyObject *t_DfpField_getIEEEFlags(t_DfpField *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIEEEFlags());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DfpField_getLn10(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn10());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getLn2(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn2());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getLn2Split(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn2Split());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getLn5(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn5());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getLn5Split(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn5Split());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getOne(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getPi(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getPiSplit(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPiSplit());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getRadToDeg(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getRadToDeg());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getRadixDigits(t_DfpField *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRadixDigits());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DfpField_getRoundingMode(t_DfpField *self)
      {
        ::org::hipparchus::dfp::DfpField$RoundingMode result((jobject) NULL);
        OBJ_CALL(result = self->object.getRoundingMode());
        return ::org::hipparchus::dfp::t_DfpField$RoundingMode::wrap_Object(result);
      }

      static PyObject *t_DfpField_getRuntimeClass(t_DfpField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::dfp::PY_TYPE(Dfp));
      }

      static PyObject *t_DfpField_getSqr2(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr2());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getSqr2Reciprocal(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr2Reciprocal());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getSqr2Split(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr2Split());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getSqr3(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr3());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getSqr3Reciprocal(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr3Reciprocal());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getTwo(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getTwo());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getZero(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_hashCode(t_DfpField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DfpField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_DfpField_newDfp(t_DfpField *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);
            OBJ_CALL(result = self->object.newDfp());
            return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jbyte a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "B", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jlong a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jbyte a0;
            jbyte a1;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "BB", &a0, &a1))
            {
              OBJ_CALL(result = self->object.newDfp(a0, a1));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "newDfp", args);
        return NULL;
      }

      static PyObject *t_DfpField_setIEEEFlags(t_DfpField *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setIEEEFlags(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setIEEEFlags", arg);
        return NULL;
      }

      static PyObject *t_DfpField_setIEEEFlagsBits(t_DfpField *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setIEEEFlagsBits(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setIEEEFlagsBits", arg);
        return NULL;
      }

      static PyObject *t_DfpField_setRoundingMode(t_DfpField *self, PyObject *arg)
      {
        ::org::hipparchus::dfp::DfpField$RoundingMode a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::dfp::DfpField$RoundingMode::initializeClass, &a0, &p0, ::org::hipparchus::dfp::t_DfpField$RoundingMode::parameters_))
        {
          OBJ_CALL(self->object.setRoundingMode(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRoundingMode", arg);
        return NULL;
      }

      static PyObject *t_DfpField_get__degToRad(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getDegToRad());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__e(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__eSplit(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getESplit());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__iEEEFlags(t_DfpField *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIEEEFlags());
        return PyLong_FromLong((long) value);
      }
      static int t_DfpField_set__iEEEFlags(t_DfpField *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setIEEEFlags(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "iEEEFlags", arg);
        return -1;
      }

      static int t_DfpField_set__iEEEFlagsBits(t_DfpField *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setIEEEFlagsBits(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "iEEEFlagsBits", arg);
        return -1;
      }

      static PyObject *t_DfpField_get__ln10(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn10());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__ln2(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn2());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__ln2Split(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn2Split());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__ln5(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn5());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__ln5Split(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn5Split());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__one(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__pi(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__piSplit(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPiSplit());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__radToDeg(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getRadToDeg());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__radixDigits(t_DfpField *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRadixDigits());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DfpField_get__roundingMode(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::DfpField$RoundingMode value((jobject) NULL);
        OBJ_CALL(value = self->object.getRoundingMode());
        return ::org::hipparchus::dfp::t_DfpField$RoundingMode::wrap_Object(value);
      }
      static int t_DfpField_set__roundingMode(t_DfpField *self, PyObject *arg, void *data)
      {
        {
          ::org::hipparchus::dfp::DfpField$RoundingMode value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::hipparchus::dfp::DfpField$RoundingMode::initializeClass, &value))
          {
            INT_CALL(self->object.setRoundingMode(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "roundingMode", arg);
        return -1;
      }

      static PyObject *t_DfpField_get__runtimeClass(t_DfpField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__sqr2(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr2());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__sqr2Reciprocal(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr2Reciprocal());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__sqr2Split(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr2Split());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__sqr3(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr3());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__sqr3Reciprocal(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr3Reciprocal());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__two(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getTwo());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__zero(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/util/IterationEvent.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Incrementor$MaxCountExceededCallback.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/util/IterationListener.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *IterationManager::class$ = NULL;
      jmethodID *IterationManager::mids$ = NULL;
      bool IterationManager::live$ = false;

      jclass IterationManager::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/IterationManager");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_b104bfda2e8f97e8] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/util/Incrementor$MaxCountExceededCallback;)V");
          mids$[mid_addIterationListener_37806003fdee99a3] = env->getMethodID(cls, "addIterationListener", "(Lorg/hipparchus/util/IterationListener;)V");
          mids$[mid_fireInitializationEvent_8c87cb407ca6cefb] = env->getMethodID(cls, "fireInitializationEvent", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_fireIterationPerformedEvent_8c87cb407ca6cefb] = env->getMethodID(cls, "fireIterationPerformedEvent", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_fireIterationStartedEvent_8c87cb407ca6cefb] = env->getMethodID(cls, "fireIterationStartedEvent", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_fireTerminationEvent_8c87cb407ca6cefb] = env->getMethodID(cls, "fireTerminationEvent", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_getIterations_d6ab429752e7c267] = env->getMethodID(cls, "getIterations", "()I");
          mids$[mid_getMaxIterations_d6ab429752e7c267] = env->getMethodID(cls, "getMaxIterations", "()I");
          mids$[mid_incrementIterationCount_ff7cb6c242604316] = env->getMethodID(cls, "incrementIterationCount", "()V");
          mids$[mid_removeIterationListener_37806003fdee99a3] = env->getMethodID(cls, "removeIterationListener", "(Lorg/hipparchus/util/IterationListener;)V");
          mids$[mid_resetIterationCount_ff7cb6c242604316] = env->getMethodID(cls, "resetIterationCount", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      IterationManager::IterationManager(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      IterationManager::IterationManager(jint a0, const ::org::hipparchus::util::Incrementor$MaxCountExceededCallback & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b104bfda2e8f97e8, a0, a1.this$)) {}

      void IterationManager::addIterationListener(const ::org::hipparchus::util::IterationListener & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addIterationListener_37806003fdee99a3], a0.this$);
      }

      void IterationManager::fireInitializationEvent(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_fireInitializationEvent_8c87cb407ca6cefb], a0.this$);
      }

      void IterationManager::fireIterationPerformedEvent(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_fireIterationPerformedEvent_8c87cb407ca6cefb], a0.this$);
      }

      void IterationManager::fireIterationStartedEvent(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_fireIterationStartedEvent_8c87cb407ca6cefb], a0.this$);
      }

      void IterationManager::fireTerminationEvent(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_fireTerminationEvent_8c87cb407ca6cefb], a0.this$);
      }

      jint IterationManager::getIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getIterations_d6ab429752e7c267]);
      }

      jint IterationManager::getMaxIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxIterations_d6ab429752e7c267]);
      }

      void IterationManager::incrementIterationCount() const
      {
        env->callVoidMethod(this$, mids$[mid_incrementIterationCount_ff7cb6c242604316]);
      }

      void IterationManager::removeIterationListener(const ::org::hipparchus::util::IterationListener & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_removeIterationListener_37806003fdee99a3], a0.this$);
      }

      void IterationManager::resetIterationCount() const
      {
        env->callVoidMethod(this$, mids$[mid_resetIterationCount_ff7cb6c242604316]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_IterationManager_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterationManager_instance_(PyTypeObject *type, PyObject *arg);
      static int t_IterationManager_init_(t_IterationManager *self, PyObject *args, PyObject *kwds);
      static PyObject *t_IterationManager_addIterationListener(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_fireInitializationEvent(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_fireIterationPerformedEvent(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_fireIterationStartedEvent(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_fireTerminationEvent(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_getIterations(t_IterationManager *self);
      static PyObject *t_IterationManager_getMaxIterations(t_IterationManager *self);
      static PyObject *t_IterationManager_incrementIterationCount(t_IterationManager *self);
      static PyObject *t_IterationManager_removeIterationListener(t_IterationManager *self, PyObject *arg);
      static PyObject *t_IterationManager_resetIterationCount(t_IterationManager *self);
      static PyObject *t_IterationManager_get__iterations(t_IterationManager *self, void *data);
      static PyObject *t_IterationManager_get__maxIterations(t_IterationManager *self, void *data);
      static PyGetSetDef t_IterationManager__fields_[] = {
        DECLARE_GET_FIELD(t_IterationManager, iterations),
        DECLARE_GET_FIELD(t_IterationManager, maxIterations),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IterationManager__methods_[] = {
        DECLARE_METHOD(t_IterationManager, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationManager, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationManager, addIterationListener, METH_O),
        DECLARE_METHOD(t_IterationManager, fireInitializationEvent, METH_O),
        DECLARE_METHOD(t_IterationManager, fireIterationPerformedEvent, METH_O),
        DECLARE_METHOD(t_IterationManager, fireIterationStartedEvent, METH_O),
        DECLARE_METHOD(t_IterationManager, fireTerminationEvent, METH_O),
        DECLARE_METHOD(t_IterationManager, getIterations, METH_NOARGS),
        DECLARE_METHOD(t_IterationManager, getMaxIterations, METH_NOARGS),
        DECLARE_METHOD(t_IterationManager, incrementIterationCount, METH_NOARGS),
        DECLARE_METHOD(t_IterationManager, removeIterationListener, METH_O),
        DECLARE_METHOD(t_IterationManager, resetIterationCount, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterationManager)[] = {
        { Py_tp_methods, t_IterationManager__methods_ },
        { Py_tp_init, (void *) t_IterationManager_init_ },
        { Py_tp_getset, t_IterationManager__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterationManager)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IterationManager, t_IterationManager, IterationManager);

      void t_IterationManager::install(PyObject *module)
      {
        installType(&PY_TYPE(IterationManager), &PY_TYPE_DEF(IterationManager), module, "IterationManager", 0);
      }

      void t_IterationManager::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationManager), "class_", make_descriptor(IterationManager::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationManager), "wrapfn_", make_descriptor(t_IterationManager::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationManager), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterationManager_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterationManager::initializeClass, 1)))
          return NULL;
        return t_IterationManager::wrap_Object(IterationManager(((t_IterationManager *) arg)->object.this$));
      }
      static PyObject *t_IterationManager_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterationManager::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_IterationManager_init_(t_IterationManager *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            IterationManager object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = IterationManager(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::hipparchus::util::Incrementor$MaxCountExceededCallback a1((jobject) NULL);
            IterationManager object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::util::Incrementor$MaxCountExceededCallback::initializeClass, &a0, &a1))
            {
              INT_CALL(object = IterationManager(a0, a1));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_IterationManager_addIterationListener(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationListener a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationListener::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addIterationListener(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addIterationListener", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_fireInitializationEvent(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.fireInitializationEvent(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fireInitializationEvent", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_fireIterationPerformedEvent(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.fireIterationPerformedEvent(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fireIterationPerformedEvent", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_fireIterationStartedEvent(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.fireIterationStartedEvent(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fireIterationStartedEvent", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_fireTerminationEvent(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.fireTerminationEvent(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fireTerminationEvent", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_getIterations(t_IterationManager *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IterationManager_getMaxIterations(t_IterationManager *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IterationManager_incrementIterationCount(t_IterationManager *self)
      {
        OBJ_CALL(self->object.incrementIterationCount());
        Py_RETURN_NONE;
      }

      static PyObject *t_IterationManager_removeIterationListener(t_IterationManager *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationListener a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationListener::initializeClass, &a0))
        {
          OBJ_CALL(self->object.removeIterationListener(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "removeIterationListener", arg);
        return NULL;
      }

      static PyObject *t_IterationManager_resetIterationCount(t_IterationManager *self)
      {
        OBJ_CALL(self->object.resetIterationCount());
        Py_RETURN_NONE;
      }

      static PyObject *t_IterationManager_get__iterations(t_IterationManager *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIterations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_IterationManager_get__maxIterations(t_IterationManager *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxIterations());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/AbstractScheduler.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DatesSelector.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *AbstractScheduler::class$ = NULL;
          jmethodID *AbstractScheduler::mids$ = NULL;
          bool AbstractScheduler::live$ = false;

          jclass AbstractScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/AbstractScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_generate_fda3d30bd0463b72] = env->getMethodID(cls, "generate", "(Ljava/util/Map;)Ljava/util/SortedSet;");
              mids$[mid_getBuilder_aa32975499e048dd] = env->getMethodID(cls, "getBuilder", "()Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;");
              mids$[mid_getSelector_aa3b3f716321a274] = env->getMethodID(cls, "getSelector", "()Lorg/orekit/time/DatesSelector;");
              mids$[mid_init_ce7d94fe97fdcf55] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_measurementIsFeasible_b16e79ba1b2830a1] = env->getMethodID(cls, "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::SortedSet AbstractScheduler::generate(const ::java::util::Map & a0) const
          {
            return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_generate_fda3d30bd0463b72], a0.this$));
          }

          ::org::orekit::estimation::measurements::generation::MeasurementBuilder AbstractScheduler::getBuilder() const
          {
            return ::org::orekit::estimation::measurements::generation::MeasurementBuilder(env->callObjectMethod(this$, mids$[mid_getBuilder_aa32975499e048dd]));
          }

          ::org::orekit::time::DatesSelector AbstractScheduler::getSelector() const
          {
            return ::org::orekit::time::DatesSelector(env->callObjectMethod(this$, mids$[mid_getSelector_aa3b3f716321a274]));
          }

          void AbstractScheduler::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_ce7d94fe97fdcf55], a0.this$, a1.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_AbstractScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractScheduler_of_(t_AbstractScheduler *self, PyObject *args);
          static PyObject *t_AbstractScheduler_generate(t_AbstractScheduler *self, PyObject *arg);
          static PyObject *t_AbstractScheduler_getBuilder(t_AbstractScheduler *self);
          static PyObject *t_AbstractScheduler_getSelector(t_AbstractScheduler *self);
          static PyObject *t_AbstractScheduler_init(t_AbstractScheduler *self, PyObject *args);
          static PyObject *t_AbstractScheduler_get__builder(t_AbstractScheduler *self, void *data);
          static PyObject *t_AbstractScheduler_get__selector(t_AbstractScheduler *self, void *data);
          static PyObject *t_AbstractScheduler_get__parameters_(t_AbstractScheduler *self, void *data);
          static PyGetSetDef t_AbstractScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractScheduler, builder),
            DECLARE_GET_FIELD(t_AbstractScheduler, selector),
            DECLARE_GET_FIELD(t_AbstractScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractScheduler__methods_[] = {
            DECLARE_METHOD(t_AbstractScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_AbstractScheduler, generate, METH_O),
            DECLARE_METHOD(t_AbstractScheduler, getBuilder, METH_NOARGS),
            DECLARE_METHOD(t_AbstractScheduler, getSelector, METH_NOARGS),
            DECLARE_METHOD(t_AbstractScheduler, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractScheduler)[] = {
            { Py_tp_methods, t_AbstractScheduler__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractScheduler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractScheduler, t_AbstractScheduler, AbstractScheduler);
          PyObject *t_AbstractScheduler::wrap_Object(const AbstractScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractScheduler *self = (t_AbstractScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AbstractScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractScheduler *self = (t_AbstractScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AbstractScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractScheduler), &PY_TYPE_DEF(AbstractScheduler), module, "AbstractScheduler", 0);
          }

          void t_AbstractScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractScheduler), "class_", make_descriptor(AbstractScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractScheduler), "wrapfn_", make_descriptor(t_AbstractScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractScheduler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractScheduler::initializeClass, 1)))
              return NULL;
            return t_AbstractScheduler::wrap_Object(AbstractScheduler(((t_AbstractScheduler *) arg)->object.this$));
          }
          static PyObject *t_AbstractScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractScheduler_of_(t_AbstractScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AbstractScheduler_generate(t_AbstractScheduler *self, PyObject *arg)
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::SortedSet result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.generate(a0));
              return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "generate", arg);
            return NULL;
          }

          static PyObject *t_AbstractScheduler_getBuilder(t_AbstractScheduler *self)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder result((jobject) NULL);
            OBJ_CALL(result = self->object.getBuilder());
            return ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_AbstractScheduler_getSelector(t_AbstractScheduler *self)
          {
            ::org::orekit::time::DatesSelector result((jobject) NULL);
            OBJ_CALL(result = self->object.getSelector());
            return ::org::orekit::time::t_DatesSelector::wrap_Object(result);
          }

          static PyObject *t_AbstractScheduler_init(t_AbstractScheduler *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }
          static PyObject *t_AbstractScheduler_get__parameters_(t_AbstractScheduler *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_AbstractScheduler_get__builder(t_AbstractScheduler *self, void *data)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder value((jobject) NULL);
            OBJ_CALL(value = self->object.getBuilder());
            return ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::wrap_Object(value);
          }

          static PyObject *t_AbstractScheduler_get__selector(t_AbstractScheduler *self, void *data)
          {
            ::org::orekit::time::DatesSelector value((jobject) NULL);
            OBJ_CALL(value = self->object.getSelector());
            return ::org::orekit::time::t_DatesSelector::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ParameterConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ParameterConfiguration::class$ = NULL;
      jmethodID *ParameterConfiguration::mids$ = NULL;
      bool ParameterConfiguration::live$ = false;

      jclass ParameterConfiguration::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ParameterConfiguration");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getHP_9981f74b2d109da6] = env->getMethodID(cls, "getHP", "()D");
          mids$[mid_getParameterName_d2c8eb4129821f0e] = env->getMethodID(cls, "getParameterName", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble ParameterConfiguration::getHP() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHP_9981f74b2d109da6]);
      }

      ::java::lang::String ParameterConfiguration::getParameterName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getParameterName_d2c8eb4129821f0e]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      static PyObject *t_ParameterConfiguration_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterConfiguration_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterConfiguration_getHP(t_ParameterConfiguration *self);
      static PyObject *t_ParameterConfiguration_getParameterName(t_ParameterConfiguration *self);
      static PyObject *t_ParameterConfiguration_get__hP(t_ParameterConfiguration *self, void *data);
      static PyObject *t_ParameterConfiguration_get__parameterName(t_ParameterConfiguration *self, void *data);
      static PyGetSetDef t_ParameterConfiguration__fields_[] = {
        DECLARE_GET_FIELD(t_ParameterConfiguration, hP),
        DECLARE_GET_FIELD(t_ParameterConfiguration, parameterName),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterConfiguration__methods_[] = {
        DECLARE_METHOD(t_ParameterConfiguration, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterConfiguration, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterConfiguration, getHP, METH_NOARGS),
        DECLARE_METHOD(t_ParameterConfiguration, getParameterName, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterConfiguration)[] = {
        { Py_tp_methods, t_ParameterConfiguration__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ParameterConfiguration__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterConfiguration)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterConfiguration, t_ParameterConfiguration, ParameterConfiguration);

      void t_ParameterConfiguration::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterConfiguration), &PY_TYPE_DEF(ParameterConfiguration), module, "ParameterConfiguration", 0);
      }

      void t_ParameterConfiguration::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterConfiguration), "class_", make_descriptor(ParameterConfiguration::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterConfiguration), "wrapfn_", make_descriptor(t_ParameterConfiguration::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterConfiguration), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterConfiguration_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterConfiguration::initializeClass, 1)))
          return NULL;
        return t_ParameterConfiguration::wrap_Object(ParameterConfiguration(((t_ParameterConfiguration *) arg)->object.this$));
      }
      static PyObject *t_ParameterConfiguration_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterConfiguration::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterConfiguration_getHP(t_ParameterConfiguration *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHP());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterConfiguration_getParameterName(t_ParameterConfiguration *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getParameterName());
        return j2p(result);
      }

      static PyObject *t_ParameterConfiguration_get__hP(t_ParameterConfiguration *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHP());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ParameterConfiguration_get__parameterName(t_ParameterConfiguration *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getParameterName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCategory::class$ = NULL;
              jmethodID *OrbitCategory::mids$ = NULL;
              bool OrbitCategory::live$ = false;
              OrbitCategory *OrbitCategory::EGO = NULL;
              OrbitCategory *OrbitCategory::ESO = NULL;
              OrbitCategory *OrbitCategory::GEO = NULL;
              OrbitCategory *OrbitCategory::GHO = NULL;
              OrbitCategory *OrbitCategory::GSO = NULL;
              OrbitCategory *OrbitCategory::GTO = NULL;
              OrbitCategory *OrbitCategory::HAO = NULL;
              OrbitCategory *OrbitCategory::HEO = NULL;
              OrbitCategory *OrbitCategory::IGO = NULL;
              OrbitCategory *OrbitCategory::LEO = NULL;
              OrbitCategory *OrbitCategory::LMO = NULL;
              OrbitCategory *OrbitCategory::MEO = NULL;
              OrbitCategory *OrbitCategory::MGO = NULL;
              OrbitCategory *OrbitCategory::NSO = NULL;
              OrbitCategory *OrbitCategory::UFO = NULL;

              jclass OrbitCategory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_ab2292c2cb6a8e96] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;");
                  mids$[mid_values_fe8b443d956be8cd] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  EGO = new OrbitCategory(env->getStaticObjectField(cls, "EGO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  ESO = new OrbitCategory(env->getStaticObjectField(cls, "ESO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  GEO = new OrbitCategory(env->getStaticObjectField(cls, "GEO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  GHO = new OrbitCategory(env->getStaticObjectField(cls, "GHO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  GSO = new OrbitCategory(env->getStaticObjectField(cls, "GSO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  GTO = new OrbitCategory(env->getStaticObjectField(cls, "GTO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  HAO = new OrbitCategory(env->getStaticObjectField(cls, "HAO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  HEO = new OrbitCategory(env->getStaticObjectField(cls, "HEO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  IGO = new OrbitCategory(env->getStaticObjectField(cls, "IGO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  LEO = new OrbitCategory(env->getStaticObjectField(cls, "LEO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  LMO = new OrbitCategory(env->getStaticObjectField(cls, "LMO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  MEO = new OrbitCategory(env->getStaticObjectField(cls, "MEO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  MGO = new OrbitCategory(env->getStaticObjectField(cls, "MGO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  NSO = new OrbitCategory(env->getStaticObjectField(cls, "NSO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  UFO = new OrbitCategory(env->getStaticObjectField(cls, "UFO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::lang::String OrbitCategory::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
              }

              OrbitCategory OrbitCategory::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitCategory(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ab2292c2cb6a8e96], a0.this$));
              }

              JArray< OrbitCategory > OrbitCategory::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitCategory >(env->callStaticObjectMethod(cls, mids$[mid_values_fe8b443d956be8cd]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_OrbitCategory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCategory_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCategory_of_(t_OrbitCategory *self, PyObject *args);
              static PyObject *t_OrbitCategory_toString(t_OrbitCategory *self, PyObject *args);
              static PyObject *t_OrbitCategory_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitCategory_values(PyTypeObject *type);
              static PyObject *t_OrbitCategory_get__parameters_(t_OrbitCategory *self, void *data);
              static PyGetSetDef t_OrbitCategory__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitCategory, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCategory__methods_[] = {
                DECLARE_METHOD(t_OrbitCategory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCategory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCategory, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitCategory, toString, METH_VARARGS),
                DECLARE_METHOD(t_OrbitCategory, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitCategory, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCategory)[] = {
                { Py_tp_methods, t_OrbitCategory__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitCategory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCategory)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitCategory, t_OrbitCategory, OrbitCategory);
              PyObject *t_OrbitCategory::wrap_Object(const OrbitCategory& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitCategory::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitCategory *self = (t_OrbitCategory *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitCategory::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitCategory::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitCategory *self = (t_OrbitCategory *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitCategory::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCategory), &PY_TYPE_DEF(OrbitCategory), module, "OrbitCategory", 0);
              }

              void t_OrbitCategory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "class_", make_descriptor(OrbitCategory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "wrapfn_", make_descriptor(t_OrbitCategory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitCategory::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "EGO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::EGO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "ESO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::ESO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "GEO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::GEO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "GHO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::GHO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "GSO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::GSO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "GTO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::GTO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "HAO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::HAO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "HEO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::HEO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "IGO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::IGO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "LEO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::LEO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "LMO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::LMO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "MEO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::MEO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "MGO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::MGO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "NSO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::NSO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "UFO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::UFO)));
              }

              static PyObject *t_OrbitCategory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCategory::initializeClass, 1)))
                  return NULL;
                return t_OrbitCategory::wrap_Object(OrbitCategory(((t_OrbitCategory *) arg)->object.this$));
              }
              static PyObject *t_OrbitCategory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCategory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitCategory_of_(t_OrbitCategory *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitCategory_toString(t_OrbitCategory *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(OrbitCategory), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_OrbitCategory_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitCategory result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory::valueOf(a0));
                  return t_OrbitCategory::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitCategory_values(PyTypeObject *type)
              {
                JArray< OrbitCategory > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitCategory::wrap_jobject);
              }
              static PyObject *t_OrbitCategory_get__parameters_(t_OrbitCategory *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FunctionUtils.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FunctionUtils::class$ = NULL;
      jmethodID *FunctionUtils::mids$ = NULL;
      bool FunctionUtils::live$ = false;

      jclass FunctionUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FunctionUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_60424d900a2da66a] = env->getStaticMethodID(cls, "add", "([Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_add_b09b2cfaecafda87] = env->getStaticMethodID(cls, "add", "([Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
          mids$[mid_collector_d1f6b1116648e289] = env->getStaticMethodID(cls, "collector", "(Lorg/hipparchus/analysis/BivariateFunction;D)Lorg/hipparchus/analysis/MultivariateFunction;");
          mids$[mid_collector_f103380a1ae2a4ea] = env->getStaticMethodID(cls, "collector", "(Lorg/hipparchus/analysis/BivariateFunction;Lorg/hipparchus/analysis/UnivariateFunction;D)Lorg/hipparchus/analysis/MultivariateFunction;");
          mids$[mid_combine_5e50c33782ed4814] = env->getStaticMethodID(cls, "combine", "(Lorg/hipparchus/analysis/BivariateFunction;Lorg/hipparchus/analysis/UnivariateFunction;Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_compose_60424d900a2da66a] = env->getStaticMethodID(cls, "compose", "([Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_compose_b09b2cfaecafda87] = env->getStaticMethodID(cls, "compose", "([Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
          mids$[mid_derivative_41177b4aa083d7ad] = env->getStaticMethodID(cls, "derivative", "(Lorg/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction;[I)Lorg/hipparchus/analysis/MultivariateFunction;");
          mids$[mid_derivative_9d36e909144e9c8b] = env->getStaticMethodID(cls, "derivative", "(Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;I)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_fix1stArgument_0f8a4710f6db6110] = env->getStaticMethodID(cls, "fix1stArgument", "(Lorg/hipparchus/analysis/BivariateFunction;D)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_fix2ndArgument_0f8a4710f6db6110] = env->getStaticMethodID(cls, "fix2ndArgument", "(Lorg/hipparchus/analysis/BivariateFunction;D)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_multiply_60424d900a2da66a] = env->getStaticMethodID(cls, "multiply", "([Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_multiply_b09b2cfaecafda87] = env->getStaticMethodID(cls, "multiply", "([Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
          mids$[mid_sample_0efe32940310510c] = env->getStaticMethodID(cls, "sample", "(Lorg/hipparchus/analysis/UnivariateFunction;DDI)[D");
          mids$[mid_toDifferentiable_2106ef1f648a53b5] = env->getStaticMethodID(cls, "toDifferentiable", "(Lorg/hipparchus/analysis/UnivariateFunction;[Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
          mids$[mid_toDifferentiable_69b5798b043af08d] = env->getStaticMethodID(cls, "toDifferentiable", "(Lorg/hipparchus/analysis/MultivariateFunction;Lorg/hipparchus/analysis/MultivariateVectorFunction;)Lorg/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::add(const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_add_60424d900a2da66a], a0.this$));
      }

      ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FunctionUtils::add(const JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_add_b09b2cfaecafda87], a0.this$));
      }

      ::org::hipparchus::analysis::MultivariateFunction FunctionUtils::collector(const ::org::hipparchus::analysis::BivariateFunction & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::MultivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_collector_d1f6b1116648e289], a0.this$, a1));
      }

      ::org::hipparchus::analysis::MultivariateFunction FunctionUtils::collector(const ::org::hipparchus::analysis::BivariateFunction & a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::MultivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_collector_f103380a1ae2a4ea], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::combine(const ::org::hipparchus::analysis::BivariateFunction & a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, const ::org::hipparchus::analysis::UnivariateFunction & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_combine_5e50c33782ed4814], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::compose(const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_compose_60424d900a2da66a], a0.this$));
      }

      ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FunctionUtils::compose(const JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_compose_b09b2cfaecafda87], a0.this$));
      }

      ::org::hipparchus::analysis::MultivariateFunction FunctionUtils::derivative(const ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::MultivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_derivative_41177b4aa083d7ad], a0.this$, a1.this$));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::derivative(const ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_derivative_9d36e909144e9c8b], a0.this$, a1));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::fix1stArgument(const ::org::hipparchus::analysis::BivariateFunction & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_fix1stArgument_0f8a4710f6db6110], a0.this$, a1));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::fix2ndArgument(const ::org::hipparchus::analysis::BivariateFunction & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_fix2ndArgument_0f8a4710f6db6110], a0.this$, a1));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::multiply(const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_multiply_60424d900a2da66a], a0.this$));
      }

      ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FunctionUtils::multiply(const JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_multiply_b09b2cfaecafda87], a0.this$));
      }

      JArray< jdouble > FunctionUtils::sample(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_sample_0efe32940310510c], a0.this$, a1, a2, a3));
      }

      ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FunctionUtils::toDifferentiable(const ::org::hipparchus::analysis::UnivariateFunction & a0, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_toDifferentiable_2106ef1f648a53b5], a0.this$, a1.this$));
      }

      ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction FunctionUtils::toDifferentiable(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::org::hipparchus::analysis::MultivariateVectorFunction & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_toDifferentiable_69b5798b043af08d], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_FunctionUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FunctionUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FunctionUtils_add(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_collector(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_combine(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_compose(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_derivative(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_fix1stArgument(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_fix2ndArgument(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_multiply(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_sample(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_toDifferentiable(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_FunctionUtils__methods_[] = {
        DECLARE_METHOD(t_FunctionUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, add, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, collector, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, combine, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, compose, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, derivative, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, fix1stArgument, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, fix2ndArgument, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, multiply, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, sample, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, toDifferentiable, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FunctionUtils)[] = {
        { Py_tp_methods, t_FunctionUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FunctionUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FunctionUtils, t_FunctionUtils, FunctionUtils);

      void t_FunctionUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(FunctionUtils), &PY_TYPE_DEF(FunctionUtils), module, "FunctionUtils", 0);
      }

      void t_FunctionUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionUtils), "class_", make_descriptor(FunctionUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionUtils), "wrapfn_", make_descriptor(t_FunctionUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionUtils), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FunctionUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FunctionUtils::initializeClass, 1)))
          return NULL;
        return t_FunctionUtils::wrap_Object(FunctionUtils(((t_FunctionUtils *) arg)->object.this$));
      }
      static PyObject *t_FunctionUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FunctionUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FunctionUtils_add(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::analysis::UnivariateFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::add(a0));
              return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
            }
          }
          {
            JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::add(a0));
              return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "add", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_collector(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::analysis::BivariateFunction a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::analysis::BivariateFunction::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::collector(a0, a1));
              return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::analysis::BivariateFunction a0((jobject) NULL);
            ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
            jdouble a2;
            ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::analysis::BivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::collector(a0, a1, a2));
              return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "collector", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_combine(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::BivariateFunction a0((jobject) NULL);
        ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
        ::org::hipparchus::analysis::UnivariateFunction a2((jobject) NULL);
        ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::analysis::BivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::combine(a0, a1, a2));
          return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "combine", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_compose(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::analysis::UnivariateFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::compose(a0));
              return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
            }
          }
          {
            JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::compose(a0));
              return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "compose", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_derivative(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "k[I", ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::derivative(a0, a1));
              return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::derivative(a0, a1));
              return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "derivative", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_fix1stArgument(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::BivariateFunction a0((jobject) NULL);
        jdouble a1;
        ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

        if (!parseArgs(args, "kD", ::org::hipparchus::analysis::BivariateFunction::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::fix1stArgument(a0, a1));
          return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "fix1stArgument", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_fix2ndArgument(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::BivariateFunction a0((jobject) NULL);
        jdouble a1;
        ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

        if (!parseArgs(args, "kD", ::org::hipparchus::analysis::BivariateFunction::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::fix2ndArgument(a0, a1));
          return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "fix2ndArgument", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_multiply(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::analysis::UnivariateFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::multiply(a0));
              return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
            }
          }
          {
            JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::multiply(a0));
              return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "multiply", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_sample(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        jint a3;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "kDDI", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::sample(a0, a1, a2, a3));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "sample", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_toDifferentiable(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
            JArray< ::org::hipparchus::analysis::UnivariateFunction > a1((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

            if (!parseArgs(args, "k[k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::toDifferentiable(a0, a1));
              return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
            ::org::hipparchus::analysis::MultivariateVectorFunction a1((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::toDifferentiable(a0, a1));
              return ::org::hipparchus::analysis::differentiation::t_MultivariateDifferentiableFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "toDifferentiable", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "java/util/List.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *MatricesHarvester::class$ = NULL;
      jmethodID *MatricesHarvester::mids$ = NULL;
      bool MatricesHarvester::live$ = false;

      jclass MatricesHarvester::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/MatricesHarvester");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getJacobiansColumnsNames_d751c1a57012b438] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
          mids$[mid_getOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getParametersJacobian_011bf64ebaa4e018] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getStateTransitionMatrix_011bf64ebaa4e018] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setReferenceState_72b846eb87f3af9a] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List MatricesHarvester::getJacobiansColumnsNames() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getJacobiansColumnsNames_d751c1a57012b438]));
      }

      ::org::orekit::orbits::OrbitType MatricesHarvester::getOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_495f818d3570b7f5]));
      }

      ::org::hipparchus::linear::RealMatrix MatricesHarvester::getParametersJacobian(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getParametersJacobian_011bf64ebaa4e018], a0.this$));
      }

      ::org::orekit::orbits::PositionAngleType MatricesHarvester::getPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_a6db4e6edefda4be]));
      }

      ::org::hipparchus::linear::RealMatrix MatricesHarvester::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_011bf64ebaa4e018], a0.this$));
      }

      void MatricesHarvester::setReferenceState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setReferenceState_72b846eb87f3af9a], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      static PyObject *t_MatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatricesHarvester_getJacobiansColumnsNames(t_MatricesHarvester *self);
      static PyObject *t_MatricesHarvester_getOrbitType(t_MatricesHarvester *self);
      static PyObject *t_MatricesHarvester_getParametersJacobian(t_MatricesHarvester *self, PyObject *arg);
      static PyObject *t_MatricesHarvester_getPositionAngleType(t_MatricesHarvester *self);
      static PyObject *t_MatricesHarvester_getStateTransitionMatrix(t_MatricesHarvester *self, PyObject *arg);
      static PyObject *t_MatricesHarvester_setReferenceState(t_MatricesHarvester *self, PyObject *arg);
      static PyObject *t_MatricesHarvester_get__jacobiansColumnsNames(t_MatricesHarvester *self, void *data);
      static PyObject *t_MatricesHarvester_get__orbitType(t_MatricesHarvester *self, void *data);
      static PyObject *t_MatricesHarvester_get__positionAngleType(t_MatricesHarvester *self, void *data);
      static int t_MatricesHarvester_set__referenceState(t_MatricesHarvester *self, PyObject *arg, void *data);
      static PyGetSetDef t_MatricesHarvester__fields_[] = {
        DECLARE_GET_FIELD(t_MatricesHarvester, jacobiansColumnsNames),
        DECLARE_GET_FIELD(t_MatricesHarvester, orbitType),
        DECLARE_GET_FIELD(t_MatricesHarvester, positionAngleType),
        DECLARE_SET_FIELD(t_MatricesHarvester, referenceState),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MatricesHarvester__methods_[] = {
        DECLARE_METHOD(t_MatricesHarvester, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatricesHarvester, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatricesHarvester, getJacobiansColumnsNames, METH_NOARGS),
        DECLARE_METHOD(t_MatricesHarvester, getOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_MatricesHarvester, getParametersJacobian, METH_O),
        DECLARE_METHOD(t_MatricesHarvester, getPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_MatricesHarvester, getStateTransitionMatrix, METH_O),
        DECLARE_METHOD(t_MatricesHarvester, setReferenceState, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MatricesHarvester)[] = {
        { Py_tp_methods, t_MatricesHarvester__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MatricesHarvester__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MatricesHarvester)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MatricesHarvester, t_MatricesHarvester, MatricesHarvester);

      void t_MatricesHarvester::install(PyObject *module)
      {
        installType(&PY_TYPE(MatricesHarvester), &PY_TYPE_DEF(MatricesHarvester), module, "MatricesHarvester", 0);
      }

      void t_MatricesHarvester::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatricesHarvester), "class_", make_descriptor(MatricesHarvester::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatricesHarvester), "wrapfn_", make_descriptor(t_MatricesHarvester::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatricesHarvester), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MatricesHarvester::initializeClass, 1)))
          return NULL;
        return t_MatricesHarvester::wrap_Object(MatricesHarvester(((t_MatricesHarvester *) arg)->object.this$));
      }
      static PyObject *t_MatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MatricesHarvester::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MatricesHarvester_getJacobiansColumnsNames(t_MatricesHarvester *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getJacobiansColumnsNames());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_MatricesHarvester_getOrbitType(t_MatricesHarvester *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_MatricesHarvester_getParametersJacobian(t_MatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getParametersJacobian(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getParametersJacobian", arg);
        return NULL;
      }

      static PyObject *t_MatricesHarvester_getPositionAngleType(t_MatricesHarvester *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_MatricesHarvester_getStateTransitionMatrix(t_MatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getStateTransitionMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getStateTransitionMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatricesHarvester_setReferenceState(t_MatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setReferenceState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setReferenceState", arg);
        return NULL;
      }

      static PyObject *t_MatricesHarvester_get__jacobiansColumnsNames(t_MatricesHarvester *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getJacobiansColumnsNames());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_MatricesHarvester_get__orbitType(t_MatricesHarvester *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_MatricesHarvester_get__positionAngleType(t_MatricesHarvester *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static int t_MatricesHarvester_set__referenceState(t_MatricesHarvester *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            INT_CALL(self->object.setReferenceState(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "referenceState", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/EstimatedEarthFrameProvider.h"
#include "java/util/Map.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "java/lang/Integer.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/String.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimatedEarthFrameProvider::class$ = NULL;
        jmethodID *EstimatedEarthFrameProvider::mids$ = NULL;
        bool EstimatedEarthFrameProvider::live$ = false;
        jdouble EstimatedEarthFrameProvider::EARTH_ANGULAR_VELOCITY = (jdouble) 0;

        jclass EstimatedEarthFrameProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimatedEarthFrameProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_91f88ad6e1a97332] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/UT1Scale;)V");
            mids$[mid_getEstimatedUT1_ac848fda7f5ef1ad] = env->getMethodID(cls, "getEstimatedUT1", "()Lorg/orekit/time/UT1Scale;");
            mids$[mid_getPolarDriftXDriver_7daccb22665e511b] = env->getMethodID(cls, "getPolarDriftXDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarDriftYDriver_7daccb22665e511b] = env->getMethodID(cls, "getPolarDriftYDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarOffsetXDriver_7daccb22665e511b] = env->getMethodID(cls, "getPolarOffsetXDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarOffsetYDriver_7daccb22665e511b] = env->getMethodID(cls, "getPolarOffsetYDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPrimeMeridianDriftDriver_7daccb22665e511b] = env->getMethodID(cls, "getPrimeMeridianDriftDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPrimeMeridianOffsetDriver_7daccb22665e511b] = env->getMethodID(cls, "getPrimeMeridianOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getStaticTransform_6e492420312934f1] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
            mids$[mid_getStaticTransform_3b5ee2ab7cc035a5] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
            mids$[mid_getTransform_02ca17ac51b6a4b2] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getTransform_286745ef54e0a7f6] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
            mids$[mid_getTransform_f7a260b8d34f2d85] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;ILjava/util/Map;)Lorg/orekit/frames/FieldTransform;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "EARTH_ANGULAR_VELOCITY");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EstimatedEarthFrameProvider::EstimatedEarthFrameProvider(const ::org::orekit::time::UT1Scale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_91f88ad6e1a97332, a0.this$)) {}

        ::org::orekit::time::UT1Scale EstimatedEarthFrameProvider::getEstimatedUT1() const
        {
          return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getEstimatedUT1_ac848fda7f5ef1ad]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPolarDriftXDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarDriftXDriver_7daccb22665e511b]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPolarDriftYDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarDriftYDriver_7daccb22665e511b]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPolarOffsetXDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarOffsetXDriver_7daccb22665e511b]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPolarOffsetYDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarOffsetYDriver_7daccb22665e511b]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPrimeMeridianDriftDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianDriftDriver_7daccb22665e511b]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPrimeMeridianOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianOffsetDriver_7daccb22665e511b]));
        }

        ::org::orekit::frames::StaticTransform EstimatedEarthFrameProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_6e492420312934f1], a0.this$));
        }

        ::org::orekit::frames::FieldStaticTransform EstimatedEarthFrameProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_3b5ee2ab7cc035a5], a0.this$));
        }

        ::org::orekit::frames::Transform EstimatedEarthFrameProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_02ca17ac51b6a4b2], a0.this$));
        }

        ::org::orekit::frames::FieldTransform EstimatedEarthFrameProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_286745ef54e0a7f6], a0.this$));
        }

        ::org::orekit::frames::FieldTransform EstimatedEarthFrameProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, jint a1, const ::java::util::Map & a2) const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_f7a260b8d34f2d85], a0.this$, a1, a2.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        static PyObject *t_EstimatedEarthFrameProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedEarthFrameProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EstimatedEarthFrameProvider_init_(t_EstimatedEarthFrameProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EstimatedEarthFrameProvider_getEstimatedUT1(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPolarDriftXDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPolarDriftYDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPolarOffsetXDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPolarOffsetYDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPrimeMeridianDriftDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPrimeMeridianOffsetDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getStaticTransform(t_EstimatedEarthFrameProvider *self, PyObject *args);
        static PyObject *t_EstimatedEarthFrameProvider_getTransform(t_EstimatedEarthFrameProvider *self, PyObject *args);
        static PyObject *t_EstimatedEarthFrameProvider_get__estimatedUT1(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__polarDriftXDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__polarDriftYDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__polarOffsetXDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__polarOffsetYDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__primeMeridianDriftDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__primeMeridianOffsetDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyGetSetDef t_EstimatedEarthFrameProvider__fields_[] = {
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, estimatedUT1),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, polarDriftXDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, polarDriftYDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, polarOffsetXDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, polarOffsetYDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, primeMeridianDriftDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, primeMeridianOffsetDriver),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimatedEarthFrameProvider__methods_[] = {
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getEstimatedUT1, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPolarDriftXDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPolarDriftYDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPolarOffsetXDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPolarOffsetYDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPrimeMeridianDriftDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPrimeMeridianOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getStaticTransform, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getTransform, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimatedEarthFrameProvider)[] = {
          { Py_tp_methods, t_EstimatedEarthFrameProvider__methods_ },
          { Py_tp_init, (void *) t_EstimatedEarthFrameProvider_init_ },
          { Py_tp_getset, t_EstimatedEarthFrameProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimatedEarthFrameProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EstimatedEarthFrameProvider, t_EstimatedEarthFrameProvider, EstimatedEarthFrameProvider);

        void t_EstimatedEarthFrameProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimatedEarthFrameProvider), &PY_TYPE_DEF(EstimatedEarthFrameProvider), module, "EstimatedEarthFrameProvider", 0);
        }

        void t_EstimatedEarthFrameProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedEarthFrameProvider), "class_", make_descriptor(EstimatedEarthFrameProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedEarthFrameProvider), "wrapfn_", make_descriptor(t_EstimatedEarthFrameProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedEarthFrameProvider), "boxfn_", make_descriptor(boxObject));
          env->getClass(EstimatedEarthFrameProvider::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedEarthFrameProvider), "EARTH_ANGULAR_VELOCITY", make_descriptor(EstimatedEarthFrameProvider::EARTH_ANGULAR_VELOCITY));
        }

        static PyObject *t_EstimatedEarthFrameProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimatedEarthFrameProvider::initializeClass, 1)))
            return NULL;
          return t_EstimatedEarthFrameProvider::wrap_Object(EstimatedEarthFrameProvider(((t_EstimatedEarthFrameProvider *) arg)->object.this$));
        }
        static PyObject *t_EstimatedEarthFrameProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimatedEarthFrameProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EstimatedEarthFrameProvider_init_(t_EstimatedEarthFrameProvider *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::UT1Scale a0((jobject) NULL);
          EstimatedEarthFrameProvider object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::time::UT1Scale::initializeClass, &a0))
          {
            INT_CALL(object = EstimatedEarthFrameProvider(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EstimatedEarthFrameProvider_getEstimatedUT1(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::time::UT1Scale result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedUT1());
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPolarDriftXDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarDriftXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPolarDriftYDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarDriftYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPolarOffsetXDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarOffsetXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPolarOffsetYDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarOffsetYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPrimeMeridianDriftDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeMeridianDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPrimeMeridianOffsetDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeMeridianOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getStaticTransform(t_EstimatedEarthFrameProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::frames::StaticTransform result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getStaticTransform(a0));
                return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
              }
            }
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.getStaticTransform(a0));
                return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
          return NULL;
        }

        static PyObject *t_EstimatedEarthFrameProvider_getTransform(t_EstimatedEarthFrameProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::frames::Transform result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getTransform(a0));
                return ::org::orekit::frames::t_Transform::wrap_Object(result);
              }
            }
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::FieldTransform result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.getTransform(a0));
                return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              ::java::util::Map a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::frames::FieldTransform result((jobject) NULL);

              if (!parseArgs(args, "KIK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(result = self->object.getTransform(a0, a1, a2));
                return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getTransform", args);
          return NULL;
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__estimatedUT1(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::time::UT1Scale value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedUT1());
          return ::org::orekit::time::t_UT1Scale::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__polarDriftXDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarDriftXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__polarDriftYDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarDriftYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__polarOffsetXDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarOffsetXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__polarOffsetYDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarOffsetYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__primeMeridianDriftDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeMeridianDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__primeMeridianOffsetDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeMeridianOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/CodeBias.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *CodeBias::class$ = NULL;
            jmethodID *CodeBias::mids$ = NULL;
            bool CodeBias::live$ = false;

            jclass CodeBias::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/CodeBias");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
                mids$[mid_getCodeBias_9981f74b2d109da6] = env->getMethodID(cls, "getCodeBias", "()D");
                mids$[mid_getSignalID_d6ab429752e7c267] = env->getMethodID(cls, "getSignalID", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CodeBias::CodeBias(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}

            jdouble CodeBias::getCodeBias() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCodeBias_9981f74b2d109da6]);
            }

            jint CodeBias::getSignalID() const
            {
              return env->callIntMethod(this$, mids$[mid_getSignalID_d6ab429752e7c267]);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            static PyObject *t_CodeBias_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CodeBias_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CodeBias_init_(t_CodeBias *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CodeBias_getCodeBias(t_CodeBias *self);
            static PyObject *t_CodeBias_getSignalID(t_CodeBias *self);
            static PyObject *t_CodeBias_get__codeBias(t_CodeBias *self, void *data);
            static PyObject *t_CodeBias_get__signalID(t_CodeBias *self, void *data);
            static PyGetSetDef t_CodeBias__fields_[] = {
              DECLARE_GET_FIELD(t_CodeBias, codeBias),
              DECLARE_GET_FIELD(t_CodeBias, signalID),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CodeBias__methods_[] = {
              DECLARE_METHOD(t_CodeBias, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CodeBias, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CodeBias, getCodeBias, METH_NOARGS),
              DECLARE_METHOD(t_CodeBias, getSignalID, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CodeBias)[] = {
              { Py_tp_methods, t_CodeBias__methods_ },
              { Py_tp_init, (void *) t_CodeBias_init_ },
              { Py_tp_getset, t_CodeBias__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CodeBias)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CodeBias, t_CodeBias, CodeBias);

            void t_CodeBias::install(PyObject *module)
            {
              installType(&PY_TYPE(CodeBias), &PY_TYPE_DEF(CodeBias), module, "CodeBias", 0);
            }

            void t_CodeBias::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CodeBias), "class_", make_descriptor(CodeBias::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CodeBias), "wrapfn_", make_descriptor(t_CodeBias::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CodeBias), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CodeBias_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CodeBias::initializeClass, 1)))
                return NULL;
              return t_CodeBias::wrap_Object(CodeBias(((t_CodeBias *) arg)->object.this$));
            }
            static PyObject *t_CodeBias_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CodeBias::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CodeBias_init_(t_CodeBias *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jdouble a1;
              CodeBias object((jobject) NULL);

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                INT_CALL(object = CodeBias(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CodeBias_getCodeBias(t_CodeBias *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCodeBias());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CodeBias_getSignalID(t_CodeBias *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSignalID());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CodeBias_get__codeBias(t_CodeBias *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCodeBias());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CodeBias_get__signalID(t_CodeBias *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSignalID());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/KolmogorovSmirnovTest.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *KolmogorovSmirnovTest::class$ = NULL;
        jmethodID *KolmogorovSmirnovTest::mids$ = NULL;
        bool KolmogorovSmirnovTest::live$ = false;

        jclass KolmogorovSmirnovTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/KolmogorovSmirnovTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_f5bbab7e97879358] = env->getMethodID(cls, "<init>", "(J)V");
            mids$[mid_approximateP_e8c62577e6af9173] = env->getMethodID(cls, "approximateP", "(DII)D");
            mids$[mid_bootstrap_448f0f707d98e665] = env->getMethodID(cls, "bootstrap", "([D[DI)D");
            mids$[mid_bootstrap_7931484202b0fd2b] = env->getMethodID(cls, "bootstrap", "([D[DIZ)D");
            mids$[mid_cdf_988810e80d644418] = env->getMethodID(cls, "cdf", "(DI)D");
            mids$[mid_cdf_b44b04b83dcbc7f3] = env->getMethodID(cls, "cdf", "(DIZ)D");
            mids$[mid_cdfExact_988810e80d644418] = env->getMethodID(cls, "cdfExact", "(DI)D");
            mids$[mid_exactP_23ad5004a7d91208] = env->getMethodID(cls, "exactP", "(DIIZ)D");
            mids$[mid_kolmogorovSmirnovStatistic_b01af8a77d4df96f] = env->getMethodID(cls, "kolmogorovSmirnovStatistic", "([D[D)D");
            mids$[mid_kolmogorovSmirnovStatistic_163649aa371f5c4c] = env->getMethodID(cls, "kolmogorovSmirnovStatistic", "(Lorg/hipparchus/distribution/RealDistribution;[D)D");
            mids$[mid_kolmogorovSmirnovTest_b01af8a77d4df96f] = env->getMethodID(cls, "kolmogorovSmirnovTest", "([D[D)D");
            mids$[mid_kolmogorovSmirnovTest_163649aa371f5c4c] = env->getMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[D)D");
            mids$[mid_kolmogorovSmirnovTest_2cf76703ce30b165] = env->getMethodID(cls, "kolmogorovSmirnovTest", "([D[DZ)D");
            mids$[mid_kolmogorovSmirnovTest_12a35b6f3eee20af] = env->getMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[DZ)D");
            mids$[mid_kolmogorovSmirnovTest_4b4eb130f807dbcc] = env->getMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[DD)Z");
            mids$[mid_ksSum_231b24aba5c51c15] = env->getMethodID(cls, "ksSum", "(DDI)D");
            mids$[mid_pelzGood_988810e80d644418] = env->getMethodID(cls, "pelzGood", "(DI)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KolmogorovSmirnovTest::KolmogorovSmirnovTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        KolmogorovSmirnovTest::KolmogorovSmirnovTest(jlong a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5bbab7e97879358, a0)) {}

        jdouble KolmogorovSmirnovTest::approximateP(jdouble a0, jint a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_approximateP_e8c62577e6af9173], a0, a1, a2);
        }

        jdouble KolmogorovSmirnovTest::bootstrap(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_bootstrap_448f0f707d98e665], a0.this$, a1.this$, a2);
        }

        jdouble KolmogorovSmirnovTest::bootstrap(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jboolean a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_bootstrap_7931484202b0fd2b], a0.this$, a1.this$, a2, a3);
        }

        jdouble KolmogorovSmirnovTest::cdf(jdouble a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cdf_988810e80d644418], a0, a1);
        }

        jdouble KolmogorovSmirnovTest::cdf(jdouble a0, jint a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cdf_b44b04b83dcbc7f3], a0, a1, a2);
        }

        jdouble KolmogorovSmirnovTest::cdfExact(jdouble a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cdfExact_988810e80d644418], a0, a1);
        }

        jdouble KolmogorovSmirnovTest::exactP(jdouble a0, jint a1, jint a2, jboolean a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_exactP_23ad5004a7d91208], a0, a1, a2, a3);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovStatistic(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovStatistic_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovStatistic(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovStatistic_163649aa371f5c4c], a0.this$, a1.this$);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovTest_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovTest_163649aa371f5c4c], a0.this$, a1.this$);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovTest_2cf76703ce30b165], a0.this$, a1.this$, a2);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovTest_12a35b6f3eee20af], a0.this$, a1.this$, a2);
        }

        jboolean KolmogorovSmirnovTest::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_kolmogorovSmirnovTest_4b4eb130f807dbcc], a0.this$, a1.this$, a2);
        }

        jdouble KolmogorovSmirnovTest::ksSum(jdouble a0, jdouble a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_ksSum_231b24aba5c51c15], a0, a1, a2);
        }

        jdouble KolmogorovSmirnovTest::pelzGood(jdouble a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_pelzGood_988810e80d644418], a0, a1);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {
        static PyObject *t_KolmogorovSmirnovTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KolmogorovSmirnovTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KolmogorovSmirnovTest_init_(t_KolmogorovSmirnovTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KolmogorovSmirnovTest_approximateP(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_bootstrap(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_cdf(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_cdfExact(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_exactP(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_kolmogorovSmirnovStatistic(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_kolmogorovSmirnovTest(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_ksSum(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_pelzGood(t_KolmogorovSmirnovTest *self, PyObject *args);

        static PyMethodDef t_KolmogorovSmirnovTest__methods_[] = {
          DECLARE_METHOD(t_KolmogorovSmirnovTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, approximateP, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, bootstrap, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, cdf, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, cdfExact, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, exactP, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, kolmogorovSmirnovStatistic, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, kolmogorovSmirnovTest, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, ksSum, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, pelzGood, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KolmogorovSmirnovTest)[] = {
          { Py_tp_methods, t_KolmogorovSmirnovTest__methods_ },
          { Py_tp_init, (void *) t_KolmogorovSmirnovTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KolmogorovSmirnovTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KolmogorovSmirnovTest, t_KolmogorovSmirnovTest, KolmogorovSmirnovTest);

        void t_KolmogorovSmirnovTest::install(PyObject *module)
        {
          installType(&PY_TYPE(KolmogorovSmirnovTest), &PY_TYPE_DEF(KolmogorovSmirnovTest), module, "KolmogorovSmirnovTest", 0);
        }

        void t_KolmogorovSmirnovTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KolmogorovSmirnovTest), "class_", make_descriptor(KolmogorovSmirnovTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KolmogorovSmirnovTest), "wrapfn_", make_descriptor(t_KolmogorovSmirnovTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KolmogorovSmirnovTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KolmogorovSmirnovTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KolmogorovSmirnovTest::initializeClass, 1)))
            return NULL;
          return t_KolmogorovSmirnovTest::wrap_Object(KolmogorovSmirnovTest(((t_KolmogorovSmirnovTest *) arg)->object.this$));
        }
        static PyObject *t_KolmogorovSmirnovTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KolmogorovSmirnovTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KolmogorovSmirnovTest_init_(t_KolmogorovSmirnovTest *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              KolmogorovSmirnovTest object((jobject) NULL);

              INT_CALL(object = KolmogorovSmirnovTest());
              self->object = object;
              break;
            }
           case 1:
            {
              jlong a0;
              KolmogorovSmirnovTest object((jobject) NULL);

              if (!parseArgs(args, "J", &a0))
              {
                INT_CALL(object = KolmogorovSmirnovTest(a0));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_KolmogorovSmirnovTest_approximateP(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.approximateP(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "approximateP", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_bootstrap(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jdouble result;

              if (!parseArgs(args, "[D[DI", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.bootstrap(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jboolean a3;
              jdouble result;

              if (!parseArgs(args, "[D[DIZ", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.bootstrap(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "bootstrap", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_cdf(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                OBJ_CALL(result = self->object.cdf(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              jdouble a0;
              jint a1;
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "DIZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.cdf(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "cdf", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_cdfExact(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "DI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.cdfExact(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "cdfExact", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_exactP(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jint a2;
          jboolean a3;
          jdouble result;

          if (!parseArgs(args, "DIIZ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.exactP(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "exactP", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_kolmogorovSmirnovStatistic(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovStatistic(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovStatistic(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "kolmogorovSmirnovStatistic", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_kolmogorovSmirnovTest(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "k[DZ", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "k[DD", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "kolmogorovSmirnovTest", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_ksSum(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "DDI", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.ksSum(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "ksSum", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_pelzGood(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "DI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.pelzGood(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "pelzGood", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *VisibilityTrigger::class$ = NULL;
        jmethodID *VisibilityTrigger::mids$ = NULL;
        bool VisibilityTrigger::live$ = false;
        VisibilityTrigger *VisibilityTrigger::VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV = NULL;
        VisibilityTrigger *VisibilityTrigger::VISIBLE_ONLY_WHEN_FULLY_IN_FOV = NULL;

        jclass VisibilityTrigger::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/VisibilityTrigger");

            mids$ = new jmethodID[max_mid];
            mids$[mid_radiusCorrection_bf28ed64d6e8576b] = env->getMethodID(cls, "radiusCorrection", "(D)D");
            mids$[mid_valueOf_9f580bbb779ebb7c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/propagation/events/VisibilityTrigger;");
            mids$[mid_values_cafe1fd4f98a94e9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/propagation/events/VisibilityTrigger;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV = new VisibilityTrigger(env->getStaticObjectField(cls, "VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV", "Lorg/orekit/propagation/events/VisibilityTrigger;"));
            VISIBLE_ONLY_WHEN_FULLY_IN_FOV = new VisibilityTrigger(env->getStaticObjectField(cls, "VISIBLE_ONLY_WHEN_FULLY_IN_FOV", "Lorg/orekit/propagation/events/VisibilityTrigger;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble VisibilityTrigger::radiusCorrection(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_radiusCorrection_bf28ed64d6e8576b], a0);
        }

        VisibilityTrigger VisibilityTrigger::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return VisibilityTrigger(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9f580bbb779ebb7c], a0.this$));
        }

        JArray< VisibilityTrigger > VisibilityTrigger::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< VisibilityTrigger >(env->callStaticObjectMethod(cls, mids$[mid_values_cafe1fd4f98a94e9]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_VisibilityTrigger_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_VisibilityTrigger_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_VisibilityTrigger_of_(t_VisibilityTrigger *self, PyObject *args);
        static PyObject *t_VisibilityTrigger_radiusCorrection(t_VisibilityTrigger *self, PyObject *arg);
        static PyObject *t_VisibilityTrigger_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_VisibilityTrigger_values(PyTypeObject *type);
        static PyObject *t_VisibilityTrigger_get__parameters_(t_VisibilityTrigger *self, void *data);
        static PyGetSetDef t_VisibilityTrigger__fields_[] = {
          DECLARE_GET_FIELD(t_VisibilityTrigger, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_VisibilityTrigger__methods_[] = {
          DECLARE_METHOD(t_VisibilityTrigger, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_VisibilityTrigger, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_VisibilityTrigger, of_, METH_VARARGS),
          DECLARE_METHOD(t_VisibilityTrigger, radiusCorrection, METH_O),
          DECLARE_METHOD(t_VisibilityTrigger, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_VisibilityTrigger, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(VisibilityTrigger)[] = {
          { Py_tp_methods, t_VisibilityTrigger__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_VisibilityTrigger__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(VisibilityTrigger)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(VisibilityTrigger, t_VisibilityTrigger, VisibilityTrigger);
        PyObject *t_VisibilityTrigger::wrap_Object(const VisibilityTrigger& object, PyTypeObject *p0)
        {
          PyObject *obj = t_VisibilityTrigger::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_VisibilityTrigger *self = (t_VisibilityTrigger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_VisibilityTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_VisibilityTrigger::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_VisibilityTrigger *self = (t_VisibilityTrigger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_VisibilityTrigger::install(PyObject *module)
        {
          installType(&PY_TYPE(VisibilityTrigger), &PY_TYPE_DEF(VisibilityTrigger), module, "VisibilityTrigger", 0);
        }

        void t_VisibilityTrigger::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "class_", make_descriptor(VisibilityTrigger::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "wrapfn_", make_descriptor(t_VisibilityTrigger::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "boxfn_", make_descriptor(boxObject));
          env->getClass(VisibilityTrigger::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV", make_descriptor(t_VisibilityTrigger::wrap_Object(*VisibilityTrigger::VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "VISIBLE_ONLY_WHEN_FULLY_IN_FOV", make_descriptor(t_VisibilityTrigger::wrap_Object(*VisibilityTrigger::VISIBLE_ONLY_WHEN_FULLY_IN_FOV)));
        }

        static PyObject *t_VisibilityTrigger_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, VisibilityTrigger::initializeClass, 1)))
            return NULL;
          return t_VisibilityTrigger::wrap_Object(VisibilityTrigger(((t_VisibilityTrigger *) arg)->object.this$));
        }
        static PyObject *t_VisibilityTrigger_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, VisibilityTrigger::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_VisibilityTrigger_of_(t_VisibilityTrigger *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_VisibilityTrigger_radiusCorrection(t_VisibilityTrigger *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.radiusCorrection(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "radiusCorrection", arg);
          return NULL;
        }

        static PyObject *t_VisibilityTrigger_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          VisibilityTrigger result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::propagation::events::VisibilityTrigger::valueOf(a0));
            return t_VisibilityTrigger::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_VisibilityTrigger_values(PyTypeObject *type)
        {
          JArray< VisibilityTrigger > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::propagation::events::VisibilityTrigger::values());
          return JArray<jobject>(result.this$).wrap(t_VisibilityTrigger::wrap_jobject);
        }
        static PyObject *t_VisibilityTrigger_get__parameters_(t_VisibilityTrigger *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "java/util/Map.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *UserDefined::class$ = NULL;
            jmethodID *UserDefined::mids$ = NULL;
            bool UserDefined::live$ = false;
            ::java::lang::String *UserDefined::USER_DEFINED_PREFIX = NULL;
            ::java::lang::String *UserDefined::USER_DEFINED_XML_ATTRIBUTE = NULL;
            ::java::lang::String *UserDefined::USER_DEFINED_XML_TAG = NULL;

            jclass UserDefined::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/UserDefined");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_addEntry_771aee6c143cc92a] = env->getMethodID(cls, "addEntry", "(Ljava/lang/String;Ljava/lang/String;)V");
                mids$[mid_getParameters_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getParameters", "()Ljava/util/Map;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                USER_DEFINED_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "USER_DEFINED_PREFIX", "Ljava/lang/String;"));
                USER_DEFINED_XML_ATTRIBUTE = new ::java::lang::String(env->getStaticObjectField(cls, "USER_DEFINED_XML_ATTRIBUTE", "Ljava/lang/String;"));
                USER_DEFINED_XML_TAG = new ::java::lang::String(env->getStaticObjectField(cls, "USER_DEFINED_XML_TAG", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            UserDefined::UserDefined() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void UserDefined::addEntry(const ::java::lang::String & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addEntry_771aee6c143cc92a], a0.this$, a1.this$);
            }

            ::java::util::Map UserDefined::getParameters() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getParameters_dbcb8bbac6b35e0d]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            static PyObject *t_UserDefined_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UserDefined_instance_(PyTypeObject *type, PyObject *arg);
            static int t_UserDefined_init_(t_UserDefined *self, PyObject *args, PyObject *kwds);
            static PyObject *t_UserDefined_addEntry(t_UserDefined *self, PyObject *args);
            static PyObject *t_UserDefined_getParameters(t_UserDefined *self);
            static PyObject *t_UserDefined_get__parameters(t_UserDefined *self, void *data);
            static PyGetSetDef t_UserDefined__fields_[] = {
              DECLARE_GET_FIELD(t_UserDefined, parameters),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_UserDefined__methods_[] = {
              DECLARE_METHOD(t_UserDefined, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefined, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefined, addEntry, METH_VARARGS),
              DECLARE_METHOD(t_UserDefined, getParameters, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UserDefined)[] = {
              { Py_tp_methods, t_UserDefined__methods_ },
              { Py_tp_init, (void *) t_UserDefined_init_ },
              { Py_tp_getset, t_UserDefined__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UserDefined)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(UserDefined, t_UserDefined, UserDefined);

            void t_UserDefined::install(PyObject *module)
            {
              installType(&PY_TYPE(UserDefined), &PY_TYPE_DEF(UserDefined), module, "UserDefined", 0);
            }

            void t_UserDefined::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "class_", make_descriptor(UserDefined::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "wrapfn_", make_descriptor(t_UserDefined::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "boxfn_", make_descriptor(boxObject));
              env->getClass(UserDefined::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "USER_DEFINED_PREFIX", make_descriptor(j2p(*UserDefined::USER_DEFINED_PREFIX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "USER_DEFINED_XML_ATTRIBUTE", make_descriptor(j2p(*UserDefined::USER_DEFINED_XML_ATTRIBUTE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "USER_DEFINED_XML_TAG", make_descriptor(j2p(*UserDefined::USER_DEFINED_XML_TAG)));
            }

            static PyObject *t_UserDefined_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UserDefined::initializeClass, 1)))
                return NULL;
              return t_UserDefined::wrap_Object(UserDefined(((t_UserDefined *) arg)->object.this$));
            }
            static PyObject *t_UserDefined_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UserDefined::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_UserDefined_init_(t_UserDefined *self, PyObject *args, PyObject *kwds)
            {
              UserDefined object((jobject) NULL);

              INT_CALL(object = UserDefined());
              self->object = object;

              return 0;
            }

            static PyObject *t_UserDefined_addEntry(t_UserDefined *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "ss", &a0, &a1))
              {
                OBJ_CALL(self->object.addEntry(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addEntry", args);
              return NULL;
            }

            static PyObject *t_UserDefined_getParameters(t_UserDefined *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getParameters());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_UserDefined_get__parameters(t_UserDefined *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getParameters());
              return ::java::util::t_Map::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/TransformGenerator.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TransformGenerator::class$ = NULL;
      jmethodID *TransformGenerator::mids$ = NULL;
      bool TransformGenerator::live$ = false;

      jclass TransformGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TransformGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ec3da82aeb9fec85] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/TransformProvider;D)V");
          mids$[mid_generate_0499dac7e83b853d] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TransformGenerator::TransformGenerator(jint a0, const ::org::orekit::frames::TransformProvider & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ec3da82aeb9fec85, a0, a1.this$, a2)) {}

      ::java::util::List TransformGenerator::generate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_generate_0499dac7e83b853d], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_TransformGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TransformGenerator_init_(t_TransformGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TransformGenerator_generate(t_TransformGenerator *self, PyObject *args);

      static PyMethodDef t_TransformGenerator__methods_[] = {
        DECLARE_METHOD(t_TransformGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformGenerator, generate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TransformGenerator)[] = {
        { Py_tp_methods, t_TransformGenerator__methods_ },
        { Py_tp_init, (void *) t_TransformGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TransformGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TransformGenerator, t_TransformGenerator, TransformGenerator);

      void t_TransformGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(TransformGenerator), &PY_TYPE_DEF(TransformGenerator), module, "TransformGenerator", 0);
      }

      void t_TransformGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformGenerator), "class_", make_descriptor(TransformGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformGenerator), "wrapfn_", make_descriptor(t_TransformGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TransformGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TransformGenerator::initializeClass, 1)))
          return NULL;
        return t_TransformGenerator::wrap_Object(TransformGenerator(((t_TransformGenerator *) arg)->object.this$));
      }
      static PyObject *t_TransformGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TransformGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TransformGenerator_init_(t_TransformGenerator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        ::org::orekit::frames::TransformProvider a1((jobject) NULL);
        jdouble a2;
        TransformGenerator object((jobject) NULL);

        if (!parseArgs(args, "IkD", ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = TransformGenerator(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TransformGenerator_generate(t_TransformGenerator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.generate(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::frames::PY_TYPE(Transform));
        }

        PyErr_SetArgsError((PyObject *) self, "generate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/SubLimitAngle.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *SubLimitAngle::class$ = NULL;
          jmethodID *SubLimitAngle::mids$ = NULL;
          bool SubLimitAngle::live$ = false;

          jclass SubLimitAngle::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/SubLimitAngle");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5428b0a00a62bde3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_getSize_9981f74b2d109da6] = env->getMethodID(cls, "getSize", "()D");
              mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
              mids$[mid_split_b587049e19682418] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_35b28ef87fdef21f] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubLimitAngle::SubLimitAngle(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_5428b0a00a62bde3, a0.this$, a1.this$)) {}

          jdouble SubLimitAngle::getSize() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSize_9981f74b2d109da6]);
          }

          jboolean SubLimitAngle::isEmpty() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
          }

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubLimitAngle::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_b587049e19682418], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {
          static PyObject *t_SubLimitAngle_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLimitAngle_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLimitAngle_of_(t_SubLimitAngle *self, PyObject *args);
          static int t_SubLimitAngle_init_(t_SubLimitAngle *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubLimitAngle_getSize(t_SubLimitAngle *self, PyObject *args);
          static PyObject *t_SubLimitAngle_isEmpty(t_SubLimitAngle *self, PyObject *args);
          static PyObject *t_SubLimitAngle_split(t_SubLimitAngle *self, PyObject *args);
          static PyObject *t_SubLimitAngle_get__empty(t_SubLimitAngle *self, void *data);
          static PyObject *t_SubLimitAngle_get__size(t_SubLimitAngle *self, void *data);
          static PyObject *t_SubLimitAngle_get__parameters_(t_SubLimitAngle *self, void *data);
          static PyGetSetDef t_SubLimitAngle__fields_[] = {
            DECLARE_GET_FIELD(t_SubLimitAngle, empty),
            DECLARE_GET_FIELD(t_SubLimitAngle, size),
            DECLARE_GET_FIELD(t_SubLimitAngle, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubLimitAngle__methods_[] = {
            DECLARE_METHOD(t_SubLimitAngle, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLimitAngle, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLimitAngle, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubLimitAngle, getSize, METH_VARARGS),
            DECLARE_METHOD(t_SubLimitAngle, isEmpty, METH_VARARGS),
            DECLARE_METHOD(t_SubLimitAngle, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubLimitAngle)[] = {
            { Py_tp_methods, t_SubLimitAngle__methods_ },
            { Py_tp_init, (void *) t_SubLimitAngle_init_ },
            { Py_tp_getset, t_SubLimitAngle__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubLimitAngle)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubLimitAngle, t_SubLimitAngle, SubLimitAngle);
          PyObject *t_SubLimitAngle::wrap_Object(const SubLimitAngle& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubLimitAngle::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubLimitAngle *self = (t_SubLimitAngle *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubLimitAngle::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubLimitAngle::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubLimitAngle *self = (t_SubLimitAngle *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubLimitAngle::install(PyObject *module)
          {
            installType(&PY_TYPE(SubLimitAngle), &PY_TYPE_DEF(SubLimitAngle), module, "SubLimitAngle", 0);
          }

          void t_SubLimitAngle::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLimitAngle), "class_", make_descriptor(SubLimitAngle::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLimitAngle), "wrapfn_", make_descriptor(t_SubLimitAngle::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLimitAngle), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubLimitAngle_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubLimitAngle::initializeClass, 1)))
              return NULL;
            return t_SubLimitAngle::wrap_Object(SubLimitAngle(((t_SubLimitAngle *) arg)->object.this$));
          }
          static PyObject *t_SubLimitAngle_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubLimitAngle::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubLimitAngle_of_(t_SubLimitAngle *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubLimitAngle_init_(t_SubLimitAngle *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
            PyTypeObject **p1;
            SubLimitAngle object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
            {
              INT_CALL(object = SubLimitAngle(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
              self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SubLimitAngle_getSize(t_SubLimitAngle *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSize());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SubLimitAngle), (PyObject *) self, "getSize", args, 2);
          }

          static PyObject *t_SubLimitAngle_isEmpty(t_SubLimitAngle *self, PyObject *args)
          {
            jboolean result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.isEmpty());
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(SubLimitAngle), (PyObject *) self, "isEmpty", args, 2);
          }

          static PyObject *t_SubLimitAngle_split(t_SubLimitAngle *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D));
            }

            return callSuper(PY_TYPE(SubLimitAngle), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubLimitAngle_get__parameters_(t_SubLimitAngle *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SubLimitAngle_get__empty(t_SubLimitAngle *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isEmpty());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_SubLimitAngle_get__size(t_SubLimitAngle *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSize());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonExtendedPVCoordinatesProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonExtendedPVCoordinatesProvider::class$ = NULL;
      jmethodID *PythonExtendedPVCoordinatesProvider::mids$ = NULL;
      bool PythonExtendedPVCoordinatesProvider::live$ = false;

      jclass PythonExtendedPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonExtendedPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getPVCoordinates_6236a35378ed47a5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_1b1a4229447f7bf7] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonExtendedPVCoordinatesProvider::PythonExtendedPVCoordinatesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonExtendedPVCoordinatesProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonExtendedPVCoordinatesProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonExtendedPVCoordinatesProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_PythonExtendedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonExtendedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonExtendedPVCoordinatesProvider_init_(t_PythonExtendedPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonExtendedPVCoordinatesProvider_finalize(t_PythonExtendedPVCoordinatesProvider *self);
      static PyObject *t_PythonExtendedPVCoordinatesProvider_pythonExtension(t_PythonExtendedPVCoordinatesProvider *self, PyObject *args);
      static jobject JNICALL t_PythonExtendedPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonExtendedPVCoordinatesProvider_getPVCoordinates1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonExtendedPVCoordinatesProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonExtendedPVCoordinatesProvider_get__self(t_PythonExtendedPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_PythonExtendedPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonExtendedPVCoordinatesProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonExtendedPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_PythonExtendedPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonExtendedPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonExtendedPVCoordinatesProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonExtendedPVCoordinatesProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonExtendedPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_PythonExtendedPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_PythonExtendedPVCoordinatesProvider_init_ },
        { Py_tp_getset, t_PythonExtendedPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonExtendedPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonExtendedPVCoordinatesProvider, t_PythonExtendedPVCoordinatesProvider, PythonExtendedPVCoordinatesProvider);

      void t_PythonExtendedPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonExtendedPVCoordinatesProvider), &PY_TYPE_DEF(PythonExtendedPVCoordinatesProvider), module, "PythonExtendedPVCoordinatesProvider", 1);
      }

      void t_PythonExtendedPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonExtendedPVCoordinatesProvider), "class_", make_descriptor(PythonExtendedPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonExtendedPVCoordinatesProvider), "wrapfn_", make_descriptor(t_PythonExtendedPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonExtendedPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonExtendedPVCoordinatesProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonExtendedPVCoordinatesProvider_getPVCoordinates0 },
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonExtendedPVCoordinatesProvider_getPVCoordinates1 },
          { "pythonDecRef", "()V", (void *) t_PythonExtendedPVCoordinatesProvider_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonExtendedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonExtendedPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_PythonExtendedPVCoordinatesProvider::wrap_Object(PythonExtendedPVCoordinatesProvider(((t_PythonExtendedPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonExtendedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonExtendedPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonExtendedPVCoordinatesProvider_init_(t_PythonExtendedPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonExtendedPVCoordinatesProvider object((jobject) NULL);

        INT_CALL(object = PythonExtendedPVCoordinatesProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonExtendedPVCoordinatesProvider_finalize(t_PythonExtendedPVCoordinatesProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonExtendedPVCoordinatesProvider_pythonExtension(t_PythonExtendedPVCoordinatesProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonExtendedPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonExtendedPVCoordinatesProvider::mids$[PythonExtendedPVCoordinatesProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonExtendedPVCoordinatesProvider_getPVCoordinates1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonExtendedPVCoordinatesProvider::mids$[PythonExtendedPVCoordinatesProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonExtendedPVCoordinatesProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonExtendedPVCoordinatesProvider::mids$[PythonExtendedPVCoordinatesProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonExtendedPVCoordinatesProvider::mids$[PythonExtendedPVCoordinatesProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonExtendedPVCoordinatesProvider_get__self(t_PythonExtendedPVCoordinatesProvider *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPFWriter.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPFWriter::class$ = NULL;
        jmethodID *CPFWriter::mids$ = NULL;
        bool CPFWriter::live$ = false;

        jclass CPFWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPFWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_930ec2644ec1d38b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ilrs/CPFHeader;Lorg/orekit/time/TimeScale;)V");
            mids$[mid_init$_318d888e2f998fee] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ilrs/CPFHeader;Lorg/orekit/time/TimeScale;Z)V");
            mids$[mid_write_12ce9ebfe43ac6e6] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPFWriter::CPFWriter(const ::org::orekit::files::ilrs::CPFHeader & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_930ec2644ec1d38b, a0.this$, a1.this$)) {}

        CPFWriter::CPFWriter(const ::org::orekit::files::ilrs::CPFHeader & a0, const ::org::orekit::time::TimeScale & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_318d888e2f998fee, a0.this$, a1.this$, a2)) {}

        void CPFWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_12ce9ebfe43ac6e6], a0.this$, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CPFWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPFWriter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPFWriter_init_(t_CPFWriter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPFWriter_write(t_CPFWriter *self, PyObject *args);

        static PyMethodDef t_CPFWriter__methods_[] = {
          DECLARE_METHOD(t_CPFWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFWriter, write, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPFWriter)[] = {
          { Py_tp_methods, t_CPFWriter__methods_ },
          { Py_tp_init, (void *) t_CPFWriter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPFWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CPFWriter, t_CPFWriter, CPFWriter);

        void t_CPFWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(CPFWriter), &PY_TYPE_DEF(CPFWriter), module, "CPFWriter", 0);
        }

        void t_CPFWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFWriter), "class_", make_descriptor(CPFWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFWriter), "wrapfn_", make_descriptor(t_CPFWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFWriter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPFWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPFWriter::initializeClass, 1)))
            return NULL;
          return t_CPFWriter::wrap_Object(CPFWriter(((t_CPFWriter *) arg)->object.this$));
        }
        static PyObject *t_CPFWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPFWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPFWriter_init_(t_CPFWriter *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::files::ilrs::CPFHeader a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              CPFWriter object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ilrs::CPFHeader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
              {
                INT_CALL(object = CPFWriter(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::files::ilrs::CPFHeader a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              jboolean a2;
              CPFWriter object((jobject) NULL);

              if (!parseArgs(args, "kkZ", ::org::orekit::files::ilrs::CPFHeader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = CPFWriter(a0, a1, a2));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CPFWriter_write(t_CPFWriter *self, PyObject *args)
        {
          ::java::lang::Appendable a0((jobject) NULL);
          ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
          {
            OBJ_CALL(self->object.write(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "write", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *FieldODEStepHandler::class$ = NULL;
        jmethodID *FieldODEStepHandler::mids$ = NULL;
        bool FieldODEStepHandler::live$ = false;

        jclass FieldODEStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/FieldODEStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_380a9edd05c82300] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)V");
            mids$[mid_handleStep_d5c9193ad6d936b3] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)V");
            mids$[mid_init_2a077928ff78cfcb] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldODEStepHandler::finish(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_380a9edd05c82300], a0.this$);
        }

        void FieldODEStepHandler::handleStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_d5c9193ad6d936b3], a0.this$);
        }

        void FieldODEStepHandler::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2a077928ff78cfcb], a0.this$, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        static PyObject *t_FieldODEStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStepHandler_of_(t_FieldODEStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepHandler_finish(t_FieldODEStepHandler *self, PyObject *arg);
        static PyObject *t_FieldODEStepHandler_handleStep(t_FieldODEStepHandler *self, PyObject *arg);
        static PyObject *t_FieldODEStepHandler_init(t_FieldODEStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepHandler_get__parameters_(t_FieldODEStepHandler *self, void *data);
        static PyGetSetDef t_FieldODEStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEStepHandler__methods_[] = {
          DECLARE_METHOD(t_FieldODEStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEStepHandler, finish, METH_O),
          DECLARE_METHOD(t_FieldODEStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_FieldODEStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEStepHandler)[] = {
          { Py_tp_methods, t_FieldODEStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEStepHandler, t_FieldODEStepHandler, FieldODEStepHandler);
        PyObject *t_FieldODEStepHandler::wrap_Object(const FieldODEStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStepHandler *self = (t_FieldODEStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStepHandler *self = (t_FieldODEStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEStepHandler), &PY_TYPE_DEF(FieldODEStepHandler), module, "FieldODEStepHandler", 0);
        }

        void t_FieldODEStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepHandler), "class_", make_descriptor(FieldODEStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepHandler), "wrapfn_", make_descriptor(t_FieldODEStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEStepHandler::initializeClass, 1)))
            return NULL;
          return t_FieldODEStepHandler::wrap_Object(FieldODEStepHandler(((t_FieldODEStepHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldODEStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEStepHandler_of_(t_FieldODEStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEStepHandler_finish(t_FieldODEStepHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldODEStepHandler_handleStep(t_FieldODEStepHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldODEStepHandler_init(t_FieldODEStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldODEStepHandler_get__parameters_(t_FieldODEStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonFieldAbstractDetector.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonFieldAbstractDetector::class$ = NULL;
        jmethodID *PythonFieldAbstractDetector::mids$ = NULL;
        bool PythonFieldAbstractDetector::live$ = false;

        jclass PythonFieldAbstractDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonFieldAbstractDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a2aada30acc6944f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)V");
            mids$[mid_create_6aaef69387f9170d] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAbstractDetector::PythonFieldAbstractDetector(const ::org::orekit::propagation::events::FieldAdaptableInterval & a0, const ::org::hipparchus::CalculusFieldElement & a1, jint a2, const ::org::orekit::propagation::events::handlers::FieldEventHandler & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_a2aada30acc6944f, a0.this$, a1.this$, a2, a3.this$)) {}

        void PythonFieldAbstractDetector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonFieldAbstractDetector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonFieldAbstractDetector::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_PythonFieldAbstractDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractDetector_of_(t_PythonFieldAbstractDetector *self, PyObject *args);
        static int t_PythonFieldAbstractDetector_init_(t_PythonFieldAbstractDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAbstractDetector_finalize(t_PythonFieldAbstractDetector *self);
        static PyObject *t_PythonFieldAbstractDetector_pythonExtension(t_PythonFieldAbstractDetector *self, PyObject *args);
        static jobject JNICALL t_PythonFieldAbstractDetector_create0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jint a2, jobject a3);
        static jobject JNICALL t_PythonFieldAbstractDetector_g1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldAbstractDetector_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldAbstractDetector_get__self(t_PythonFieldAbstractDetector *self, void *data);
        static PyObject *t_PythonFieldAbstractDetector_get__parameters_(t_PythonFieldAbstractDetector *self, void *data);
        static PyGetSetDef t_PythonFieldAbstractDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAbstractDetector, self),
          DECLARE_GET_FIELD(t_PythonFieldAbstractDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAbstractDetector__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAbstractDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAbstractDetector, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAbstractDetector, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAbstractDetector)[] = {
          { Py_tp_methods, t_PythonFieldAbstractDetector__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAbstractDetector_init_ },
          { Py_tp_getset, t_PythonFieldAbstractDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAbstractDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(PythonFieldAbstractDetector, t_PythonFieldAbstractDetector, PythonFieldAbstractDetector);
        PyObject *t_PythonFieldAbstractDetector::wrap_Object(const PythonFieldAbstractDetector& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_PythonFieldAbstractDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractDetector *self = (t_PythonFieldAbstractDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_PythonFieldAbstractDetector::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_PythonFieldAbstractDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractDetector *self = (t_PythonFieldAbstractDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_PythonFieldAbstractDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAbstractDetector), &PY_TYPE_DEF(PythonFieldAbstractDetector), module, "PythonFieldAbstractDetector", 1);
        }

        void t_PythonFieldAbstractDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractDetector), "class_", make_descriptor(PythonFieldAbstractDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractDetector), "wrapfn_", make_descriptor(t_PythonFieldAbstractDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractDetector), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAbstractDetector::initializeClass);
          JNINativeMethod methods[] = {
            { "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAbstractDetector;", (void *) t_PythonFieldAbstractDetector_create0 },
            { "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldAbstractDetector_g1 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAbstractDetector_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonFieldAbstractDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAbstractDetector::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAbstractDetector::wrap_Object(PythonFieldAbstractDetector(((t_PythonFieldAbstractDetector *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAbstractDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAbstractDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAbstractDetector_of_(t_PythonFieldAbstractDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAbstractDetector_init_(t_PythonFieldAbstractDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          jint a2;
          ::org::orekit::propagation::events::handlers::FieldEventHandler a3((jobject) NULL);
          PyTypeObject **p3;
          PythonFieldAbstractDetector object((jobject) NULL);

          if (!parseArgs(args, "KKIK", ::org::orekit::propagation::events::FieldAdaptableInterval::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::events::handlers::FieldEventHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldAdaptableInterval::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::orekit::propagation::events::handlers::t_FieldEventHandler::parameters_))
          {
            INT_CALL(object = PythonFieldAbstractDetector(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldAbstractDetector_finalize(t_PythonFieldAbstractDetector *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAbstractDetector_pythonExtension(t_PythonFieldAbstractDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonFieldAbstractDetector_create0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jint a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractDetector::mids$[PythonFieldAbstractDetector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::FieldAbstractDetector value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(::org::orekit::propagation::events::FieldAdaptableInterval(a0));
          PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
          PyObject *o3 = ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(::org::orekit::propagation::events::handlers::FieldEventHandler(a3));
          PyObject *result = PyObject_CallMethod(obj, "create", "OOiO", o0, o1, (int) a2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAbstractDetector::initializeClass, &value))
          {
            throwTypeError("create", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonFieldAbstractDetector_g1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractDetector::mids$[PythonFieldAbstractDetector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "g", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("g", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonFieldAbstractDetector_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractDetector::mids$[PythonFieldAbstractDetector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAbstractDetector::mids$[PythonFieldAbstractDetector::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldAbstractDetector_get__self(t_PythonFieldAbstractDetector *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
        static PyObject *t_PythonFieldAbstractDetector_get__parameters_(t_PythonFieldAbstractDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
