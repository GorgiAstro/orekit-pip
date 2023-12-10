#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/HarmonicOscillator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *HarmonicOscillator::class$ = NULL;
        jmethodID *HarmonicOscillator::mids$ = NULL;
        bool HarmonicOscillator::live$ = false;

        jclass HarmonicOscillator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/HarmonicOscillator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HarmonicOscillator::HarmonicOscillator(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        jdouble HarmonicOscillator::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative HarmonicOscillator::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/function/HarmonicOscillator$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_HarmonicOscillator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HarmonicOscillator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HarmonicOscillator_init_(t_HarmonicOscillator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HarmonicOscillator_value(t_HarmonicOscillator *self, PyObject *args);

        static PyMethodDef t_HarmonicOscillator__methods_[] = {
          DECLARE_METHOD(t_HarmonicOscillator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicOscillator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicOscillator, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HarmonicOscillator)[] = {
          { Py_tp_methods, t_HarmonicOscillator__methods_ },
          { Py_tp_init, (void *) t_HarmonicOscillator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HarmonicOscillator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HarmonicOscillator, t_HarmonicOscillator, HarmonicOscillator);

        void t_HarmonicOscillator::install(PyObject *module)
        {
          installType(&PY_TYPE(HarmonicOscillator), &PY_TYPE_DEF(HarmonicOscillator), module, "HarmonicOscillator", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator), "Parametric", make_descriptor(&PY_TYPE_DEF(HarmonicOscillator$Parametric)));
        }

        void t_HarmonicOscillator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator), "class_", make_descriptor(HarmonicOscillator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator), "wrapfn_", make_descriptor(t_HarmonicOscillator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HarmonicOscillator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HarmonicOscillator::initializeClass, 1)))
            return NULL;
          return t_HarmonicOscillator::wrap_Object(HarmonicOscillator(((t_HarmonicOscillator *) arg)->object.this$));
        }
        static PyObject *t_HarmonicOscillator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HarmonicOscillator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HarmonicOscillator_init_(t_HarmonicOscillator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          HarmonicOscillator object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = HarmonicOscillator(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HarmonicOscillator_value(t_HarmonicOscillator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/Oem.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *Oem::class$ = NULL;
              jmethodID *Oem::mids$ = NULL;
              bool Oem::live$ = false;
              ::java::lang::String *Oem::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Oem::ROOT = NULL;

              jclass Oem::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/Oem");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_2b261aaf5054b0fb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;D)V");
                  mids$[mid_checkTimeSystems_0fa09c18fee449d5] = env->getMethodID(cls, "checkTimeSystems", "()V");
                  mids$[mid_getSatellites_6f5a75ccd8c04465] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Oem::Oem(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3, jdouble a4) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_2b261aaf5054b0fb, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              void Oem::checkTimeSystems() const
              {
                env->callVoidMethod(this$, mids$[mid_checkTimeSystems_0fa09c18fee449d5]);
              }

              ::java::util::Map Oem::getSatellites() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_6f5a75ccd8c04465]));
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
            namespace oem {
              static PyObject *t_Oem_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Oem_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Oem_of_(t_Oem *self, PyObject *args);
              static int t_Oem_init_(t_Oem *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Oem_checkTimeSystems(t_Oem *self);
              static PyObject *t_Oem_getSatellites(t_Oem *self);
              static PyObject *t_Oem_get__satellites(t_Oem *self, void *data);
              static PyObject *t_Oem_get__parameters_(t_Oem *self, void *data);
              static PyGetSetDef t_Oem__fields_[] = {
                DECLARE_GET_FIELD(t_Oem, satellites),
                DECLARE_GET_FIELD(t_Oem, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Oem__methods_[] = {
                DECLARE_METHOD(t_Oem, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Oem, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Oem, of_, METH_VARARGS),
                DECLARE_METHOD(t_Oem, checkTimeSystems, METH_NOARGS),
                DECLARE_METHOD(t_Oem, getSatellites, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Oem)[] = {
                { Py_tp_methods, t_Oem__methods_ },
                { Py_tp_init, (void *) t_Oem_init_ },
                { Py_tp_getset, t_Oem__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Oem)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Oem, t_Oem, Oem);
              PyObject *t_Oem::wrap_Object(const Oem& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Oem::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Oem *self = (t_Oem *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Oem::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Oem::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Oem *self = (t_Oem *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Oem::install(PyObject *module)
              {
                installType(&PY_TYPE(Oem), &PY_TYPE_DEF(Oem), module, "Oem", 0);
              }

              void t_Oem::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "class_", make_descriptor(Oem::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "wrapfn_", make_descriptor(t_Oem::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "boxfn_", make_descriptor(boxObject));
                env->getClass(Oem::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Oem::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "ROOT", make_descriptor(j2p(*Oem::ROOT)));
              }

              static PyObject *t_Oem_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Oem::initializeClass, 1)))
                  return NULL;
                return t_Oem::wrap_Object(Oem(((t_Oem *) arg)->object.this$));
              }
              static PyObject *t_Oem_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Oem::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Oem_of_(t_Oem *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Oem_init_(t_Oem *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                jdouble a4;
                Oem object((jobject) NULL);

                if (!parseArgs(args, "kKKkD", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3, &a4))
                {
                  INT_CALL(object = Oem(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemSegment);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Oem_checkTimeSystems(t_Oem *self)
              {
                OBJ_CALL(self->object.checkTimeSystems());
                Py_RETURN_NONE;
              }

              static PyObject *t_Oem_getSatellites(t_Oem *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemSatelliteEphemeris));
              }
              static PyObject *t_Oem_get__parameters_(t_Oem *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Oem_get__satellites(t_Oem *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemMetadata::class$ = NULL;
              jmethodID *OemMetadata::mids$ = NULL;
              bool OemMetadata::live$ = false;

              jclass OemMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
                  mids$[mid_getInterpolationDegree_570ce0828f81a2c1] = env->getMethodID(cls, "getInterpolationDegree", "()I");
                  mids$[mid_getInterpolationMethod_94ea91241555a59e] = env->getMethodID(cls, "getInterpolationMethod", "()Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;");
                  mids$[mid_getStartTime_85703d13e302437e] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStopTime_85703d13e302437e] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStartTime_85703d13e302437e] = env->getMethodID(cls, "getUseableStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStopTime_85703d13e302437e] = env->getMethodID(cls, "getUseableStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_setInterpolationDegree_99803b0791f320ff] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");
                  mids$[mid_setInterpolationMethod_f05dcf712ccb2c7b] = env->getMethodID(cls, "setInterpolationMethod", "(Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;)V");
                  mids$[mid_setStartTime_600a2a61652bc473] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setStopTime_600a2a61652bc473] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStartTime_600a2a61652bc473] = env->getMethodID(cls, "setUseableStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStopTime_600a2a61652bc473] = env->getMethodID(cls, "setUseableStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemMetadata::OemMetadata(jint a0) : ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

              jint OemMetadata::getInterpolationDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_570ce0828f81a2c1]);
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod OemMetadata::getInterpolationMethod() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_94ea91241555a59e]));
              }

              ::org::orekit::time::AbsoluteDate OemMetadata::getStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate OemMetadata::getStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate OemMetadata::getUseableStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStartTime_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate OemMetadata::getUseableStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStopTime_85703d13e302437e]));
              }

              void OemMetadata::setInterpolationDegree(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_99803b0791f320ff], a0);
              }

              void OemMetadata::setInterpolationMethod(const ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationMethod_f05dcf712ccb2c7b], a0.this$);
              }

              void OemMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStartTime_600a2a61652bc473], a0.this$);
              }

              void OemMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStopTime_600a2a61652bc473], a0.this$);
              }

              void OemMetadata::setUseableStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStartTime_600a2a61652bc473], a0.this$);
              }

              void OemMetadata::setUseableStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStopTime_600a2a61652bc473], a0.this$);
              }

              void OemMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
            namespace oem {
              static PyObject *t_OemMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OemMetadata_init_(t_OemMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemMetadata_getInterpolationDegree(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getInterpolationMethod(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getStartTime(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getStopTime(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getUseableStartTime(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getUseableStopTime(t_OemMetadata *self);
              static PyObject *t_OemMetadata_setInterpolationDegree(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setInterpolationMethod(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setStartTime(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setStopTime(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setUseableStartTime(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setUseableStopTime(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_validate(t_OemMetadata *self, PyObject *args);
              static PyObject *t_OemMetadata_get__interpolationDegree(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__interpolationDegree(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__interpolationMethod(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__interpolationMethod(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__startTime(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__startTime(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__stopTime(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__stopTime(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__useableStartTime(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__useableStartTime(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__useableStopTime(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__useableStopTime(t_OemMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OemMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OemMetadata, interpolationDegree),
                DECLARE_GETSET_FIELD(t_OemMetadata, interpolationMethod),
                DECLARE_GETSET_FIELD(t_OemMetadata, startTime),
                DECLARE_GETSET_FIELD(t_OemMetadata, stopTime),
                DECLARE_GETSET_FIELD(t_OemMetadata, useableStartTime),
                DECLARE_GETSET_FIELD(t_OemMetadata, useableStopTime),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemMetadata__methods_[] = {
                DECLARE_METHOD(t_OemMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemMetadata, getInterpolationDegree, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getStartTime, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getStopTime, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getUseableStartTime, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getUseableStopTime, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, setInterpolationDegree, METH_O),
                DECLARE_METHOD(t_OemMetadata, setInterpolationMethod, METH_O),
                DECLARE_METHOD(t_OemMetadata, setStartTime, METH_O),
                DECLARE_METHOD(t_OemMetadata, setStopTime, METH_O),
                DECLARE_METHOD(t_OemMetadata, setUseableStartTime, METH_O),
                DECLARE_METHOD(t_OemMetadata, setUseableStopTime, METH_O),
                DECLARE_METHOD(t_OemMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemMetadata)[] = {
                { Py_tp_methods, t_OemMetadata__methods_ },
                { Py_tp_init, (void *) t_OemMetadata_init_ },
                { Py_tp_getset, t_OemMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata),
                NULL
              };

              DEFINE_TYPE(OemMetadata, t_OemMetadata, OemMetadata);

              void t_OemMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OemMetadata), &PY_TYPE_DEF(OemMetadata), module, "OemMetadata", 0);
              }

              void t_OemMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadata), "class_", make_descriptor(OemMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadata), "wrapfn_", make_descriptor(t_OemMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemMetadata::initializeClass, 1)))
                  return NULL;
                return t_OemMetadata::wrap_Object(OemMetadata(((t_OemMetadata *) arg)->object.this$));
              }
              static PyObject *t_OemMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OemMetadata_init_(t_OemMetadata *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                OemMetadata object((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  INT_CALL(object = OemMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OemMetadata_getInterpolationDegree(t_OemMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OemMetadata_getInterpolationMethod(t_OemMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_getStartTime(t_OemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_getStopTime(t_OemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_getUseableStartTime(t_OemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_getUseableStopTime(t_OemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_setInterpolationDegree(t_OemMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setInterpolationDegree(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationDegree", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setInterpolationMethod(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::parameters_))
                {
                  OBJ_CALL(self->object.setInterpolationMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationMethod", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setStartTime(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setStartTime", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setStopTime(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setStopTime", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setUseableStartTime(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStartTime", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setUseableStopTime(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStopTime", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_validate(t_OemMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OemMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OemMetadata_get__interpolationDegree(t_OemMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) value);
              }
              static int t_OemMetadata_set__interpolationDegree(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setInterpolationDegree(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationDegree", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__interpolationMethod(t_OemMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(value);
              }
              static int t_OemMetadata_set__interpolationMethod(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::initializeClass, &value))
                  {
                    INT_CALL(self->object.setInterpolationMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationMethod", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__startTime(t_OemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OemMetadata_set__startTime(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "startTime", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__stopTime(t_OemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OemMetadata_set__stopTime(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "stopTime", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__useableStartTime(t_OemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OemMetadata_set__useableStartTime(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStartTime", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__useableStopTime(t_OemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OemMetadata_set__useableStopTime(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStopTime", arg);
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
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *AdditionalDerivativesProvider::class$ = NULL;
        jmethodID *AdditionalDerivativesProvider::mids$ = NULL;
        bool AdditionalDerivativesProvider::live$ = false;

        jclass AdditionalDerivativesProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/AdditionalDerivativesProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_combinedDerivatives_4fc0958a0539e1d3] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
            mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_yields_680f8463a473c3cb] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::integration::CombinedDerivatives AdditionalDerivativesProvider::combinedDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::integration::CombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_4fc0958a0539e1d3], a0.this$));
        }

        jint AdditionalDerivativesProvider::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
        }

        ::java::lang::String AdditionalDerivativesProvider::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
        }

        void AdditionalDerivativesProvider::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
        }

        jboolean AdditionalDerivativesProvider::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_yields_680f8463a473c3cb], a0.this$);
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
      namespace integration {
        static PyObject *t_AdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdditionalDerivativesProvider_combinedDerivatives(t_AdditionalDerivativesProvider *self, PyObject *arg);
        static PyObject *t_AdditionalDerivativesProvider_getDimension(t_AdditionalDerivativesProvider *self);
        static PyObject *t_AdditionalDerivativesProvider_getName(t_AdditionalDerivativesProvider *self);
        static PyObject *t_AdditionalDerivativesProvider_init(t_AdditionalDerivativesProvider *self, PyObject *args);
        static PyObject *t_AdditionalDerivativesProvider_yields(t_AdditionalDerivativesProvider *self, PyObject *arg);
        static PyObject *t_AdditionalDerivativesProvider_get__dimension(t_AdditionalDerivativesProvider *self, void *data);
        static PyObject *t_AdditionalDerivativesProvider_get__name(t_AdditionalDerivativesProvider *self, void *data);
        static PyGetSetDef t_AdditionalDerivativesProvider__fields_[] = {
          DECLARE_GET_FIELD(t_AdditionalDerivativesProvider, dimension),
          DECLARE_GET_FIELD(t_AdditionalDerivativesProvider, name),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdditionalDerivativesProvider__methods_[] = {
          DECLARE_METHOD(t_AdditionalDerivativesProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, combinedDerivatives, METH_O),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, getName, METH_NOARGS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, init, METH_VARARGS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, yields, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdditionalDerivativesProvider)[] = {
          { Py_tp_methods, t_AdditionalDerivativesProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AdditionalDerivativesProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdditionalDerivativesProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdditionalDerivativesProvider, t_AdditionalDerivativesProvider, AdditionalDerivativesProvider);

        void t_AdditionalDerivativesProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(AdditionalDerivativesProvider), &PY_TYPE_DEF(AdditionalDerivativesProvider), module, "AdditionalDerivativesProvider", 0);
        }

        void t_AdditionalDerivativesProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalDerivativesProvider), "class_", make_descriptor(AdditionalDerivativesProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalDerivativesProvider), "wrapfn_", make_descriptor(t_AdditionalDerivativesProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalDerivativesProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdditionalDerivativesProvider::initializeClass, 1)))
            return NULL;
          return t_AdditionalDerivativesProvider::wrap_Object(AdditionalDerivativesProvider(((t_AdditionalDerivativesProvider *) arg)->object.this$));
        }
        static PyObject *t_AdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdditionalDerivativesProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdditionalDerivativesProvider_combinedDerivatives(t_AdditionalDerivativesProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::integration::CombinedDerivatives result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.combinedDerivatives(a0));
            return ::org::orekit::propagation::integration::t_CombinedDerivatives::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
          return NULL;
        }

        static PyObject *t_AdditionalDerivativesProvider_getDimension(t_AdditionalDerivativesProvider *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AdditionalDerivativesProvider_getName(t_AdditionalDerivativesProvider *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_AdditionalDerivativesProvider_init(t_AdditionalDerivativesProvider *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_AdditionalDerivativesProvider_yields(t_AdditionalDerivativesProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.yields(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "yields", arg);
          return NULL;
        }

        static PyObject *t_AdditionalDerivativesProvider_get__dimension(t_AdditionalDerivativesProvider *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AdditionalDerivativesProvider_get__name(t_AdditionalDerivativesProvider *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/ODEFixedStepHandler.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *ODEFixedStepHandler::class$ = NULL;
        jmethodID *ODEFixedStepHandler::mids$ = NULL;
        bool ODEFixedStepHandler::live$ = false;

        jclass ODEFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/ODEFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_handleStep_550f31efce8796c0] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Z)V");
            mids$[mid_init_5aaadc62bce8a394] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ODEFixedStepHandler::handleStep(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jboolean a1) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_550f31efce8796c0], a0.this$, a1);
        }

        void ODEFixedStepHandler::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_5aaadc62bce8a394], a0.this$, a1);
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
        static PyObject *t_ODEFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEFixedStepHandler_handleStep(t_ODEFixedStepHandler *self, PyObject *args);
        static PyObject *t_ODEFixedStepHandler_init(t_ODEFixedStepHandler *self, PyObject *args);

        static PyMethodDef t_ODEFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_ODEFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEFixedStepHandler, handleStep, METH_VARARGS),
          DECLARE_METHOD(t_ODEFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEFixedStepHandler)[] = {
          { Py_tp_methods, t_ODEFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEFixedStepHandler, t_ODEFixedStepHandler, ODEFixedStepHandler);

        void t_ODEFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEFixedStepHandler), &PY_TYPE_DEF(ODEFixedStepHandler), module, "ODEFixedStepHandler", 0);
        }

        void t_ODEFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEFixedStepHandler), "class_", make_descriptor(ODEFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEFixedStepHandler), "wrapfn_", make_descriptor(t_ODEFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_ODEFixedStepHandler::wrap_Object(ODEFixedStepHandler(((t_ODEFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_ODEFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEFixedStepHandler_handleStep(t_ODEFixedStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jboolean a1;

          if (!parseArgs(args, "kZ", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.handleStep(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", args);
          return NULL;
        }

        static PyObject *t_ODEFixedStepHandler_init(t_ODEFixedStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {

    ::java::lang::Class *FieldElement::class$ = NULL;
    jmethodID *FieldElement::mids$ = NULL;
    bool FieldElement::live$ = false;

    jclass FieldElement::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("org/hipparchus/FieldElement");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_013225ac340b432a] = env->getMethodID(cls, "add", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_divide_013225ac340b432a] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
        mids$[mid_getReal_dff5885c2c873297] = env->getMethodID(cls, "getReal", "()D");
        mids$[mid_isZero_b108b35ef48e27bd] = env->getMethodID(cls, "isZero", "()Z");
        mids$[mid_multiply_ffcdb6600dc6671a] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/FieldElement;");
        mids$[mid_multiply_013225ac340b432a] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_negate_99097cb60cf2d774] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_reciprocal_99097cb60cf2d774] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_subtract_013225ac340b432a] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FieldElement FieldElement::add(const FieldElement & a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_add_013225ac340b432a], a0.this$));
    }

    FieldElement FieldElement::divide(const FieldElement & a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_divide_013225ac340b432a], a0.this$));
    }

    ::org::hipparchus::Field FieldElement::getField() const
    {
      return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
    }

    jdouble FieldElement::getReal() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getReal_dff5885c2c873297]);
    }

    jboolean FieldElement::isZero() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isZero_b108b35ef48e27bd]);
    }

    FieldElement FieldElement::multiply(jint a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_multiply_ffcdb6600dc6671a], a0));
    }

    FieldElement FieldElement::multiply(const FieldElement & a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_multiply_013225ac340b432a], a0.this$));
    }

    FieldElement FieldElement::negate() const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_negate_99097cb60cf2d774]));
    }

    FieldElement FieldElement::reciprocal() const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_reciprocal_99097cb60cf2d774]));
    }

    FieldElement FieldElement::subtract(const FieldElement & a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_subtract_013225ac340b432a], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    static PyObject *t_FieldElement_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FieldElement_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FieldElement_of_(t_FieldElement *self, PyObject *args);
    static PyObject *t_FieldElement_add(t_FieldElement *self, PyObject *arg);
    static PyObject *t_FieldElement_divide(t_FieldElement *self, PyObject *arg);
    static PyObject *t_FieldElement_getField(t_FieldElement *self);
    static PyObject *t_FieldElement_getReal(t_FieldElement *self);
    static PyObject *t_FieldElement_isZero(t_FieldElement *self);
    static PyObject *t_FieldElement_multiply(t_FieldElement *self, PyObject *args);
    static PyObject *t_FieldElement_negate(t_FieldElement *self);
    static PyObject *t_FieldElement_reciprocal(t_FieldElement *self);
    static PyObject *t_FieldElement_subtract(t_FieldElement *self, PyObject *arg);
    static PyObject *t_FieldElement_get__field(t_FieldElement *self, void *data);
    static PyObject *t_FieldElement_get__real(t_FieldElement *self, void *data);
    static PyObject *t_FieldElement_get__zero(t_FieldElement *self, void *data);
    static PyObject *t_FieldElement_get__parameters_(t_FieldElement *self, void *data);
    static PyGetSetDef t_FieldElement__fields_[] = {
      DECLARE_GET_FIELD(t_FieldElement, field),
      DECLARE_GET_FIELD(t_FieldElement, real),
      DECLARE_GET_FIELD(t_FieldElement, zero),
      DECLARE_GET_FIELD(t_FieldElement, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_FieldElement__methods_[] = {
      DECLARE_METHOD(t_FieldElement, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FieldElement, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FieldElement, of_, METH_VARARGS),
      DECLARE_METHOD(t_FieldElement, add, METH_O),
      DECLARE_METHOD(t_FieldElement, divide, METH_O),
      DECLARE_METHOD(t_FieldElement, getField, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, getReal, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, isZero, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, multiply, METH_VARARGS),
      DECLARE_METHOD(t_FieldElement, negate, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, reciprocal, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, subtract, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FieldElement)[] = {
      { Py_tp_methods, t_FieldElement__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_FieldElement__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FieldElement)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(FieldElement, t_FieldElement, FieldElement);
    PyObject *t_FieldElement::wrap_Object(const FieldElement& object, PyTypeObject *p0)
    {
      PyObject *obj = t_FieldElement::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_FieldElement *self = (t_FieldElement *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_FieldElement::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_FieldElement::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_FieldElement *self = (t_FieldElement *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_FieldElement::install(PyObject *module)
    {
      installType(&PY_TYPE(FieldElement), &PY_TYPE_DEF(FieldElement), module, "FieldElement", 0);
    }

    void t_FieldElement::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElement), "class_", make_descriptor(FieldElement::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElement), "wrapfn_", make_descriptor(t_FieldElement::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElement), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FieldElement_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FieldElement::initializeClass, 1)))
        return NULL;
      return t_FieldElement::wrap_Object(FieldElement(((t_FieldElement *) arg)->object.this$));
    }
    static PyObject *t_FieldElement_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FieldElement::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_FieldElement_of_(t_FieldElement *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_FieldElement_add(t_FieldElement *self, PyObject *arg)
    {
      FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", FieldElement::initializeClass, &a0, &p0, t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.add(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "add", arg);
      return NULL;
    }

    static PyObject *t_FieldElement_divide(t_FieldElement *self, PyObject *arg)
    {
      FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", FieldElement::initializeClass, &a0, &p0, t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.divide(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "divide", arg);
      return NULL;
    }

    static PyObject *t_FieldElement_getField(t_FieldElement *self)
    {
      ::org::hipparchus::Field result((jobject) NULL);
      OBJ_CALL(result = self->object.getField());
      return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_FieldElement_getReal(t_FieldElement *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getReal());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_FieldElement_isZero(t_FieldElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isZero());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_FieldElement_multiply(t_FieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          FieldElement result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.multiply(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
          }
        }
        {
          FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          FieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", FieldElement::initializeClass, &a0, &p0, t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.multiply(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "multiply", args);
      return NULL;
    }

    static PyObject *t_FieldElement_negate(t_FieldElement *self)
    {
      FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.negate());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_FieldElement_reciprocal(t_FieldElement *self)
    {
      FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.reciprocal());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_FieldElement_subtract(t_FieldElement *self, PyObject *arg)
    {
      FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", FieldElement::initializeClass, &a0, &p0, t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.subtract(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "subtract", arg);
      return NULL;
    }
    static PyObject *t_FieldElement_get__parameters_(t_FieldElement *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_FieldElement_get__field(t_FieldElement *self, void *data)
    {
      ::org::hipparchus::Field value((jobject) NULL);
      OBJ_CALL(value = self->object.getField());
      return ::org::hipparchus::t_Field::wrap_Object(value);
    }

    static PyObject *t_FieldElement_get__real(t_FieldElement *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getReal());
      return PyFloat_FromDouble((double) value);
    }

    static PyObject *t_FieldElement_get__zero(t_FieldElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isZero());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonEventDetectorsProvider.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonEventDetectorsProvider::class$ = NULL;
        jmethodID *PythonEventDetectorsProvider::mids$ = NULL;
        bool PythonEventDetectorsProvider::live$ = false;

        jclass PythonEventDetectorsProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonEventDetectorsProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getEventDetectors_20f6d2b462aaef4b] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_361313cd1a9c693a] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEventDetectorsProvider::PythonEventDetectorsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonEventDetectorsProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonEventDetectorsProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonEventDetectorsProvider::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        static PyObject *t_PythonEventDetectorsProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEventDetectorsProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEventDetectorsProvider_init_(t_PythonEventDetectorsProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEventDetectorsProvider_finalize(t_PythonEventDetectorsProvider *self);
        static PyObject *t_PythonEventDetectorsProvider_pythonExtension(t_PythonEventDetectorsProvider *self, PyObject *args);
        static jobject JNICALL t_PythonEventDetectorsProvider_getEventDetectors0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEventDetectorsProvider_getFieldEventDetectors1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonEventDetectorsProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEventDetectorsProvider_get__self(t_PythonEventDetectorsProvider *self, void *data);
        static PyGetSetDef t_PythonEventDetectorsProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEventDetectorsProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEventDetectorsProvider__methods_[] = {
          DECLARE_METHOD(t_PythonEventDetectorsProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEventDetectorsProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEventDetectorsProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEventDetectorsProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEventDetectorsProvider)[] = {
          { Py_tp_methods, t_PythonEventDetectorsProvider__methods_ },
          { Py_tp_init, (void *) t_PythonEventDetectorsProvider_init_ },
          { Py_tp_getset, t_PythonEventDetectorsProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEventDetectorsProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEventDetectorsProvider, t_PythonEventDetectorsProvider, PythonEventDetectorsProvider);

        void t_PythonEventDetectorsProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEventDetectorsProvider), &PY_TYPE_DEF(PythonEventDetectorsProvider), module, "PythonEventDetectorsProvider", 1);
        }

        void t_PythonEventDetectorsProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetectorsProvider), "class_", make_descriptor(PythonEventDetectorsProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetectorsProvider), "wrapfn_", make_descriptor(t_PythonEventDetectorsProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetectorsProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEventDetectorsProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getEventDetectors", "()Ljava/util/stream/Stream;", (void *) t_PythonEventDetectorsProvider_getEventDetectors0 },
            { "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;", (void *) t_PythonEventDetectorsProvider_getFieldEventDetectors1 },
            { "pythonDecRef", "()V", (void *) t_PythonEventDetectorsProvider_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonEventDetectorsProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEventDetectorsProvider::initializeClass, 1)))
            return NULL;
          return t_PythonEventDetectorsProvider::wrap_Object(PythonEventDetectorsProvider(((t_PythonEventDetectorsProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonEventDetectorsProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEventDetectorsProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEventDetectorsProvider_init_(t_PythonEventDetectorsProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonEventDetectorsProvider object((jobject) NULL);

          INT_CALL(object = PythonEventDetectorsProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEventDetectorsProvider_finalize(t_PythonEventDetectorsProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEventDetectorsProvider_pythonExtension(t_PythonEventDetectorsProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonEventDetectorsProvider_getEventDetectors0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetectorsProvider::mids$[PythonEventDetectorsProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::stream::Stream value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEventDetectors", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
          {
            throwTypeError("getEventDetectors", result);
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

        static jobject JNICALL t_PythonEventDetectorsProvider_getFieldEventDetectors1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetectorsProvider::mids$[PythonEventDetectorsProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::stream::Stream value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *result = PyObject_CallMethod(obj, "getFieldEventDetectors", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
          {
            throwTypeError("getFieldEventDetectors", result);
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

        static void JNICALL t_PythonEventDetectorsProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetectorsProvider::mids$[PythonEventDetectorsProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEventDetectorsProvider::mids$[PythonEventDetectorsProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEventDetectorsProvider_get__self(t_PythonEventDetectorsProvider *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/multivariate/MultivariateNormalDistribution.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        ::java::lang::Class *MultivariateNormalDistribution::class$ = NULL;
        jmethodID *MultivariateNormalDistribution::mids$ = NULL;
        bool MultivariateNormalDistribution::live$ = false;

        jclass MultivariateNormalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/multivariate/MultivariateNormalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0942607a80e88c17] = env->getMethodID(cls, "<init>", "([D[[D)V");
            mids$[mid_init$_ed409df2c5d12b2b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;[D[[D)V");
            mids$[mid_init$_2eaf92124f7b956a] = env->getMethodID(cls, "<init>", "([D[[DD)V");
            mids$[mid_init$_c29aa22b4d243723] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;[D[[DD)V");
            mids$[mid_density_9dc1ec0bcc0a9a29] = env->getMethodID(cls, "density", "([D)D");
            mids$[mid_getCovariances_688b496048ff947b] = env->getMethodID(cls, "getCovariances", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getMeans_60c7040667a7dc5c] = env->getMethodID(cls, "getMeans", "()[D");
            mids$[mid_getSingularMatrixCheckTolerance_dff5885c2c873297] = env->getMethodID(cls, "getSingularMatrixCheckTolerance", "()D");
            mids$[mid_getStandardDeviations_60c7040667a7dc5c] = env->getMethodID(cls, "getStandardDeviations", "()[D");
            mids$[mid_sample_60c7040667a7dc5c] = env->getMethodID(cls, "sample", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultivariateNormalDistribution::MultivariateNormalDistribution(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_0942607a80e88c17, a0.this$, a1.this$)) {}

        MultivariateNormalDistribution::MultivariateNormalDistribution(const ::org::hipparchus::random::RandomGenerator & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ed409df2c5d12b2b, a0.this$, a1.this$, a2.this$)) {}

        MultivariateNormalDistribution::MultivariateNormalDistribution(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, jdouble a2) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_2eaf92124f7b956a, a0.this$, a1.this$, a2)) {}

        MultivariateNormalDistribution::MultivariateNormalDistribution(const ::org::hipparchus::random::RandomGenerator & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2, jdouble a3) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_c29aa22b4d243723, a0.this$, a1.this$, a2.this$, a3)) {}

        jdouble MultivariateNormalDistribution::density(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_9dc1ec0bcc0a9a29], a0.this$);
        }

        ::org::hipparchus::linear::RealMatrix MultivariateNormalDistribution::getCovariances() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariances_688b496048ff947b]));
        }

        JArray< jdouble > MultivariateNormalDistribution::getMeans() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeans_60c7040667a7dc5c]));
        }

        jdouble MultivariateNormalDistribution::getSingularMatrixCheckTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSingularMatrixCheckTolerance_dff5885c2c873297]);
        }

        JArray< jdouble > MultivariateNormalDistribution::getStandardDeviations() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStandardDeviations_60c7040667a7dc5c]));
        }

        JArray< jdouble > MultivariateNormalDistribution::sample() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_sample_60c7040667a7dc5c]));
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
    namespace distribution {
      namespace multivariate {
        static PyObject *t_MultivariateNormalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateNormalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultivariateNormalDistribution_init_(t_MultivariateNormalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultivariateNormalDistribution_density(t_MultivariateNormalDistribution *self, PyObject *args);
        static PyObject *t_MultivariateNormalDistribution_getCovariances(t_MultivariateNormalDistribution *self);
        static PyObject *t_MultivariateNormalDistribution_getMeans(t_MultivariateNormalDistribution *self);
        static PyObject *t_MultivariateNormalDistribution_getSingularMatrixCheckTolerance(t_MultivariateNormalDistribution *self);
        static PyObject *t_MultivariateNormalDistribution_getStandardDeviations(t_MultivariateNormalDistribution *self);
        static PyObject *t_MultivariateNormalDistribution_sample(t_MultivariateNormalDistribution *self, PyObject *args);
        static PyObject *t_MultivariateNormalDistribution_get__covariances(t_MultivariateNormalDistribution *self, void *data);
        static PyObject *t_MultivariateNormalDistribution_get__means(t_MultivariateNormalDistribution *self, void *data);
        static PyObject *t_MultivariateNormalDistribution_get__singularMatrixCheckTolerance(t_MultivariateNormalDistribution *self, void *data);
        static PyObject *t_MultivariateNormalDistribution_get__standardDeviations(t_MultivariateNormalDistribution *self, void *data);
        static PyGetSetDef t_MultivariateNormalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_MultivariateNormalDistribution, covariances),
          DECLARE_GET_FIELD(t_MultivariateNormalDistribution, means),
          DECLARE_GET_FIELD(t_MultivariateNormalDistribution, singularMatrixCheckTolerance),
          DECLARE_GET_FIELD(t_MultivariateNormalDistribution, standardDeviations),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultivariateNormalDistribution__methods_[] = {
          DECLARE_METHOD(t_MultivariateNormalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, getCovariances, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, getMeans, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, getSingularMatrixCheckTolerance, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, getStandardDeviations, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, sample, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateNormalDistribution)[] = {
          { Py_tp_methods, t_MultivariateNormalDistribution__methods_ },
          { Py_tp_init, (void *) t_MultivariateNormalDistribution_init_ },
          { Py_tp_getset, t_MultivariateNormalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateNormalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution),
          NULL
        };

        DEFINE_TYPE(MultivariateNormalDistribution, t_MultivariateNormalDistribution, MultivariateNormalDistribution);

        void t_MultivariateNormalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateNormalDistribution), &PY_TYPE_DEF(MultivariateNormalDistribution), module, "MultivariateNormalDistribution", 0);
        }

        void t_MultivariateNormalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalDistribution), "class_", make_descriptor(MultivariateNormalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalDistribution), "wrapfn_", make_descriptor(t_MultivariateNormalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateNormalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateNormalDistribution::initializeClass, 1)))
            return NULL;
          return t_MultivariateNormalDistribution::wrap_Object(MultivariateNormalDistribution(((t_MultivariateNormalDistribution *) arg)->object.this$));
        }
        static PyObject *t_MultivariateNormalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateNormalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultivariateNormalDistribution_init_(t_MultivariateNormalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              MultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D[[D", &a0, &a1))
              {
                INT_CALL(object = MultivariateNormalDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              MultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "k[D[[D", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = MultivariateNormalDistribution(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              jdouble a2;
              MultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D[[DD", &a0, &a1, &a2))
              {
                INT_CALL(object = MultivariateNormalDistribution(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              jdouble a3;
              MultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "k[D[[DD", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = MultivariateNormalDistribution(a0, a1, a2, a3));
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

        static PyObject *t_MultivariateNormalDistribution_density(t_MultivariateNormalDistribution *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(MultivariateNormalDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_MultivariateNormalDistribution_getCovariances(t_MultivariateNormalDistribution *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariances());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_MultivariateNormalDistribution_getMeans(t_MultivariateNormalDistribution *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeans());
          return result.wrap();
        }

        static PyObject *t_MultivariateNormalDistribution_getSingularMatrixCheckTolerance(t_MultivariateNormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSingularMatrixCheckTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MultivariateNormalDistribution_getStandardDeviations(t_MultivariateNormalDistribution *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStandardDeviations());
          return result.wrap();
        }

        static PyObject *t_MultivariateNormalDistribution_sample(t_MultivariateNormalDistribution *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sample());
            return result.wrap();
          }

          return callSuper(PY_TYPE(MultivariateNormalDistribution), (PyObject *) self, "sample", args, 2);
        }

        static PyObject *t_MultivariateNormalDistribution_get__covariances(t_MultivariateNormalDistribution *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariances());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_MultivariateNormalDistribution_get__means(t_MultivariateNormalDistribution *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeans());
          return value.wrap();
        }

        static PyObject *t_MultivariateNormalDistribution_get__singularMatrixCheckTolerance(t_MultivariateNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSingularMatrixCheckTolerance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_MultivariateNormalDistribution_get__standardDeviations(t_MultivariateNormalDistribution *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStandardDeviations());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Data.h"
#include "org/orekit/gnss/metric/messages/common/CodeBias.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm05Data::class$ = NULL;
              jmethodID *SsrIgm05Data::mids$ = NULL;
              bool SsrIgm05Data::live$ = false;

              jclass SsrIgm05Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addCodeBias_9c9697fec23db7de] = env->getMethodID(cls, "addCodeBias", "(Lorg/orekit/gnss/metric/messages/common/CodeBias;)V");
                  mids$[mid_getCodeBias_017463b439db258e] = env->getMethodID(cls, "getCodeBias", "(I)Lorg/orekit/gnss/metric/messages/common/CodeBias;");
                  mids$[mid_getCodeBiases_6f5a75ccd8c04465] = env->getMethodID(cls, "getCodeBiases", "()Ljava/util/Map;");
                  mids$[mid_getNumberOfBiasesProcessed_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfBiasesProcessed", "()I");
                  mids$[mid_setNumberOfBiasesProcessed_99803b0791f320ff] = env->getMethodID(cls, "setNumberOfBiasesProcessed", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm05Data::SsrIgm05Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              void SsrIgm05Data::addCodeBias(const ::org::orekit::gnss::metric::messages::common::CodeBias & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addCodeBias_9c9697fec23db7de], a0.this$);
              }

              ::org::orekit::gnss::metric::messages::common::CodeBias SsrIgm05Data::getCodeBias(jint a0) const
              {
                return ::org::orekit::gnss::metric::messages::common::CodeBias(env->callObjectMethod(this$, mids$[mid_getCodeBias_017463b439db258e], a0));
              }

              ::java::util::Map SsrIgm05Data::getCodeBiases() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getCodeBiases_6f5a75ccd8c04465]));
              }

              jint SsrIgm05Data::getNumberOfBiasesProcessed() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfBiasesProcessed_570ce0828f81a2c1]);
              }

              void SsrIgm05Data::setNumberOfBiasesProcessed(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfBiasesProcessed_99803b0791f320ff], a0);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm05Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm05Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm05Data_init_(t_SsrIgm05Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm05Data_addCodeBias(t_SsrIgm05Data *self, PyObject *arg);
              static PyObject *t_SsrIgm05Data_getCodeBias(t_SsrIgm05Data *self, PyObject *arg);
              static PyObject *t_SsrIgm05Data_getCodeBiases(t_SsrIgm05Data *self);
              static PyObject *t_SsrIgm05Data_getNumberOfBiasesProcessed(t_SsrIgm05Data *self);
              static PyObject *t_SsrIgm05Data_setNumberOfBiasesProcessed(t_SsrIgm05Data *self, PyObject *arg);
              static PyObject *t_SsrIgm05Data_get__codeBiases(t_SsrIgm05Data *self, void *data);
              static PyObject *t_SsrIgm05Data_get__numberOfBiasesProcessed(t_SsrIgm05Data *self, void *data);
              static int t_SsrIgm05Data_set__numberOfBiasesProcessed(t_SsrIgm05Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm05Data__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm05Data, codeBiases),
                DECLARE_GETSET_FIELD(t_SsrIgm05Data, numberOfBiasesProcessed),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm05Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm05Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05Data, addCodeBias, METH_O),
                DECLARE_METHOD(t_SsrIgm05Data, getCodeBias, METH_O),
                DECLARE_METHOD(t_SsrIgm05Data, getCodeBiases, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm05Data, getNumberOfBiasesProcessed, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm05Data, setNumberOfBiasesProcessed, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm05Data)[] = {
                { Py_tp_methods, t_SsrIgm05Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm05Data_init_ },
                { Py_tp_getset, t_SsrIgm05Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm05Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm05Data, t_SsrIgm05Data, SsrIgm05Data);

              void t_SsrIgm05Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm05Data), &PY_TYPE_DEF(SsrIgm05Data), module, "SsrIgm05Data", 0);
              }

              void t_SsrIgm05Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Data), "class_", make_descriptor(SsrIgm05Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Data), "wrapfn_", make_descriptor(t_SsrIgm05Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm05Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm05Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm05Data::wrap_Object(SsrIgm05Data(((t_SsrIgm05Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm05Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm05Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm05Data_init_(t_SsrIgm05Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm05Data object((jobject) NULL);

                INT_CALL(object = SsrIgm05Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm05Data_addCodeBias(t_SsrIgm05Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::CodeBias a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::CodeBias::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addCodeBias(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addCodeBias", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm05Data_getCodeBias(t_SsrIgm05Data *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::common::CodeBias result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getCodeBias(a0));
                  return ::org::orekit::gnss::metric::messages::common::t_CodeBias::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getCodeBias", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm05Data_getCodeBiases(t_SsrIgm05Data *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getCodeBiases());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::org::orekit::gnss::metric::messages::common::PY_TYPE(CodeBias));
              }

              static PyObject *t_SsrIgm05Data_getNumberOfBiasesProcessed(t_SsrIgm05Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfBiasesProcessed());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm05Data_setNumberOfBiasesProcessed(t_SsrIgm05Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfBiasesProcessed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfBiasesProcessed", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm05Data_get__codeBiases(t_SsrIgm05Data *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getCodeBiases());
                return ::java::util::t_Map::wrap_Object(value);
              }

              static PyObject *t_SsrIgm05Data_get__numberOfBiasesProcessed(t_SsrIgm05Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfBiasesProcessed());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm05Data_set__numberOfBiasesProcessed(t_SsrIgm05Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfBiasesProcessed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfBiasesProcessed", arg);
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
#include "org/orekit/utils/ConstantPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ConstantPVCoordinatesProvider::class$ = NULL;
      jmethodID *ConstantPVCoordinatesProvider::mids$ = NULL;
      bool ConstantPVCoordinatesProvider::live$ = false;

      jclass ConstantPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ConstantPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_daec801f3b74e98f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_init$_5cacd6aaf020b118] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_233a3bb131db24ed] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getPVCoordinates_cfeec55f7c63ec64] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_41a826780212dfea] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ConstantPVCoordinatesProvider::ConstantPVCoordinatesProvider(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_daec801f3b74e98f, a0.this$, a1.this$)) {}

      ConstantPVCoordinatesProvider::ConstantPVCoordinatesProvider(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5cacd6aaf020b118, a0.this$, a1.this$)) {}

      ConstantPVCoordinatesProvider::ConstantPVCoordinatesProvider(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_233a3bb131db24ed, a0.this$, a1.this$)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates ConstantPVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_cfeec55f7c63ec64], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantPVCoordinatesProvider::getPosition(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_41a826780212dfea], a0.this$, a1.this$));
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
      static PyObject *t_ConstantPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConstantPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ConstantPVCoordinatesProvider_init_(t_ConstantPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ConstantPVCoordinatesProvider_getPVCoordinates(t_ConstantPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_ConstantPVCoordinatesProvider_getPosition(t_ConstantPVCoordinatesProvider *self, PyObject *args);

      static PyMethodDef t_ConstantPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_ConstantPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConstantPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConstantPVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_ConstantPVCoordinatesProvider, getPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConstantPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_ConstantPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_ConstantPVCoordinatesProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConstantPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ConstantPVCoordinatesProvider, t_ConstantPVCoordinatesProvider, ConstantPVCoordinatesProvider);

      void t_ConstantPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ConstantPVCoordinatesProvider), &PY_TYPE_DEF(ConstantPVCoordinatesProvider), module, "ConstantPVCoordinatesProvider", 0);
      }

      void t_ConstantPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantPVCoordinatesProvider), "class_", make_descriptor(ConstantPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantPVCoordinatesProvider), "wrapfn_", make_descriptor(t_ConstantPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ConstantPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConstantPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_ConstantPVCoordinatesProvider::wrap_Object(ConstantPVCoordinatesProvider(((t_ConstantPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_ConstantPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConstantPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ConstantPVCoordinatesProvider_init_(t_ConstantPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
            ConstantPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ConstantPVCoordinatesProvider(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ConstantPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ConstantPVCoordinatesProvider(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ConstantPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ConstantPVCoordinatesProvider(a0, a1));
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

      static PyObject *t_ConstantPVCoordinatesProvider_getPVCoordinates(t_ConstantPVCoordinatesProvider *self, PyObject *args)
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

      static PyObject *t_ConstantPVCoordinatesProvider_getPosition(t_ConstantPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/StepFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *StepFunction::class$ = NULL;
        jmethodID *StepFunction::mids$ = NULL;
        bool StepFunction::live$ = false;

        jclass StepFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/StepFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e1f4b15468f5564a] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepFunction::StepFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1f4b15468f5564a, a0.this$, a1.this$)) {}

        jdouble StepFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
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
    namespace analysis {
      namespace function {
        static PyObject *t_StepFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepFunction_init_(t_StepFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepFunction_value(t_StepFunction *self, PyObject *arg);

        static PyMethodDef t_StepFunction__methods_[] = {
          DECLARE_METHOD(t_StepFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepFunction, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepFunction)[] = {
          { Py_tp_methods, t_StepFunction__methods_ },
          { Py_tp_init, (void *) t_StepFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepFunction, t_StepFunction, StepFunction);

        void t_StepFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(StepFunction), &PY_TYPE_DEF(StepFunction), module, "StepFunction", 0);
        }

        void t_StepFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepFunction), "class_", make_descriptor(StepFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepFunction), "wrapfn_", make_descriptor(t_StepFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepFunction::initializeClass, 1)))
            return NULL;
          return t_StepFunction::wrap_Object(StepFunction(((t_StepFunction *) arg)->object.this$));
        }
        static PyObject *t_StepFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepFunction_init_(t_StepFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          StepFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            INT_CALL(object = StepFunction(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_StepFunction_value(t_StepFunction *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/GammaMnsFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *GammaMnsFunction::class$ = NULL;
            jmethodID *GammaMnsFunction::mids$ = NULL;
            bool GammaMnsFunction::live$ = false;

            jclass GammaMnsFunction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/GammaMnsFunction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_22c7346e56e9f942] = env->getMethodID(cls, "<init>", "(IDI)V");
                mids$[mid_getDerivative_3d407e6a8cf9e8ca] = env->getMethodID(cls, "getDerivative", "(III)D");
                mids$[mid_getValue_3d407e6a8cf9e8ca] = env->getMethodID(cls, "getValue", "(III)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GammaMnsFunction::GammaMnsFunction(jint a0, jdouble a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_22c7346e56e9f942, a0, a1, a2)) {}

            jdouble GammaMnsFunction::getDerivative(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDerivative_3d407e6a8cf9e8ca], a0, a1, a2);
            }

            jdouble GammaMnsFunction::getValue(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getValue_3d407e6a8cf9e8ca], a0, a1, a2);
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            static PyObject *t_GammaMnsFunction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GammaMnsFunction_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GammaMnsFunction_init_(t_GammaMnsFunction *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GammaMnsFunction_getDerivative(t_GammaMnsFunction *self, PyObject *args);
            static PyObject *t_GammaMnsFunction_getValue(t_GammaMnsFunction *self, PyObject *args);

            static PyMethodDef t_GammaMnsFunction__methods_[] = {
              DECLARE_METHOD(t_GammaMnsFunction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GammaMnsFunction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GammaMnsFunction, getDerivative, METH_VARARGS),
              DECLARE_METHOD(t_GammaMnsFunction, getValue, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GammaMnsFunction)[] = {
              { Py_tp_methods, t_GammaMnsFunction__methods_ },
              { Py_tp_init, (void *) t_GammaMnsFunction_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GammaMnsFunction)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GammaMnsFunction, t_GammaMnsFunction, GammaMnsFunction);

            void t_GammaMnsFunction::install(PyObject *module)
            {
              installType(&PY_TYPE(GammaMnsFunction), &PY_TYPE_DEF(GammaMnsFunction), module, "GammaMnsFunction", 0);
            }

            void t_GammaMnsFunction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GammaMnsFunction), "class_", make_descriptor(GammaMnsFunction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GammaMnsFunction), "wrapfn_", make_descriptor(t_GammaMnsFunction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GammaMnsFunction), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GammaMnsFunction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GammaMnsFunction::initializeClass, 1)))
                return NULL;
              return t_GammaMnsFunction::wrap_Object(GammaMnsFunction(((t_GammaMnsFunction *) arg)->object.this$));
            }
            static PyObject *t_GammaMnsFunction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GammaMnsFunction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GammaMnsFunction_init_(t_GammaMnsFunction *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jdouble a1;
              jint a2;
              GammaMnsFunction object((jobject) NULL);

              if (!parseArgs(args, "IDI", &a0, &a1, &a2))
              {
                INT_CALL(object = GammaMnsFunction(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GammaMnsFunction_getDerivative(t_GammaMnsFunction *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getDerivative(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
              return NULL;
            }

            static PyObject *t_GammaMnsFunction_getValue(t_GammaMnsFunction *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getValue(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getValue", args);
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
#include "org/orekit/time/TDBScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TDBScale::class$ = NULL;
      jmethodID *TDBScale::mids$ = NULL;
      bool TDBScale::live$ = false;

      jclass TDBScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TDBScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_bf1d7732f1acb697] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_2a5f05be83ff251d] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TDBScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      jdouble TDBScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TDBScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_2a5f05be83ff251d], a0.this$));
      }

      ::java::lang::String TDBScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      static PyObject *t_TDBScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TDBScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TDBScale_getName(t_TDBScale *self);
      static PyObject *t_TDBScale_offsetFromTAI(t_TDBScale *self, PyObject *args);
      static PyObject *t_TDBScale_toString(t_TDBScale *self, PyObject *args);
      static PyObject *t_TDBScale_get__name(t_TDBScale *self, void *data);
      static PyGetSetDef t_TDBScale__fields_[] = {
        DECLARE_GET_FIELD(t_TDBScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TDBScale__methods_[] = {
        DECLARE_METHOD(t_TDBScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TDBScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TDBScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TDBScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TDBScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TDBScale)[] = {
        { Py_tp_methods, t_TDBScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TDBScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TDBScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TDBScale, t_TDBScale, TDBScale);

      void t_TDBScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TDBScale), &PY_TYPE_DEF(TDBScale), module, "TDBScale", 0);
      }

      void t_TDBScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TDBScale), "class_", make_descriptor(TDBScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TDBScale), "wrapfn_", make_descriptor(t_TDBScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TDBScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TDBScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TDBScale::initializeClass, 1)))
          return NULL;
        return t_TDBScale::wrap_Object(TDBScale(((t_TDBScale *) arg)->object.this$));
      }
      static PyObject *t_TDBScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TDBScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TDBScale_getName(t_TDBScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TDBScale_offsetFromTAI(t_TDBScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_TDBScale_toString(t_TDBScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TDBScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TDBScale_get__name(t_TDBScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/PythonMeasurementFilter.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/filtering/MeasurementFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *PythonMeasurementFilter::class$ = NULL;
          jmethodID *PythonMeasurementFilter::mids$ = NULL;
          bool PythonMeasurementFilter::live$ = false;

          jclass PythonMeasurementFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/PythonMeasurementFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_filter_ba898b75be14e8ca] = env->getMethodID(cls, "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMeasurementFilter::PythonMeasurementFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonMeasurementFilter::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonMeasurementFilter::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonMeasurementFilter::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        namespace filtering {
          static PyObject *t_PythonMeasurementFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementFilter_of_(t_PythonMeasurementFilter *self, PyObject *args);
          static int t_PythonMeasurementFilter_init_(t_PythonMeasurementFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMeasurementFilter_finalize(t_PythonMeasurementFilter *self);
          static PyObject *t_PythonMeasurementFilter_pythonExtension(t_PythonMeasurementFilter *self, PyObject *args);
          static void JNICALL t_PythonMeasurementFilter_filter0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonMeasurementFilter_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMeasurementFilter_get__self(t_PythonMeasurementFilter *self, void *data);
          static PyObject *t_PythonMeasurementFilter_get__parameters_(t_PythonMeasurementFilter *self, void *data);
          static PyGetSetDef t_PythonMeasurementFilter__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMeasurementFilter, self),
            DECLARE_GET_FIELD(t_PythonMeasurementFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMeasurementFilter__methods_[] = {
            DECLARE_METHOD(t_PythonMeasurementFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonMeasurementFilter, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMeasurementFilter, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMeasurementFilter)[] = {
            { Py_tp_methods, t_PythonMeasurementFilter__methods_ },
            { Py_tp_init, (void *) t_PythonMeasurementFilter_init_ },
            { Py_tp_getset, t_PythonMeasurementFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMeasurementFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMeasurementFilter, t_PythonMeasurementFilter, PythonMeasurementFilter);
          PyObject *t_PythonMeasurementFilter::wrap_Object(const PythonMeasurementFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonMeasurementFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonMeasurementFilter *self = (t_PythonMeasurementFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonMeasurementFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonMeasurementFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonMeasurementFilter *self = (t_PythonMeasurementFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonMeasurementFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMeasurementFilter), &PY_TYPE_DEF(PythonMeasurementFilter), module, "PythonMeasurementFilter", 1);
          }

          void t_PythonMeasurementFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementFilter), "class_", make_descriptor(PythonMeasurementFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementFilter), "wrapfn_", make_descriptor(t_PythonMeasurementFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementFilter), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMeasurementFilter::initializeClass);
            JNINativeMethod methods[] = {
              { "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonMeasurementFilter_filter0 },
              { "pythonDecRef", "()V", (void *) t_PythonMeasurementFilter_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonMeasurementFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMeasurementFilter::initializeClass, 1)))
              return NULL;
            return t_PythonMeasurementFilter::wrap_Object(PythonMeasurementFilter(((t_PythonMeasurementFilter *) arg)->object.this$));
          }
          static PyObject *t_PythonMeasurementFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMeasurementFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonMeasurementFilter_of_(t_PythonMeasurementFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonMeasurementFilter_init_(t_PythonMeasurementFilter *self, PyObject *args, PyObject *kwds)
          {
            PythonMeasurementFilter object((jobject) NULL);

            INT_CALL(object = PythonMeasurementFilter());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMeasurementFilter_finalize(t_PythonMeasurementFilter *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMeasurementFilter_pythonExtension(t_PythonMeasurementFilter *self, PyObject *args)
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

          static void JNICALL t_PythonMeasurementFilter_filter0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementFilter::mids$[PythonMeasurementFilter::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(::org::orekit::estimation::measurements::ObservedMeasurement(a0));
            PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
            PyObject *result = PyObject_CallMethod(obj, "filter", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonMeasurementFilter_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementFilter::mids$[PythonMeasurementFilter::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMeasurementFilter::mids$[PythonMeasurementFilter::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMeasurementFilter_get__self(t_PythonMeasurementFilter *self, void *data)
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
          static PyObject *t_PythonMeasurementFilter_get__parameters_(t_PythonMeasurementFilter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/UnivariateSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *UnivariateSolver::class$ = NULL;
        jmethodID *UnivariateSolver::mids$ = NULL;
        bool UnivariateSolver::live$ = false;

        jclass UnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/UnivariateSolver");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
    namespace analysis {
      namespace solvers {
        static PyObject *t_UnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_UnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_UnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolver, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateSolver)[] = {
          { Py_tp_methods, t_UnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(UnivariateSolver, t_UnivariateSolver, UnivariateSolver);

        void t_UnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateSolver), &PY_TYPE_DEF(UnivariateSolver), module, "UnivariateSolver", 0);
        }

        void t_UnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolver), "class_", make_descriptor(UnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolver), "wrapfn_", make_descriptor(t_UnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_UnivariateSolver::wrap_Object(UnivariateSolver(((t_UnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_UnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/IsotropicDrag.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *IsotropicDrag::class$ = NULL;
        jmethodID *IsotropicDrag::mids$ = NULL;
        bool IsotropicDrag::live$ = false;

        jclass IsotropicDrag::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/IsotropicDrag");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_b0a935b68e41d65a] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_dragAcceleration_fc130a15f669db38] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dragAcceleration_6cbf0b5d7046f26b] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getDragParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getDragParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IsotropicDrag::IsotropicDrag(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        IsotropicDrag::IsotropicDrag(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0a935b68e41d65a, a0, a1, a2, a3)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D IsotropicDrag::dragAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_fc130a15f669db38], a0.this$, a1, a2.this$, a3.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IsotropicDrag::dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_6cbf0b5d7046f26b], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::java::util::List IsotropicDrag::getDragParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDragParametersDrivers_2afa36052df4765d]));
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
    namespace forces {
      namespace drag {
        static PyObject *t_IsotropicDrag_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IsotropicDrag_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IsotropicDrag_init_(t_IsotropicDrag *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IsotropicDrag_dragAcceleration(t_IsotropicDrag *self, PyObject *args);
        static PyObject *t_IsotropicDrag_getDragParametersDrivers(t_IsotropicDrag *self);
        static PyObject *t_IsotropicDrag_get__dragParametersDrivers(t_IsotropicDrag *self, void *data);
        static PyGetSetDef t_IsotropicDrag__fields_[] = {
          DECLARE_GET_FIELD(t_IsotropicDrag, dragParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IsotropicDrag__methods_[] = {
          DECLARE_METHOD(t_IsotropicDrag, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicDrag, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicDrag, dragAcceleration, METH_VARARGS),
          DECLARE_METHOD(t_IsotropicDrag, getDragParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IsotropicDrag)[] = {
          { Py_tp_methods, t_IsotropicDrag__methods_ },
          { Py_tp_init, (void *) t_IsotropicDrag_init_ },
          { Py_tp_getset, t_IsotropicDrag__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IsotropicDrag)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IsotropicDrag, t_IsotropicDrag, IsotropicDrag);

        void t_IsotropicDrag::install(PyObject *module)
        {
          installType(&PY_TYPE(IsotropicDrag), &PY_TYPE_DEF(IsotropicDrag), module, "IsotropicDrag", 0);
        }

        void t_IsotropicDrag::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicDrag), "class_", make_descriptor(IsotropicDrag::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicDrag), "wrapfn_", make_descriptor(t_IsotropicDrag::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicDrag), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IsotropicDrag_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IsotropicDrag::initializeClass, 1)))
            return NULL;
          return t_IsotropicDrag::wrap_Object(IsotropicDrag(((t_IsotropicDrag *) arg)->object.this$));
        }
        static PyObject *t_IsotropicDrag_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IsotropicDrag::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IsotropicDrag_init_(t_IsotropicDrag *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              IsotropicDrag object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = IsotropicDrag(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              IsotropicDrag object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = IsotropicDrag(a0, a1, a2, a3));
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

        static PyObject *t_IsotropicDrag_dragAcceleration(t_IsotropicDrag *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KKK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              jdouble a1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kDk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "dragAcceleration", args);
          return NULL;
        }

        static PyObject *t_IsotropicDrag_getDragParametersDrivers(t_IsotropicDrag *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDragParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_IsotropicDrag_get__dragParametersDrivers(t_IsotropicDrag *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDragParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedFieldPVCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedFieldPVCoordinatesHermiteInterpolator::mids$ = NULL;
      bool TimeStampedFieldPVCoordinatesHermiteInterpolator::live$ = false;

      jclass TimeStampedFieldPVCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedFieldPVCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_297c693ff16234ea] = env->getMethodID(cls, "<init>", "(ILorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_ce04d2837a89861b] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getFilter_16e9a7b5414faf2d] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_interpolate_10906d940387ab3e] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldPVCoordinatesHermiteInterpolator::TimeStampedFieldPVCoordinatesHermiteInterpolator() : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      TimeStampedFieldPVCoordinatesHermiteInterpolator::TimeStampedFieldPVCoordinatesHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      TimeStampedFieldPVCoordinatesHermiteInterpolator::TimeStampedFieldPVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_297c693ff16234ea, a0, a1.this$)) {}

      TimeStampedFieldPVCoordinatesHermiteInterpolator::TimeStampedFieldPVCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_ce04d2837a89861b, a0, a1, a2.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter TimeStampedFieldPVCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_16e9a7b5414faf2d]));
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
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_of_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedFieldPVCoordinatesHermiteInterpolator_init_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_getFilter(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_get__filter(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedFieldPVCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldPVCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldPVCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedFieldPVCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldPVCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedFieldPVCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldPVCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator, t_TimeStampedFieldPVCoordinatesHermiteInterpolator, TimeStampedFieldPVCoordinatesHermiteInterpolator);
      PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_Object(const TimeStampedFieldPVCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self = (t_TimeStampedFieldPVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self = (t_TimeStampedFieldPVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldPVCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator), &PY_TYPE_DEF(TimeStampedFieldPVCoordinatesHermiteInterpolator), module, "TimeStampedFieldPVCoordinatesHermiteInterpolator", 0);
      }

      void t_TimeStampedFieldPVCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator), "class_", make_descriptor(TimeStampedFieldPVCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldPVCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_Object(TimeStampedFieldPVCoordinatesHermiteInterpolator(((t_TimeStampedFieldPVCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldPVCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_of_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldPVCoordinatesHermiteInterpolator_init_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedFieldPVCoordinatesHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedFieldPVCoordinatesHermiteInterpolator());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedFieldPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinatesHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinatesHermiteInterpolator(a0, a1, a2));
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

      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_getFilter(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_get__filter(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "java/util/List.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventDetectorsProvider::class$ = NULL;
        jmethodID *EventDetectorsProvider::mids$ = NULL;
        bool EventDetectorsProvider::live$ = false;
        jdouble EventDetectorsProvider::DATATION_ACCURACY = (jdouble) 0;

        jclass EventDetectorsProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventDetectorsProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEventDetectors_20f6d2b462aaef4b] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getEventDetectors_7659b9c52e25aa5d] = env->getMethodID(cls, "getEventDetectors", "(Ljava/util/List;)Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_361313cd1a9c693a] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_bccf367c194c95ef] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;Ljava/util/List;)Ljava/util/stream/Stream;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DATATION_ACCURACY = env->getStaticDoubleField(cls, "DATATION_ACCURACY");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::stream::Stream EventDetectorsProvider::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_20f6d2b462aaef4b]));
        }

        ::java::util::stream::Stream EventDetectorsProvider::getEventDetectors(const ::java::util::List & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_7659b9c52e25aa5d], a0.this$));
        }

        ::java::util::stream::Stream EventDetectorsProvider::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_361313cd1a9c693a], a0.this$));
        }

        ::java::util::stream::Stream EventDetectorsProvider::getFieldEventDetectors(const ::org::hipparchus::Field & a0, const ::java::util::List & a1) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_bccf367c194c95ef], a0.this$, a1.this$));
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
        static PyObject *t_EventDetectorsProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventDetectorsProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventDetectorsProvider_getEventDetectors(t_EventDetectorsProvider *self, PyObject *args);
        static PyObject *t_EventDetectorsProvider_getFieldEventDetectors(t_EventDetectorsProvider *self, PyObject *args);
        static PyObject *t_EventDetectorsProvider_get__eventDetectors(t_EventDetectorsProvider *self, void *data);
        static PyGetSetDef t_EventDetectorsProvider__fields_[] = {
          DECLARE_GET_FIELD(t_EventDetectorsProvider, eventDetectors),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventDetectorsProvider__methods_[] = {
          DECLARE_METHOD(t_EventDetectorsProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventDetectorsProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventDetectorsProvider, getEventDetectors, METH_VARARGS),
          DECLARE_METHOD(t_EventDetectorsProvider, getFieldEventDetectors, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventDetectorsProvider)[] = {
          { Py_tp_methods, t_EventDetectorsProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventDetectorsProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventDetectorsProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventDetectorsProvider, t_EventDetectorsProvider, EventDetectorsProvider);

        void t_EventDetectorsProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(EventDetectorsProvider), &PY_TYPE_DEF(EventDetectorsProvider), module, "EventDetectorsProvider", 0);
        }

        void t_EventDetectorsProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetectorsProvider), "class_", make_descriptor(EventDetectorsProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetectorsProvider), "wrapfn_", make_descriptor(t_EventDetectorsProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetectorsProvider), "boxfn_", make_descriptor(boxObject));
          env->getClass(EventDetectorsProvider::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetectorsProvider), "DATATION_ACCURACY", make_descriptor(EventDetectorsProvider::DATATION_ACCURACY));
        }

        static PyObject *t_EventDetectorsProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventDetectorsProvider::initializeClass, 1)))
            return NULL;
          return t_EventDetectorsProvider::wrap_Object(EventDetectorsProvider(((t_EventDetectorsProvider *) arg)->object.this$));
        }
        static PyObject *t_EventDetectorsProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventDetectorsProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventDetectorsProvider_getEventDetectors(t_EventDetectorsProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::util::stream::Stream result((jobject) NULL);
              OBJ_CALL(result = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
            }
            break;
           case 1:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.getEventDetectors(a0));
                return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getEventDetectors", args);
          return NULL;
        }

        static PyObject *t_EventDetectorsProvider_getFieldEventDetectors(t_EventDetectorsProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
                return ::java::util::stream::t_Stream::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.getFieldEventDetectors(a0, a1));
                return ::java::util::stream::t_Stream::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", args);
          return NULL;
        }

        static PyObject *t_EventDetectorsProvider_get__eventDetectors(t_EventDetectorsProvider *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonFieldAbstractPropagator.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldAbstractPropagator::class$ = NULL;
      jmethodID *PythonFieldAbstractPropagator::mids$ = NULL;
      bool PythonFieldAbstractPropagator::live$ = false;

      jclass PythonFieldAbstractPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldAbstractPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_484998d88974267b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_addEventDetector_f929ebd2a84dbfe7] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
          mids$[mid_clearEventsDetectors_0fa09c18fee449d5] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEphemerisGenerator_54ac43f1e933cf20] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
          mids$[mid_getEventsDetectors_37528d110cff6b74] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_propagate_fc770c29e3468de8] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldAbstractPropagator::PythonFieldAbstractPropagator(const ::org::hipparchus::Field & a0) : ::org::orekit::propagation::FieldAbstractPropagator(env->newObject(initializeClass, &mids$, mid_init$_484998d88974267b, a0.this$)) {}

      void PythonFieldAbstractPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonFieldAbstractPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonFieldAbstractPropagator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonFieldAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldAbstractPropagator_of_(t_PythonFieldAbstractPropagator *self, PyObject *args);
      static int t_PythonFieldAbstractPropagator_init_(t_PythonFieldAbstractPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldAbstractPropagator_finalize(t_PythonFieldAbstractPropagator *self);
      static PyObject *t_PythonFieldAbstractPropagator_pythonExtension(t_PythonFieldAbstractPropagator *self, PyObject *args);
      static void JNICALL t_PythonFieldAbstractPropagator_addEventDetector0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldAbstractPropagator_clearEventsDetectors1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldAbstractPropagator_getEphemerisGenerator2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldAbstractPropagator_getEventsDetectors3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldAbstractPropagator_propagate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldAbstractPropagator_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldAbstractPropagator_get__self(t_PythonFieldAbstractPropagator *self, void *data);
      static PyObject *t_PythonFieldAbstractPropagator_get__parameters_(t_PythonFieldAbstractPropagator *self, void *data);
      static PyGetSetDef t_PythonFieldAbstractPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldAbstractPropagator, self),
        DECLARE_GET_FIELD(t_PythonFieldAbstractPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldAbstractPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldAbstractPropagator)[] = {
        { Py_tp_methods, t_PythonFieldAbstractPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldAbstractPropagator_init_ },
        { Py_tp_getset, t_PythonFieldAbstractPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldAbstractPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::FieldAbstractPropagator),
        NULL
      };

      DEFINE_TYPE(PythonFieldAbstractPropagator, t_PythonFieldAbstractPropagator, PythonFieldAbstractPropagator);
      PyObject *t_PythonFieldAbstractPropagator::wrap_Object(const PythonFieldAbstractPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldAbstractPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldAbstractPropagator *self = (t_PythonFieldAbstractPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldAbstractPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldAbstractPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldAbstractPropagator *self = (t_PythonFieldAbstractPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldAbstractPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldAbstractPropagator), &PY_TYPE_DEF(PythonFieldAbstractPropagator), module, "PythonFieldAbstractPropagator", 1);
      }

      void t_PythonFieldAbstractPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractPropagator), "class_", make_descriptor(PythonFieldAbstractPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractPropagator), "wrapfn_", make_descriptor(t_PythonFieldAbstractPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldAbstractPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V", (void *) t_PythonFieldAbstractPropagator_addEventDetector0 },
          { "clearEventsDetectors", "()V", (void *) t_PythonFieldAbstractPropagator_clearEventsDetectors1 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;", (void *) t_PythonFieldAbstractPropagator_getEphemerisGenerator2 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonFieldAbstractPropagator_getEventsDetectors3 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldAbstractPropagator_propagate4 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldAbstractPropagator_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonFieldAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldAbstractPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldAbstractPropagator::wrap_Object(PythonFieldAbstractPropagator(((t_PythonFieldAbstractPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldAbstractPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldAbstractPropagator_of_(t_PythonFieldAbstractPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldAbstractPropagator_init_(t_PythonFieldAbstractPropagator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        PythonFieldAbstractPropagator object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          INT_CALL(object = PythonFieldAbstractPropagator(a0));
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

      static PyObject *t_PythonFieldAbstractPropagator_finalize(t_PythonFieldAbstractPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldAbstractPropagator_pythonExtension(t_PythonFieldAbstractPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonFieldAbstractPropagator_addEventDetector0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldAbstractPropagator_clearEventsDetectors1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonFieldAbstractPropagator_getEphemerisGenerator2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldEphemerisGenerator::initializeClass, &value))
        {
          throwTypeError("getEphemerisGenerator", result);
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

      static jobject JNICALL t_PythonFieldAbstractPropagator_getEventsDetectors3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEventsDetectors", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("getEventsDetectors", result);
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

      static jobject JNICALL t_PythonFieldAbstractPropagator_propagate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static void JNICALL t_PythonFieldAbstractPropagator_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldAbstractPropagator_get__self(t_PythonFieldAbstractPropagator *self, void *data)
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
      static PyObject *t_PythonFieldAbstractPropagator_get__parameters_(t_PythonFieldAbstractPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmParser.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Opm.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmParser.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *OpmParser::class$ = NULL;
              jmethodID *OpmParser::mids$ = NULL;
              bool OpmParser::live$ = false;

              jclass OpmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/OpmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_1d1d200b4f79c07e] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/odm/opm/Opm;");
                  mids$[mid_finalizeData_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_3423aca890fca0cd] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                  mids$[mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                  mids$[mid_inData_b108b35ef48e27bd] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_b108b35ef48e27bd] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_prepareData_b108b35ef48e27bd] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_b108b35ef48e27bd] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_e250621f009e45db] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::odm::opm::Opm OpmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::opm::Opm(env->callObjectMethod(this$, mids$[mid_build_1d1d200b4f79c07e]));
              }

              jboolean OpmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_b108b35ef48e27bd]);
              }

              jboolean OpmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_b108b35ef48e27bd]);
              }

              jboolean OpmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_b108b35ef48e27bd]);
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmHeader OpmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_3423aca890fca0cd]));
              }

              ::java::util::Map OpmParser::getSpecialXmlElementsBuilders() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465]));
              }

              jboolean OpmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_b108b35ef48e27bd]);
              }

              jboolean OpmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_b108b35ef48e27bd]);
              }

              jboolean OpmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_b108b35ef48e27bd]);
              }

              jboolean OpmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_b108b35ef48e27bd]);
              }

              jboolean OpmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_b108b35ef48e27bd]);
              }

              jboolean OpmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_b108b35ef48e27bd]);
              }

              void OpmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_e250621f009e45db], a0.this$);
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
            namespace opm {
              static PyObject *t_OpmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmParser_of_(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_build(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_finalizeData(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_finalizeHeader(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_finalizeMetadata(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_getHeader(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_getSpecialXmlElementsBuilders(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_inData(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_inHeader(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_inMetadata(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_prepareData(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_prepareHeader(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_prepareMetadata(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_reset(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_get__header(t_OpmParser *self, void *data);
              static PyObject *t_OpmParser_get__specialXmlElementsBuilders(t_OpmParser *self, void *data);
              static PyObject *t_OpmParser_get__parameters_(t_OpmParser *self, void *data);
              static PyGetSetDef t_OpmParser__fields_[] = {
                DECLARE_GET_FIELD(t_OpmParser, header),
                DECLARE_GET_FIELD(t_OpmParser, specialXmlElementsBuilders),
                DECLARE_GET_FIELD(t_OpmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OpmParser__methods_[] = {
                DECLARE_METHOD(t_OpmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OpmParser)[] = {
                { Py_tp_methods, t_OpmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OpmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OpmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
                NULL
              };

              DEFINE_TYPE(OpmParser, t_OpmParser, OpmParser);
              PyObject *t_OpmParser::wrap_Object(const OpmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OpmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpmParser *self = (t_OpmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OpmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OpmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpmParser *self = (t_OpmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OpmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(OpmParser), &PY_TYPE_DEF(OpmParser), module, "OpmParser", 0);
              }

              void t_OpmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmParser), "class_", make_descriptor(OpmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmParser), "wrapfn_", make_descriptor(t_OpmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OpmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OpmParser::initializeClass, 1)))
                  return NULL;
                return t_OpmParser::wrap_Object(OpmParser(((t_OpmParser *) arg)->object.this$));
              }
              static PyObject *t_OpmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OpmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OpmParser_of_(t_OpmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OpmParser_build(t_OpmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::opm::Opm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::odm::opm::t_Opm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_OpmParser_finalizeData(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_OpmParser_finalizeHeader(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_OpmParser_finalizeMetadata(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_OpmParser_getHeader(t_OpmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_OpmParser_getSpecialXmlElementsBuilders(t_OpmParser *self, PyObject *args)
              {
                ::java::util::Map result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                  return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
              }

              static PyObject *t_OpmParser_inData(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_OpmParser_inHeader(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_OpmParser_inMetadata(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_OpmParser_prepareData(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_OpmParser_prepareHeader(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_OpmParser_prepareMetadata(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_OpmParser_reset(t_OpmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_OpmParser_get__parameters_(t_OpmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OpmParser_get__header(t_OpmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(value);
              }

              static PyObject *t_OpmParser_get__specialXmlElementsBuilders(t_OpmParser *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/orekit/gnss/metric/parser/PythonDataField.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/DataField.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *PythonDataField::class$ = NULL;
          jmethodID *PythonDataField::mids$ = NULL;
          bool PythonDataField::live$ = false;

          jclass PythonDataField::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/PythonDataField");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_booleanValue_d49bc9d47765325e] = env->getMethodID(cls, "booleanValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Z");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonDataField::PythonDataField() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonDataField::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonDataField::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonDataField::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        namespace parser {
          static PyObject *t_PythonDataField_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonDataField_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonDataField_init_(t_PythonDataField *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonDataField_finalize(t_PythonDataField *self);
          static PyObject *t_PythonDataField_pythonExtension(t_PythonDataField *self, PyObject *args);
          static jboolean JNICALL t_PythonDataField_booleanValue0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonDataField_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonDataField_get__self(t_PythonDataField *self, void *data);
          static PyGetSetDef t_PythonDataField__fields_[] = {
            DECLARE_GET_FIELD(t_PythonDataField, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonDataField__methods_[] = {
            DECLARE_METHOD(t_PythonDataField, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDataField, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDataField, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonDataField, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonDataField)[] = {
            { Py_tp_methods, t_PythonDataField__methods_ },
            { Py_tp_init, (void *) t_PythonDataField_init_ },
            { Py_tp_getset, t_PythonDataField__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonDataField)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonDataField, t_PythonDataField, PythonDataField);

          void t_PythonDataField::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonDataField), &PY_TYPE_DEF(PythonDataField), module, "PythonDataField", 1);
          }

          void t_PythonDataField::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataField), "class_", make_descriptor(PythonDataField::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataField), "wrapfn_", make_descriptor(t_PythonDataField::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataField), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonDataField::initializeClass);
            JNINativeMethod methods[] = {
              { "booleanValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Z", (void *) t_PythonDataField_booleanValue0 },
              { "pythonDecRef", "()V", (void *) t_PythonDataField_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonDataField_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonDataField::initializeClass, 1)))
              return NULL;
            return t_PythonDataField::wrap_Object(PythonDataField(((t_PythonDataField *) arg)->object.this$));
          }
          static PyObject *t_PythonDataField_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonDataField::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonDataField_init_(t_PythonDataField *self, PyObject *args, PyObject *kwds)
          {
            PythonDataField object((jobject) NULL);

            INT_CALL(object = PythonDataField());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonDataField_finalize(t_PythonDataField *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonDataField_pythonExtension(t_PythonDataField *self, PyObject *args)
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

          static jboolean JNICALL t_PythonDataField_booleanValue0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDataField::mids$[PythonDataField::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::gnss::metric::parser::t_EncodedMessage::wrap_Object(::org::orekit::gnss::metric::parser::EncodedMessage(a0));
            PyObject *result = PyObject_CallMethod(obj, "booleanValue", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("booleanValue", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static void JNICALL t_PythonDataField_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDataField::mids$[PythonDataField::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonDataField::mids$[PythonDataField::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonDataField_get__self(t_PythonDataField *self, void *data)
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PositionAngleDetector.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/PositionAngleDetector.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PositionAngleDetector::class$ = NULL;
        jmethodID *PositionAngleDetector::mids$ = NULL;
        bool PositionAngleDetector::live$ = false;

        jclass PositionAngleDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PositionAngleDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_da38e6127572ad93] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_init$_caefc517bbd16a1e] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getAngle_dff5885c2c873297] = env->getMethodID(cls, "getAngle", "()D");
            mids$[mid_getOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_39063026c0d72c49] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/PositionAngleDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PositionAngleDetector::PositionAngleDetector(const ::org::orekit::orbits::OrbitType & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_da38e6127572ad93, a0.this$, a1.this$, a2)) {}

        PositionAngleDetector::PositionAngleDetector(jdouble a0, jdouble a1, const ::org::orekit::orbits::OrbitType & a2, const ::org::orekit::orbits::PositionAngleType & a3, jdouble a4) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_caefc517bbd16a1e, a0, a1, a2.this$, a3.this$, a4)) {}

        jdouble PositionAngleDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        jdouble PositionAngleDetector::getAngle() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAngle_dff5885c2c873297]);
        }

        ::org::orekit::orbits::OrbitType PositionAngleDetector::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_e29360d311dc0e20]));
        }

        ::org::orekit::orbits::PositionAngleType PositionAngleDetector::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_8f17e83e5a86217c]));
        }

        void PositionAngleDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
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
        static PyObject *t_PositionAngleDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PositionAngleDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PositionAngleDetector_of_(t_PositionAngleDetector *self, PyObject *args);
        static int t_PositionAngleDetector_init_(t_PositionAngleDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PositionAngleDetector_g(t_PositionAngleDetector *self, PyObject *args);
        static PyObject *t_PositionAngleDetector_getAngle(t_PositionAngleDetector *self);
        static PyObject *t_PositionAngleDetector_getOrbitType(t_PositionAngleDetector *self);
        static PyObject *t_PositionAngleDetector_getPositionAngleType(t_PositionAngleDetector *self);
        static PyObject *t_PositionAngleDetector_init(t_PositionAngleDetector *self, PyObject *args);
        static PyObject *t_PositionAngleDetector_get__angle(t_PositionAngleDetector *self, void *data);
        static PyObject *t_PositionAngleDetector_get__orbitType(t_PositionAngleDetector *self, void *data);
        static PyObject *t_PositionAngleDetector_get__positionAngleType(t_PositionAngleDetector *self, void *data);
        static PyObject *t_PositionAngleDetector_get__parameters_(t_PositionAngleDetector *self, void *data);
        static PyGetSetDef t_PositionAngleDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PositionAngleDetector, angle),
          DECLARE_GET_FIELD(t_PositionAngleDetector, orbitType),
          DECLARE_GET_FIELD(t_PositionAngleDetector, positionAngleType),
          DECLARE_GET_FIELD(t_PositionAngleDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PositionAngleDetector__methods_[] = {
          DECLARE_METHOD(t_PositionAngleDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PositionAngleDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PositionAngleDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_PositionAngleDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_PositionAngleDetector, getAngle, METH_NOARGS),
          DECLARE_METHOD(t_PositionAngleDetector, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_PositionAngleDetector, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_PositionAngleDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PositionAngleDetector)[] = {
          { Py_tp_methods, t_PositionAngleDetector__methods_ },
          { Py_tp_init, (void *) t_PositionAngleDetector_init_ },
          { Py_tp_getset, t_PositionAngleDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PositionAngleDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(PositionAngleDetector, t_PositionAngleDetector, PositionAngleDetector);
        PyObject *t_PositionAngleDetector::wrap_Object(const PositionAngleDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PositionAngleDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PositionAngleDetector *self = (t_PositionAngleDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PositionAngleDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PositionAngleDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PositionAngleDetector *self = (t_PositionAngleDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PositionAngleDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PositionAngleDetector), &PY_TYPE_DEF(PositionAngleDetector), module, "PositionAngleDetector", 0);
        }

        void t_PositionAngleDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleDetector), "class_", make_descriptor(PositionAngleDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleDetector), "wrapfn_", make_descriptor(t_PositionAngleDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PositionAngleDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PositionAngleDetector::initializeClass, 1)))
            return NULL;
          return t_PositionAngleDetector::wrap_Object(PositionAngleDetector(((t_PositionAngleDetector *) arg)->object.this$));
        }
        static PyObject *t_PositionAngleDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PositionAngleDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PositionAngleDetector_of_(t_PositionAngleDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PositionAngleDetector_init_(t_PositionAngleDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::OrbitType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              PositionAngleDetector object((jobject) NULL);

              if (!parseArgs(args, "KKD", ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_OrbitType::parameters_, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2))
              {
                INT_CALL(object = PositionAngleDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(PositionAngleDetector);
                break;
              }
            }
            goto err;
           case 5:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::orbits::OrbitType a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::orbits::PositionAngleType a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              PositionAngleDetector object((jobject) NULL);

              if (!parseArgs(args, "DDKKD", ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_, &a3, &p3, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a4))
              {
                INT_CALL(object = PositionAngleDetector(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(PositionAngleDetector);
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

        static PyObject *t_PositionAngleDetector_g(t_PositionAngleDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PositionAngleDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_PositionAngleDetector_getAngle(t_PositionAngleDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAngle());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PositionAngleDetector_getOrbitType(t_PositionAngleDetector *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_PositionAngleDetector_getPositionAngleType(t_PositionAngleDetector *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_PositionAngleDetector_init(t_PositionAngleDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PositionAngleDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_PositionAngleDetector_get__parameters_(t_PositionAngleDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_PositionAngleDetector_get__angle(t_PositionAngleDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAngle());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PositionAngleDetector_get__orbitType(t_PositionAngleDetector *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_PositionAngleDetector_get__positionAngleType(t_PositionAngleDetector *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ScreenVolumeFrame::class$ = NULL;
            jmethodID *ScreenVolumeFrame::mids$ = NULL;
            bool ScreenVolumeFrame::live$ = false;
            ScreenVolumeFrame *ScreenVolumeFrame::RTN = NULL;
            ScreenVolumeFrame *ScreenVolumeFrame::TVN = NULL;

            jclass ScreenVolumeFrame::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_5009d3723d3357b2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;");
                mids$[mid_values_eff1a0f728754c8c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                RTN = new ScreenVolumeFrame(env->getStaticObjectField(cls, "RTN", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;"));
                TVN = new ScreenVolumeFrame(env->getStaticObjectField(cls, "TVN", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ScreenVolumeFrame ScreenVolumeFrame::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ScreenVolumeFrame(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5009d3723d3357b2], a0.this$));
            }

            JArray< ScreenVolumeFrame > ScreenVolumeFrame::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ScreenVolumeFrame >(env->callStaticObjectMethod(cls, mids$[mid_values_eff1a0f728754c8c]));
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
          namespace cdm {
            static PyObject *t_ScreenVolumeFrame_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenVolumeFrame_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenVolumeFrame_of_(t_ScreenVolumeFrame *self, PyObject *args);
            static PyObject *t_ScreenVolumeFrame_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ScreenVolumeFrame_values(PyTypeObject *type);
            static PyObject *t_ScreenVolumeFrame_get__parameters_(t_ScreenVolumeFrame *self, void *data);
            static PyGetSetDef t_ScreenVolumeFrame__fields_[] = {
              DECLARE_GET_FIELD(t_ScreenVolumeFrame, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ScreenVolumeFrame__methods_[] = {
              DECLARE_METHOD(t_ScreenVolumeFrame, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeFrame, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeFrame, of_, METH_VARARGS),
              DECLARE_METHOD(t_ScreenVolumeFrame, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeFrame, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ScreenVolumeFrame)[] = {
              { Py_tp_methods, t_ScreenVolumeFrame__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ScreenVolumeFrame__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ScreenVolumeFrame)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ScreenVolumeFrame, t_ScreenVolumeFrame, ScreenVolumeFrame);
            PyObject *t_ScreenVolumeFrame::wrap_Object(const ScreenVolumeFrame& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenVolumeFrame::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenVolumeFrame *self = (t_ScreenVolumeFrame *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ScreenVolumeFrame::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenVolumeFrame::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenVolumeFrame *self = (t_ScreenVolumeFrame *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ScreenVolumeFrame::install(PyObject *module)
            {
              installType(&PY_TYPE(ScreenVolumeFrame), &PY_TYPE_DEF(ScreenVolumeFrame), module, "ScreenVolumeFrame", 0);
            }

            void t_ScreenVolumeFrame::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "class_", make_descriptor(ScreenVolumeFrame::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "wrapfn_", make_descriptor(t_ScreenVolumeFrame::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "boxfn_", make_descriptor(boxObject));
              env->getClass(ScreenVolumeFrame::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "RTN", make_descriptor(t_ScreenVolumeFrame::wrap_Object(*ScreenVolumeFrame::RTN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "TVN", make_descriptor(t_ScreenVolumeFrame::wrap_Object(*ScreenVolumeFrame::TVN)));
            }

            static PyObject *t_ScreenVolumeFrame_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ScreenVolumeFrame::initializeClass, 1)))
                return NULL;
              return t_ScreenVolumeFrame::wrap_Object(ScreenVolumeFrame(((t_ScreenVolumeFrame *) arg)->object.this$));
            }
            static PyObject *t_ScreenVolumeFrame_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ScreenVolumeFrame::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ScreenVolumeFrame_of_(t_ScreenVolumeFrame *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ScreenVolumeFrame_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ScreenVolumeFrame result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame::valueOf(a0));
                return t_ScreenVolumeFrame::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ScreenVolumeFrame_values(PyTypeObject *type)
            {
              JArray< ScreenVolumeFrame > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame::values());
              return JArray<jobject>(result.this$).wrap(t_ScreenVolumeFrame::wrap_jobject);
            }
            static PyObject *t_ScreenVolumeFrame_get__parameters_(t_ScreenVolumeFrame *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/LyapunovOrbit.h"
#include "org/orekit/orbits/RichardsonExpansion.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *LyapunovOrbit::class$ = NULL;
      jmethodID *LyapunovOrbit::mids$ = NULL;
      bool LyapunovOrbit::live$ = false;

      jclass LyapunovOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/LyapunovOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0f778f809bdde6f2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/RichardsonExpansion;D)V");
          mids$[mid_init$_6ca73a52ae88cb29] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_applyCorrectionOnPV_e2324264d8e2d238] = env->getMethodID(cls, "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LyapunovOrbit::LyapunovOrbit(const ::org::orekit::orbits::RichardsonExpansion & a0, jdouble a1) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_0f778f809bdde6f2, a0.this$, a1)) {}

      LyapunovOrbit::LyapunovOrbit(const ::org::orekit::bodies::CR3BPSystem & a0, const ::org::orekit::utils::PVCoordinates & a1, jdouble a2) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_6ca73a52ae88cb29, a0.this$, a1.this$, a2)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_LyapunovOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LyapunovOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LyapunovOrbit_init_(t_LyapunovOrbit *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_LyapunovOrbit__methods_[] = {
        DECLARE_METHOD(t_LyapunovOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LyapunovOrbit, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LyapunovOrbit)[] = {
        { Py_tp_methods, t_LyapunovOrbit__methods_ },
        { Py_tp_init, (void *) t_LyapunovOrbit_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LyapunovOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::LibrationOrbit),
        NULL
      };

      DEFINE_TYPE(LyapunovOrbit, t_LyapunovOrbit, LyapunovOrbit);

      void t_LyapunovOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(LyapunovOrbit), &PY_TYPE_DEF(LyapunovOrbit), module, "LyapunovOrbit", 0);
      }

      void t_LyapunovOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LyapunovOrbit), "class_", make_descriptor(LyapunovOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LyapunovOrbit), "wrapfn_", make_descriptor(t_LyapunovOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LyapunovOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LyapunovOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LyapunovOrbit::initializeClass, 1)))
          return NULL;
        return t_LyapunovOrbit::wrap_Object(LyapunovOrbit(((t_LyapunovOrbit *) arg)->object.this$));
      }
      static PyObject *t_LyapunovOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LyapunovOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LyapunovOrbit_init_(t_LyapunovOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::orbits::RichardsonExpansion a0((jobject) NULL);
            jdouble a1;
            LyapunovOrbit object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::orbits::RichardsonExpansion::initializeClass, &a0, &a1))
            {
              INT_CALL(object = LyapunovOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            jdouble a2;
            LyapunovOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::bodies::CR3BPSystem::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = LyapunovOrbit(a0, a1, a2));
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldBooleanDetector.h"
#include "org/orekit/propagation/events/FieldBooleanDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldNegateDetector.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldBooleanDetector::class$ = NULL;
        jmethodID *FieldBooleanDetector::mids$ = NULL;
        bool FieldBooleanDetector::live$ = false;

        jclass FieldBooleanDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldBooleanDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_andCombine_f1bf7ad4c2560c97] = env->getStaticMethodID(cls, "andCombine", "([Lorg/orekit/propagation/events/FieldEventDetector;)Lorg/orekit/propagation/events/FieldBooleanDetector;");
            mids$[mid_andCombine_e841a6ad3abae38f] = env->getStaticMethodID(cls, "andCombine", "(Ljava/util/Collection;)Lorg/orekit/propagation/events/FieldBooleanDetector;");
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetectors_2afa36052df4765d] = env->getMethodID(cls, "getDetectors", "()Ljava/util/List;");
            mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_notCombine_bd2e3c52711c8637] = env->getStaticMethodID(cls, "notCombine", "(Lorg/orekit/propagation/events/FieldEventDetector;)Lorg/orekit/propagation/events/FieldNegateDetector;");
            mids$[mid_orCombine_f1bf7ad4c2560c97] = env->getStaticMethodID(cls, "orCombine", "([Lorg/orekit/propagation/events/FieldEventDetector;)Lorg/orekit/propagation/events/FieldBooleanDetector;");
            mids$[mid_orCombine_e841a6ad3abae38f] = env->getStaticMethodID(cls, "orCombine", "(Ljava/util/Collection;)Lorg/orekit/propagation/events/FieldBooleanDetector;");
            mids$[mid_create_705c558177873e23] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldBooleanDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldBooleanDetector FieldBooleanDetector::andCombine(const JArray< ::org::orekit::propagation::events::FieldEventDetector > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldBooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_andCombine_f1bf7ad4c2560c97], a0.this$));
        }

        FieldBooleanDetector FieldBooleanDetector::andCombine(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldBooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_andCombine_e841a6ad3abae38f], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldBooleanDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_41a008afe53da855], a0.this$));
        }

        ::java::util::List FieldBooleanDetector::getDetectors() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDetectors_2afa36052df4765d]));
        }

        void FieldBooleanDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
        }

        ::org::orekit::propagation::events::FieldNegateDetector FieldBooleanDetector::notCombine(const ::org::orekit::propagation::events::FieldEventDetector & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::propagation::events::FieldNegateDetector(env->callStaticObjectMethod(cls, mids$[mid_notCombine_bd2e3c52711c8637], a0.this$));
        }

        FieldBooleanDetector FieldBooleanDetector::orCombine(const JArray< ::org::orekit::propagation::events::FieldEventDetector > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldBooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_orCombine_f1bf7ad4c2560c97], a0.this$));
        }

        FieldBooleanDetector FieldBooleanDetector::orCombine(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldBooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_orCombine_e841a6ad3abae38f], a0.this$));
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
        static PyObject *t_FieldBooleanDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBooleanDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBooleanDetector_of_(t_FieldBooleanDetector *self, PyObject *args);
        static PyObject *t_FieldBooleanDetector_andCombine(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldBooleanDetector_g(t_FieldBooleanDetector *self, PyObject *args);
        static PyObject *t_FieldBooleanDetector_getDetectors(t_FieldBooleanDetector *self);
        static PyObject *t_FieldBooleanDetector_init(t_FieldBooleanDetector *self, PyObject *args);
        static PyObject *t_FieldBooleanDetector_notCombine(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBooleanDetector_orCombine(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldBooleanDetector_get__detectors(t_FieldBooleanDetector *self, void *data);
        static PyObject *t_FieldBooleanDetector_get__parameters_(t_FieldBooleanDetector *self, void *data);
        static PyGetSetDef t_FieldBooleanDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldBooleanDetector, detectors),
          DECLARE_GET_FIELD(t_FieldBooleanDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldBooleanDetector__methods_[] = {
          DECLARE_METHOD(t_FieldBooleanDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBooleanDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBooleanDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldBooleanDetector, andCombine, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldBooleanDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldBooleanDetector, getDetectors, METH_NOARGS),
          DECLARE_METHOD(t_FieldBooleanDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldBooleanDetector, notCombine, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBooleanDetector, orCombine, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldBooleanDetector)[] = {
          { Py_tp_methods, t_FieldBooleanDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldBooleanDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldBooleanDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldBooleanDetector, t_FieldBooleanDetector, FieldBooleanDetector);
        PyObject *t_FieldBooleanDetector::wrap_Object(const FieldBooleanDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBooleanDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBooleanDetector *self = (t_FieldBooleanDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldBooleanDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBooleanDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBooleanDetector *self = (t_FieldBooleanDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldBooleanDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldBooleanDetector), &PY_TYPE_DEF(FieldBooleanDetector), module, "FieldBooleanDetector", 0);
        }

        void t_FieldBooleanDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBooleanDetector), "class_", make_descriptor(FieldBooleanDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBooleanDetector), "wrapfn_", make_descriptor(t_FieldBooleanDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBooleanDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldBooleanDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldBooleanDetector::initializeClass, 1)))
            return NULL;
          return t_FieldBooleanDetector::wrap_Object(FieldBooleanDetector(((t_FieldBooleanDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldBooleanDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldBooleanDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldBooleanDetector_of_(t_FieldBooleanDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldBooleanDetector_andCombine(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::orekit::propagation::events::FieldEventDetector > a0((jobject) NULL);
              PyTypeObject **p0;
              FieldBooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::andCombine(a0));
                return t_FieldBooleanDetector::wrap_Object(result);
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              FieldBooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::andCombine(a0));
                return t_FieldBooleanDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "andCombine", args);
          return NULL;
        }

        static PyObject *t_FieldBooleanDetector_g(t_FieldBooleanDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldBooleanDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldBooleanDetector_getDetectors(t_FieldBooleanDetector *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetectors());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_FieldBooleanDetector_init(t_FieldBooleanDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldBooleanDetector), (PyObject *) self, "init", args, 2);
        }

        static PyObject *t_FieldBooleanDetector_notCombine(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FieldNegateDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::notCombine(a0));
            return ::org::orekit::propagation::events::t_FieldNegateDetector::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "notCombine", arg);
          return NULL;
        }

        static PyObject *t_FieldBooleanDetector_orCombine(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::orekit::propagation::events::FieldEventDetector > a0((jobject) NULL);
              PyTypeObject **p0;
              FieldBooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::orCombine(a0));
                return t_FieldBooleanDetector::wrap_Object(result);
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              FieldBooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::orCombine(a0));
                return t_FieldBooleanDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "orCombine", args);
          return NULL;
        }
        static PyObject *t_FieldBooleanDetector_get__parameters_(t_FieldBooleanDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldBooleanDetector_get__detectors(t_FieldBooleanDetector *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectors());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/dfp/DfpDec.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *DfpDec::class$ = NULL;
      jmethodID *DfpDec::mids$ = NULL;
      bool DfpDec::live$ = false;

      jclass DfpDec::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/DfpDec");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_88386d9d5c982f52] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/dfp/Dfp;)V");
          mids$[mid_newInstance_7fd146fa3f090bf3] = env->getMethodID(cls, "newInstance", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_71d71a82cc65a754] = env->getMethodID(cls, "newInstance", "(Ljava/lang/String;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_63aa6f5f01162583] = env->getMethodID(cls, "newInstance", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_57809bf392b66806] = env->getMethodID(cls, "newInstance", "(B)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_81c4d69757062546] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_0fe5880f95528b86] = env->getMethodID(cls, "newInstance", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_0b19f2e563b71fc5] = env->getMethodID(cls, "newInstance", "(J)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_84679f0649faeef6] = env->getMethodID(cls, "newInstance", "(BB)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_nextAfter_63aa6f5f01162583] = env->getMethodID(cls, "nextAfter", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getDecimalDigits_570ce0828f81a2c1] = env->getMethodID(cls, "getDecimalDigits", "()I");
          mids$[mid_round_2235cd056f5a882b] = env->getMethodID(cls, "round", "(I)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DfpDec::DfpDec(const ::org::hipparchus::dfp::Dfp & a0) : ::org::hipparchus::dfp::Dfp(env->newObject(initializeClass, &mids$, mid_init$_88386d9d5c982f52, a0.this$)) {}

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_7fd146fa3f090bf3]));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_71d71a82cc65a754], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(const ::org::hipparchus::dfp::Dfp & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_63aa6f5f01162583], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jbyte a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_57809bf392b66806], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jdouble a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_81c4d69757062546], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jint a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_0fe5880f95528b86], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jlong a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_0b19f2e563b71fc5], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jbyte a0, jbyte a1) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_84679f0649faeef6], a0, a1));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::nextAfter(const ::org::hipparchus::dfp::Dfp & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_nextAfter_63aa6f5f01162583], a0.this$));
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
      static PyObject *t_DfpDec_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpDec_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DfpDec_init_(t_DfpDec *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DfpDec_newInstance(t_DfpDec *self, PyObject *args);
      static PyObject *t_DfpDec_nextAfter(t_DfpDec *self, PyObject *args);

      static PyMethodDef t_DfpDec__methods_[] = {
        DECLARE_METHOD(t_DfpDec, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpDec, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpDec, newInstance, METH_VARARGS),
        DECLARE_METHOD(t_DfpDec, nextAfter, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DfpDec)[] = {
        { Py_tp_methods, t_DfpDec__methods_ },
        { Py_tp_init, (void *) t_DfpDec_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DfpDec)[] = {
        &PY_TYPE_DEF(::org::hipparchus::dfp::Dfp),
        NULL
      };

      DEFINE_TYPE(DfpDec, t_DfpDec, DfpDec);

      void t_DfpDec::install(PyObject *module)
      {
        installType(&PY_TYPE(DfpDec), &PY_TYPE_DEF(DfpDec), module, "DfpDec", 0);
      }

      void t_DfpDec::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpDec), "class_", make_descriptor(DfpDec::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpDec), "wrapfn_", make_descriptor(t_DfpDec::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpDec), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DfpDec_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DfpDec::initializeClass, 1)))
          return NULL;
        return t_DfpDec::wrap_Object(DfpDec(((t_DfpDec *) arg)->object.this$));
      }
      static PyObject *t_DfpDec_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DfpDec::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DfpDec_init_(t_DfpDec *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        DfpDec object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          INT_CALL(object = DfpDec(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DfpDec_newInstance(t_DfpDec *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);
            OBJ_CALL(result = self->object.newInstance());
            return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jbyte a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "B", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jlong a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
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
              OBJ_CALL(result = self->object.newInstance(a0, a1));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DfpDec), (PyObject *) self, "newInstance", args, 2);
      }

      static PyObject *t_DfpDec_nextAfter(t_DfpDec *self, PyObject *args)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.nextAfter(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DfpDec), (PyObject *) self, "nextAfter", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/ParserBuilder.h"
#include "org/orekit/files/ccsds/ndm/ParserBuilder.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmParser.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmParser.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/NdmParser.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *ParserBuilder::class$ = NULL;
          jmethodID *ParserBuilder::mids$ = NULL;
          bool ParserBuilder::live$ = false;

          jclass ParserBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/ParserBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_47d99c12e4a42886] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
              mids$[mid_buildAcmParser_2aa5c19e4d5f2142] = env->getMethodID(cls, "buildAcmParser", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AcmParser;");
              mids$[mid_buildAemParser_4ea708b5faf8145e] = env->getMethodID(cls, "buildAemParser", "()Lorg/orekit/files/ccsds/ndm/adm/aem/AemParser;");
              mids$[mid_buildApmParser_c093551445ef7ba3] = env->getMethodID(cls, "buildApmParser", "()Lorg/orekit/files/ccsds/ndm/adm/apm/ApmParser;");
              mids$[mid_buildCdmParser_fc1b3c415062f7bd] = env->getMethodID(cls, "buildCdmParser", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmParser;");
              mids$[mid_buildNdmParser_2659e5d6a5121296] = env->getMethodID(cls, "buildNdmParser", "()Lorg/orekit/files/ccsds/ndm/NdmParser;");
              mids$[mid_buildOcmParser_136ce27922ee89ce] = env->getMethodID(cls, "buildOcmParser", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmParser;");
              mids$[mid_buildOemParser_fa970dd4387a80e3] = env->getMethodID(cls, "buildOemParser", "()Lorg/orekit/files/ccsds/ndm/odm/oem/OemParser;");
              mids$[mid_buildOmmParser_4f9ce280b5f9dbf3] = env->getMethodID(cls, "buildOmmParser", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmParser;");
              mids$[mid_buildOpmParser_8616f2e7f58e9a7e] = env->getMethodID(cls, "buildOpmParser", "()Lorg/orekit/files/ccsds/ndm/odm/opm/OpmParser;");
              mids$[mid_buildTdmParser_506132c9fd0c05bf] = env->getMethodID(cls, "buildTdmParser", "()Lorg/orekit/files/ccsds/ndm/tdm/TdmParser;");
              mids$[mid_getDefaultInterpolationDegree_570ce0828f81a2c1] = env->getMethodID(cls, "getDefaultInterpolationDegree", "()I");
              mids$[mid_getDefaultMass_dff5885c2c873297] = env->getMethodID(cls, "getDefaultMass", "()D");
              mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getParsedUnitsBehavior_8df14555f7513c0c] = env->getMethodID(cls, "getParsedUnitsBehavior", "()Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");
              mids$[mid_isSimpleEOP_b108b35ef48e27bd] = env->getMethodID(cls, "isSimpleEOP", "()Z");
              mids$[mid_withDefaultInterpolationDegree_2889e1c2207af806] = env->getMethodID(cls, "withDefaultInterpolationDegree", "(I)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_withDefaultMass_b81b97c003637b25] = env->getMethodID(cls, "withDefaultMass", "(D)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_withMu_b81b97c003637b25] = env->getMethodID(cls, "withMu", "(D)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_withParsedUnitsBehavior_bffeee18af4d6edb] = env->getMethodID(cls, "withParsedUnitsBehavior", "(Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_withSimpleEOP_efc8a17719217074] = env->getMethodID(cls, "withSimpleEOP", "(Z)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_create_5ea517fc57c81492] = env->getMethodID(cls, "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ParserBuilder::ParserBuilder() : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ParserBuilder::ParserBuilder(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_47d99c12e4a42886, a0.this$)) {}

          ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser ParserBuilder::buildAcmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser(env->callObjectMethod(this$, mids$[mid_buildAcmParser_2aa5c19e4d5f2142]));
          }

          ::org::orekit::files::ccsds::ndm::adm::aem::AemParser ParserBuilder::buildAemParser() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::aem::AemParser(env->callObjectMethod(this$, mids$[mid_buildAemParser_4ea708b5faf8145e]));
          }

          ::org::orekit::files::ccsds::ndm::adm::apm::ApmParser ParserBuilder::buildApmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::apm::ApmParser(env->callObjectMethod(this$, mids$[mid_buildApmParser_c093551445ef7ba3]));
          }

          ::org::orekit::files::ccsds::ndm::cdm::CdmParser ParserBuilder::buildCdmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::cdm::CdmParser(env->callObjectMethod(this$, mids$[mid_buildCdmParser_fc1b3c415062f7bd]));
          }

          ::org::orekit::files::ccsds::ndm::NdmParser ParserBuilder::buildNdmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::NdmParser(env->callObjectMethod(this$, mids$[mid_buildNdmParser_2659e5d6a5121296]));
          }

          ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser ParserBuilder::buildOcmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser(env->callObjectMethod(this$, mids$[mid_buildOcmParser_136ce27922ee89ce]));
          }

          ::org::orekit::files::ccsds::ndm::odm::oem::OemParser ParserBuilder::buildOemParser() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::oem::OemParser(env->callObjectMethod(this$, mids$[mid_buildOemParser_fa970dd4387a80e3]));
          }

          ::org::orekit::files::ccsds::ndm::odm::omm::OmmParser ParserBuilder::buildOmmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::omm::OmmParser(env->callObjectMethod(this$, mids$[mid_buildOmmParser_4f9ce280b5f9dbf3]));
          }

          ::org::orekit::files::ccsds::ndm::odm::opm::OpmParser ParserBuilder::buildOpmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::opm::OpmParser(env->callObjectMethod(this$, mids$[mid_buildOpmParser_8616f2e7f58e9a7e]));
          }

          ::org::orekit::files::ccsds::ndm::tdm::TdmParser ParserBuilder::buildTdmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::tdm::TdmParser(env->callObjectMethod(this$, mids$[mid_buildTdmParser_506132c9fd0c05bf]));
          }

          jint ParserBuilder::getDefaultInterpolationDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getDefaultInterpolationDegree_570ce0828f81a2c1]);
          }

          jdouble ParserBuilder::getDefaultMass() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDefaultMass_dff5885c2c873297]);
          }

          jdouble ParserBuilder::getMu() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
          }

          ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior ParserBuilder::getParsedUnitsBehavior() const
          {
            return ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior(env->callObjectMethod(this$, mids$[mid_getParsedUnitsBehavior_8df14555f7513c0c]));
          }

          jboolean ParserBuilder::isSimpleEOP() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimpleEOP_b108b35ef48e27bd]);
          }

          ParserBuilder ParserBuilder::withDefaultInterpolationDegree(jint a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withDefaultInterpolationDegree_2889e1c2207af806], a0));
          }

          ParserBuilder ParserBuilder::withDefaultMass(jdouble a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withDefaultMass_b81b97c003637b25], a0));
          }

          ParserBuilder ParserBuilder::withMu(jdouble a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withMu_b81b97c003637b25], a0));
          }

          ParserBuilder ParserBuilder::withParsedUnitsBehavior(const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withParsedUnitsBehavior_bffeee18af4d6edb], a0.this$));
          }

          ParserBuilder ParserBuilder::withSimpleEOP(jboolean a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withSimpleEOP_efc8a17719217074], a0));
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
          static PyObject *t_ParserBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParserBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParserBuilder_of_(t_ParserBuilder *self, PyObject *args);
          static int t_ParserBuilder_init_(t_ParserBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ParserBuilder_buildAcmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildAemParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildApmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildCdmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildNdmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildOcmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildOemParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildOmmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildOpmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildTdmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_getDefaultInterpolationDegree(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_getDefaultMass(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_getMu(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_getParsedUnitsBehavior(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_isSimpleEOP(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_withDefaultInterpolationDegree(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_withDefaultMass(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_withMu(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_withParsedUnitsBehavior(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_withSimpleEOP(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_get__defaultInterpolationDegree(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__defaultMass(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__mu(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__parsedUnitsBehavior(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__simpleEOP(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__parameters_(t_ParserBuilder *self, void *data);
          static PyGetSetDef t_ParserBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_ParserBuilder, defaultInterpolationDegree),
            DECLARE_GET_FIELD(t_ParserBuilder, defaultMass),
            DECLARE_GET_FIELD(t_ParserBuilder, mu),
            DECLARE_GET_FIELD(t_ParserBuilder, parsedUnitsBehavior),
            DECLARE_GET_FIELD(t_ParserBuilder, simpleEOP),
            DECLARE_GET_FIELD(t_ParserBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ParserBuilder__methods_[] = {
            DECLARE_METHOD(t_ParserBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParserBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParserBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_ParserBuilder, buildAcmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildAemParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildApmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildCdmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildNdmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildOcmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildOemParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildOmmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildOpmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildTdmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, getDefaultInterpolationDegree, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, getDefaultMass, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, getMu, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, getParsedUnitsBehavior, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, isSimpleEOP, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, withDefaultInterpolationDegree, METH_O),
            DECLARE_METHOD(t_ParserBuilder, withDefaultMass, METH_O),
            DECLARE_METHOD(t_ParserBuilder, withMu, METH_O),
            DECLARE_METHOD(t_ParserBuilder, withParsedUnitsBehavior, METH_O),
            DECLARE_METHOD(t_ParserBuilder, withSimpleEOP, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ParserBuilder)[] = {
            { Py_tp_methods, t_ParserBuilder__methods_ },
            { Py_tp_init, (void *) t_ParserBuilder_init_ },
            { Py_tp_getset, t_ParserBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ParserBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::AbstractBuilder),
            NULL
          };

          DEFINE_TYPE(ParserBuilder, t_ParserBuilder, ParserBuilder);
          PyObject *t_ParserBuilder::wrap_Object(const ParserBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ParserBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ParserBuilder *self = (t_ParserBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ParserBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ParserBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ParserBuilder *self = (t_ParserBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ParserBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(ParserBuilder), &PY_TYPE_DEF(ParserBuilder), module, "ParserBuilder", 0);
          }

          void t_ParserBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParserBuilder), "class_", make_descriptor(ParserBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParserBuilder), "wrapfn_", make_descriptor(t_ParserBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParserBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ParserBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ParserBuilder::initializeClass, 1)))
              return NULL;
            return t_ParserBuilder::wrap_Object(ParserBuilder(((t_ParserBuilder *) arg)->object.this$));
          }
          static PyObject *t_ParserBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ParserBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ParserBuilder_of_(t_ParserBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ParserBuilder_init_(t_ParserBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ParserBuilder object((jobject) NULL);

                INT_CALL(object = ParserBuilder());
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::PY_TYPE(ParserBuilder);
                break;
              }
             case 1:
              {
                ::org::orekit::data::DataContext a0((jobject) NULL);
                ParserBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                {
                  INT_CALL(object = ParserBuilder(a0));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::PY_TYPE(ParserBuilder);
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ParserBuilder_buildAcmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildAcmParser());
            return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildAemParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::aem::AemParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildAemParser());
            return ::org::orekit::files::ccsds::ndm::adm::aem::t_AemParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildApmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::apm::ApmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildApmParser());
            return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildCdmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::cdm::CdmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildCdmParser());
            return ::org::orekit::files::ccsds::ndm::cdm::t_CdmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildNdmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::NdmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildNdmParser());
            return ::org::orekit::files::ccsds::ndm::t_NdmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildOcmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOcmParser());
            return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildOemParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::oem::OemParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOemParser());
            return ::org::orekit::files::ccsds::ndm::odm::oem::t_OemParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildOmmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::omm::OmmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOmmParser());
            return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildOpmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::opm::OpmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOpmParser());
            return ::org::orekit::files::ccsds::ndm::odm::opm::t_OpmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildTdmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::tdm::TdmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildTdmParser());
            return ::org::orekit::files::ccsds::ndm::tdm::t_TdmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_getDefaultInterpolationDegree(t_ParserBuilder *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDefaultInterpolationDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ParserBuilder_getDefaultMass(t_ParserBuilder *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDefaultMass());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ParserBuilder_getMu(t_ParserBuilder *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMu());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ParserBuilder_getParsedUnitsBehavior(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior result((jobject) NULL);
            OBJ_CALL(result = self->object.getParsedUnitsBehavior());
            return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_isSimpleEOP(t_ParserBuilder *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isSimpleEOP());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_ParserBuilder_withDefaultInterpolationDegree(t_ParserBuilder *self, PyObject *arg)
          {
            jint a0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.withDefaultInterpolationDegree(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withDefaultInterpolationDegree", arg);
            return NULL;
          }

          static PyObject *t_ParserBuilder_withDefaultMass(t_ParserBuilder *self, PyObject *arg)
          {
            jdouble a0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.withDefaultMass(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withDefaultMass", arg);
            return NULL;
          }

          static PyObject *t_ParserBuilder_withMu(t_ParserBuilder *self, PyObject *arg)
          {
            jdouble a0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.withMu(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withMu", arg);
            return NULL;
          }

          static PyObject *t_ParserBuilder_withParsedUnitsBehavior(t_ParserBuilder *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a0((jobject) NULL);
            PyTypeObject **p0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_))
            {
              OBJ_CALL(result = self->object.withParsedUnitsBehavior(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withParsedUnitsBehavior", arg);
            return NULL;
          }

          static PyObject *t_ParserBuilder_withSimpleEOP(t_ParserBuilder *self, PyObject *arg)
          {
            jboolean a0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(result = self->object.withSimpleEOP(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withSimpleEOP", arg);
            return NULL;
          }
          static PyObject *t_ParserBuilder_get__parameters_(t_ParserBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_ParserBuilder_get__defaultInterpolationDegree(t_ParserBuilder *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDefaultInterpolationDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ParserBuilder_get__defaultMass(t_ParserBuilder *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDefaultMass());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ParserBuilder_get__mu(t_ParserBuilder *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMu());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ParserBuilder_get__parsedUnitsBehavior(t_ParserBuilder *self, void *data)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior value((jobject) NULL);
            OBJ_CALL(value = self->object.getParsedUnitsBehavior());
            return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(value);
          }

          static PyObject *t_ParserBuilder_get__simpleEOP(t_ParserBuilder *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isSimpleEOP());
            Py_RETURN_BOOL(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/FieldSimpsonIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldSimpsonIntegrator::class$ = NULL;
        jmethodID *FieldSimpsonIntegrator::mids$ = NULL;
        bool FieldSimpsonIntegrator::live$ = false;
        jint FieldSimpsonIntegrator::SIMPSON_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass FieldSimpsonIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldSimpsonIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_484998d88974267b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_init$_7dbd657fb2d34563] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_init$_b63dedd7ffb51c0c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDII)V");
            mids$[mid_doIntegrate_eba8e72a22c984ac] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            SIMPSON_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "SIMPSON_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldSimpsonIntegrator::FieldSimpsonIntegrator(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_484998d88974267b, a0.this$)) {}

        FieldSimpsonIntegrator::FieldSimpsonIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_7dbd657fb2d34563, a0.this$, a1, a2)) {}

        FieldSimpsonIntegrator::FieldSimpsonIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b63dedd7ffb51c0c, a0.this$, a1, a2, a3, a4)) {}
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
      namespace integration {
        static PyObject *t_FieldSimpsonIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldSimpsonIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldSimpsonIntegrator_of_(t_FieldSimpsonIntegrator *self, PyObject *args);
        static int t_FieldSimpsonIntegrator_init_(t_FieldSimpsonIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldSimpsonIntegrator_get__parameters_(t_FieldSimpsonIntegrator *self, void *data);
        static PyGetSetDef t_FieldSimpsonIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldSimpsonIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldSimpsonIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldSimpsonIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldSimpsonIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldSimpsonIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldSimpsonIntegrator)[] = {
          { Py_tp_methods, t_FieldSimpsonIntegrator__methods_ },
          { Py_tp_init, (void *) t_FieldSimpsonIntegrator_init_ },
          { Py_tp_getset, t_FieldSimpsonIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldSimpsonIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(FieldSimpsonIntegrator, t_FieldSimpsonIntegrator, FieldSimpsonIntegrator);
        PyObject *t_FieldSimpsonIntegrator::wrap_Object(const FieldSimpsonIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldSimpsonIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldSimpsonIntegrator *self = (t_FieldSimpsonIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldSimpsonIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldSimpsonIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldSimpsonIntegrator *self = (t_FieldSimpsonIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldSimpsonIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldSimpsonIntegrator), &PY_TYPE_DEF(FieldSimpsonIntegrator), module, "FieldSimpsonIntegrator", 0);
        }

        void t_FieldSimpsonIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSimpsonIntegrator), "class_", make_descriptor(FieldSimpsonIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSimpsonIntegrator), "wrapfn_", make_descriptor(t_FieldSimpsonIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSimpsonIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldSimpsonIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSimpsonIntegrator), "SIMPSON_MAX_ITERATIONS_COUNT", make_descriptor(FieldSimpsonIntegrator::SIMPSON_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_FieldSimpsonIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldSimpsonIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldSimpsonIntegrator::wrap_Object(FieldSimpsonIntegrator(((t_FieldSimpsonIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldSimpsonIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldSimpsonIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldSimpsonIntegrator_of_(t_FieldSimpsonIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldSimpsonIntegrator_init_(t_FieldSimpsonIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              FieldSimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldSimpsonIntegrator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              FieldSimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldSimpsonIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              FieldSimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = FieldSimpsonIntegrator(a0, a1, a2, a3, a4));
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
        static PyObject *t_FieldSimpsonIntegrator_get__parameters_(t_FieldSimpsonIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/TimeDependentLOS.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *TimeDependentLOS::class$ = NULL;
        jmethodID *TimeDependentLOS::mids$ = NULL;
        bool TimeDependentLOS::live$ = false;

        jclass TimeDependentLOS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/TimeDependentLOS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getLOS_900365c7737b1f14] = env->getMethodID(cls, "getLOS", "(ILorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLOSDerivatives_6f9e440d79870fab] = env->getMethodID(cls, "getLOSDerivatives", "(ILorg/orekit/time/AbsoluteDate;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getNbPixels_570ce0828f81a2c1] = env->getMethodID(cls, "getNbPixels", "()I");
            mids$[mid_getParametersDrivers_20f6d2b462aaef4b] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D TimeDependentLOS::getLOS(jint a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getLOS_900365c7737b1f14], a0, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D TimeDependentLOS::getLOSDerivatives(jint a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getLOSDerivatives_6f9e440d79870fab], a0, a1.this$, a2.this$));
        }

        jint TimeDependentLOS::getNbPixels() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbPixels_570ce0828f81a2c1]);
        }

        ::java::util::stream::Stream TimeDependentLOS::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_20f6d2b462aaef4b]));
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
      namespace los {
        static PyObject *t_TimeDependentLOS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeDependentLOS_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeDependentLOS_getLOS(t_TimeDependentLOS *self, PyObject *args);
        static PyObject *t_TimeDependentLOS_getLOSDerivatives(t_TimeDependentLOS *self, PyObject *args);
        static PyObject *t_TimeDependentLOS_getNbPixels(t_TimeDependentLOS *self);
        static PyObject *t_TimeDependentLOS_getParametersDrivers(t_TimeDependentLOS *self);
        static PyObject *t_TimeDependentLOS_get__nbPixels(t_TimeDependentLOS *self, void *data);
        static PyObject *t_TimeDependentLOS_get__parametersDrivers(t_TimeDependentLOS *self, void *data);
        static PyGetSetDef t_TimeDependentLOS__fields_[] = {
          DECLARE_GET_FIELD(t_TimeDependentLOS, nbPixels),
          DECLARE_GET_FIELD(t_TimeDependentLOS, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TimeDependentLOS__methods_[] = {
          DECLARE_METHOD(t_TimeDependentLOS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeDependentLOS, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeDependentLOS, getLOS, METH_VARARGS),
          DECLARE_METHOD(t_TimeDependentLOS, getLOSDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_TimeDependentLOS, getNbPixels, METH_NOARGS),
          DECLARE_METHOD(t_TimeDependentLOS, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeDependentLOS)[] = {
          { Py_tp_methods, t_TimeDependentLOS__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_TimeDependentLOS__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeDependentLOS)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TimeDependentLOS, t_TimeDependentLOS, TimeDependentLOS);

        void t_TimeDependentLOS::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeDependentLOS), &PY_TYPE_DEF(TimeDependentLOS), module, "TimeDependentLOS", 0);
        }

        void t_TimeDependentLOS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDependentLOS), "class_", make_descriptor(TimeDependentLOS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDependentLOS), "wrapfn_", make_descriptor(t_TimeDependentLOS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDependentLOS), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TimeDependentLOS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeDependentLOS::initializeClass, 1)))
            return NULL;
          return t_TimeDependentLOS::wrap_Object(TimeDependentLOS(((t_TimeDependentLOS *) arg)->object.this$));
        }
        static PyObject *t_TimeDependentLOS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeDependentLOS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TimeDependentLOS_getLOS(t_TimeDependentLOS *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "Ik", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getLOS(a0, a1));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLOS", args);
          return NULL;
        }

        static PyObject *t_TimeDependentLOS_getLOSDerivatives(t_TimeDependentLOS *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

          if (!parseArgs(args, "IkK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
          {
            OBJ_CALL(result = self->object.getLOSDerivatives(a0, a1, a2));
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLOSDerivatives", args);
          return NULL;
        }

        static PyObject *t_TimeDependentLOS_getNbPixels(t_TimeDependentLOS *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbPixels());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_TimeDependentLOS_getParametersDrivers(t_TimeDependentLOS *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_TimeDependentLOS_get__nbPixels(t_TimeDependentLOS *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbPixels());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_TimeDependentLOS_get__parametersDrivers(t_TimeDependentLOS *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
