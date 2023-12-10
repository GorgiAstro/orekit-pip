#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/SignalCode.h"
#include "org/orekit/gnss/SignalCode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *SignalCode::class$ = NULL;
      jmethodID *SignalCode::mids$ = NULL;
      bool SignalCode::live$ = false;
      SignalCode *SignalCode::A = NULL;
      SignalCode *SignalCode::B = NULL;
      SignalCode *SignalCode::C = NULL;
      SignalCode *SignalCode::CODELESS = NULL;
      SignalCode *SignalCode::D = NULL;
      SignalCode *SignalCode::E = NULL;
      SignalCode *SignalCode::I = NULL;
      SignalCode *SignalCode::L = NULL;
      SignalCode *SignalCode::M = NULL;
      SignalCode *SignalCode::N = NULL;
      SignalCode *SignalCode::P = NULL;
      SignalCode *SignalCode::Q = NULL;
      SignalCode *SignalCode::S = NULL;
      SignalCode *SignalCode::W = NULL;
      SignalCode *SignalCode::X = NULL;
      SignalCode *SignalCode::Y = NULL;
      SignalCode *SignalCode::Z = NULL;

      jclass SignalCode::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/SignalCode");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_c8172eecfba1e78b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/SignalCode;");
          mids$[mid_values_0489783da1cb39f8] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/SignalCode;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          A = new SignalCode(env->getStaticObjectField(cls, "A", "Lorg/orekit/gnss/SignalCode;"));
          B = new SignalCode(env->getStaticObjectField(cls, "B", "Lorg/orekit/gnss/SignalCode;"));
          C = new SignalCode(env->getStaticObjectField(cls, "C", "Lorg/orekit/gnss/SignalCode;"));
          CODELESS = new SignalCode(env->getStaticObjectField(cls, "CODELESS", "Lorg/orekit/gnss/SignalCode;"));
          D = new SignalCode(env->getStaticObjectField(cls, "D", "Lorg/orekit/gnss/SignalCode;"));
          E = new SignalCode(env->getStaticObjectField(cls, "E", "Lorg/orekit/gnss/SignalCode;"));
          I = new SignalCode(env->getStaticObjectField(cls, "I", "Lorg/orekit/gnss/SignalCode;"));
          L = new SignalCode(env->getStaticObjectField(cls, "L", "Lorg/orekit/gnss/SignalCode;"));
          M = new SignalCode(env->getStaticObjectField(cls, "M", "Lorg/orekit/gnss/SignalCode;"));
          N = new SignalCode(env->getStaticObjectField(cls, "N", "Lorg/orekit/gnss/SignalCode;"));
          P = new SignalCode(env->getStaticObjectField(cls, "P", "Lorg/orekit/gnss/SignalCode;"));
          Q = new SignalCode(env->getStaticObjectField(cls, "Q", "Lorg/orekit/gnss/SignalCode;"));
          S = new SignalCode(env->getStaticObjectField(cls, "S", "Lorg/orekit/gnss/SignalCode;"));
          W = new SignalCode(env->getStaticObjectField(cls, "W", "Lorg/orekit/gnss/SignalCode;"));
          X = new SignalCode(env->getStaticObjectField(cls, "X", "Lorg/orekit/gnss/SignalCode;"));
          Y = new SignalCode(env->getStaticObjectField(cls, "Y", "Lorg/orekit/gnss/SignalCode;"));
          Z = new SignalCode(env->getStaticObjectField(cls, "Z", "Lorg/orekit/gnss/SignalCode;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SignalCode SignalCode::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SignalCode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c8172eecfba1e78b], a0.this$));
      }

      JArray< SignalCode > SignalCode::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< SignalCode >(env->callStaticObjectMethod(cls, mids$[mid_values_0489783da1cb39f8]));
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
      static PyObject *t_SignalCode_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SignalCode_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SignalCode_of_(t_SignalCode *self, PyObject *args);
      static PyObject *t_SignalCode_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_SignalCode_values(PyTypeObject *type);
      static PyObject *t_SignalCode_get__parameters_(t_SignalCode *self, void *data);
      static PyGetSetDef t_SignalCode__fields_[] = {
        DECLARE_GET_FIELD(t_SignalCode, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SignalCode__methods_[] = {
        DECLARE_METHOD(t_SignalCode, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SignalCode, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SignalCode, of_, METH_VARARGS),
        DECLARE_METHOD(t_SignalCode, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SignalCode, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SignalCode)[] = {
        { Py_tp_methods, t_SignalCode__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SignalCode__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SignalCode)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(SignalCode, t_SignalCode, SignalCode);
      PyObject *t_SignalCode::wrap_Object(const SignalCode& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SignalCode::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SignalCode *self = (t_SignalCode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SignalCode::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SignalCode::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SignalCode *self = (t_SignalCode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SignalCode::install(PyObject *module)
      {
        installType(&PY_TYPE(SignalCode), &PY_TYPE_DEF(SignalCode), module, "SignalCode", 0);
      }

      void t_SignalCode::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "class_", make_descriptor(SignalCode::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "wrapfn_", make_descriptor(t_SignalCode::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "boxfn_", make_descriptor(boxObject));
        env->getClass(SignalCode::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "A", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "B", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "C", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "CODELESS", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::CODELESS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "D", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "E", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "I", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "L", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "M", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "N", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "P", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "Q", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "S", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "W", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "X", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "Y", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "Z", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::Z)));
      }

      static PyObject *t_SignalCode_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SignalCode::initializeClass, 1)))
          return NULL;
        return t_SignalCode::wrap_Object(SignalCode(((t_SignalCode *) arg)->object.this$));
      }
      static PyObject *t_SignalCode_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SignalCode::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SignalCode_of_(t_SignalCode *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_SignalCode_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        SignalCode result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::SignalCode::valueOf(a0));
          return t_SignalCode::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_SignalCode_values(PyTypeObject *type)
      {
        JArray< SignalCode > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::SignalCode::values());
        return JArray<jobject>(result.this$).wrap(t_SignalCode::wrap_jobject);
      }
      static PyObject *t_SignalCode_get__parameters_(t_SignalCode *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmWriter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Apm.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmWriter::class$ = NULL;
              jmethodID *ApmWriter::mids$ = NULL;
              bool ApmWriter::live$ = false;
              jdouble ApmWriter::CCSDS_APM_VERS = (jdouble) 0;
              jint ApmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass ApmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7cae0d769c2d9ccc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_17bd99da1e106002] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_APM_VERS = env->getStaticDoubleField(cls, "CCSDS_APM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ApmWriter::ApmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_7cae0d769c2d9ccc, a0.this$, a1.this$, a2.this$)) {}
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
          namespace adm {
            namespace apm {
              static PyObject *t_ApmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmWriter_of_(t_ApmWriter *self, PyObject *args);
              static int t_ApmWriter_init_(t_ApmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_ApmWriter_get__parameters_(t_ApmWriter *self, void *data);
              static PyGetSetDef t_ApmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_ApmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmWriter__methods_[] = {
                DECLARE_METHOD(t_ApmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmWriter)[] = {
                { Py_tp_methods, t_ApmWriter__methods_ },
                { Py_tp_init, (void *) t_ApmWriter_init_ },
                { Py_tp_getset, t_ApmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(ApmWriter, t_ApmWriter, ApmWriter);
              PyObject *t_ApmWriter::wrap_Object(const ApmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_ApmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmWriter *self = (t_ApmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_ApmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_ApmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmWriter *self = (t_ApmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_ApmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmWriter), &PY_TYPE_DEF(ApmWriter), module, "ApmWriter", 0);
              }

              void t_ApmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "class_", make_descriptor(ApmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "wrapfn_", make_descriptor(t_ApmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(ApmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "CCSDS_APM_VERS", make_descriptor(ApmWriter::CCSDS_APM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "KVN_PADDING_WIDTH", make_descriptor(ApmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_ApmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmWriter::initializeClass, 1)))
                  return NULL;
                return t_ApmWriter::wrap_Object(ApmWriter(((t_ApmWriter *) arg)->object.this$));
              }
              static PyObject *t_ApmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ApmWriter_of_(t_ApmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_ApmWriter_init_(t_ApmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                ApmWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = ApmWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::adm::apm::PY_TYPE(Apm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_ApmWriter_get__parameters_(t_ApmWriter *self, void *data)
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
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeScale.h"
#include "java/io/Serializable.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *TLE::class$ = NULL;
          jmethodID *TLE::mids$ = NULL;
          bool TLE::live$ = false;
          ::java::lang::String *TLE::B_STAR = NULL;
          jint TLE::DEFAULT = (jint) 0;
          jint TLE::SDP4 = (jint) 0;
          jint TLE::SDP8 = (jint) 0;
          jint TLE::SGP = (jint) 0;
          jint TLE::SGP4 = (jint) 0;
          jint TLE::SGP8 = (jint) 0;

          jclass TLE::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/TLE");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_96073c87872b7a97] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_d189310f42422232] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_init$_fec22c4b07c3c8c9] = env->getMethodID(cls, "<init>", "(ICIILjava/lang/String;IILorg/orekit/time/AbsoluteDate;DDDDDDDDID)V");
              mids$[mid_init$_139971ec8507b5f6] = env->getMethodID(cls, "<init>", "(ICIILjava/lang/String;IILorg/orekit/time/AbsoluteDate;DDDDDDDDIDLorg/orekit/time/TimeScale;)V");
              mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getBStar_456d9a2f64d6b28d] = env->getMethodID(cls, "getBStar", "()D");
              mids$[mid_getBStar_e912d21057defe63] = env->getMethodID(cls, "getBStar", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getClassification_29e026b9d068f1c7] = env->getMethodID(cls, "getClassification", "()C");
              mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getE_456d9a2f64d6b28d] = env->getMethodID(cls, "getE", "()D");
              mids$[mid_getElementNumber_f2f64475e4580546] = env->getMethodID(cls, "getElementNumber", "()I");
              mids$[mid_getEphemerisType_f2f64475e4580546] = env->getMethodID(cls, "getEphemerisType", "()I");
              mids$[mid_getI_456d9a2f64d6b28d] = env->getMethodID(cls, "getI", "()D");
              mids$[mid_getLaunchNumber_f2f64475e4580546] = env->getMethodID(cls, "getLaunchNumber", "()I");
              mids$[mid_getLaunchPiece_0090f7797e403f43] = env->getMethodID(cls, "getLaunchPiece", "()Ljava/lang/String;");
              mids$[mid_getLaunchYear_f2f64475e4580546] = env->getMethodID(cls, "getLaunchYear", "()I");
              mids$[mid_getLine1_0090f7797e403f43] = env->getMethodID(cls, "getLine1", "()Ljava/lang/String;");
              mids$[mid_getLine2_0090f7797e403f43] = env->getMethodID(cls, "getLine2", "()Ljava/lang/String;");
              mids$[mid_getMeanAnomaly_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeanAnomaly", "()D");
              mids$[mid_getMeanMotion_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeanMotion", "()D");
              mids$[mid_getMeanMotionFirstDerivative_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeanMotionFirstDerivative", "()D");
              mids$[mid_getMeanMotionSecondDerivative_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeanMotionSecondDerivative", "()D");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getPerigeeArgument_456d9a2f64d6b28d] = env->getMethodID(cls, "getPerigeeArgument", "()D");
              mids$[mid_getRaan_456d9a2f64d6b28d] = env->getMethodID(cls, "getRaan", "()D");
              mids$[mid_getRevolutionNumberAtEpoch_f2f64475e4580546] = env->getMethodID(cls, "getRevolutionNumberAtEpoch", "()I");
              mids$[mid_getSatelliteNumber_f2f64475e4580546] = env->getMethodID(cls, "getSatelliteNumber", "()I");
              mids$[mid_getUtc_63ac10047983bd43] = env->getMethodID(cls, "getUtc", "()Lorg/orekit/time/TimeScale;");
              mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isFormatOK_5e4279f3952110c4] = env->getStaticMethodID(cls, "isFormatOK", "(Ljava/lang/String;Ljava/lang/String;)Z");
              mids$[mid_stateToTLE_fbd75895746d88af] = env->getStaticMethodID(cls, "stateToTLE", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;)Lorg/orekit/propagation/analytical/tle/TLE;");
              mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              B_STAR = new ::java::lang::String(env->getStaticObjectField(cls, "B_STAR", "Ljava/lang/String;"));
              DEFAULT = env->getStaticIntField(cls, "DEFAULT");
              SDP4 = env->getStaticIntField(cls, "SDP4");
              SDP8 = env->getStaticIntField(cls, "SDP8");
              SGP = env->getStaticIntField(cls, "SGP");
              SGP4 = env->getStaticIntField(cls, "SGP4");
              SGP8 = env->getStaticIntField(cls, "SGP8");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TLE::TLE(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_96073c87872b7a97, a0.this$, a1.this$)) {}

          TLE::TLE(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d189310f42422232, a0.this$, a1.this$, a2.this$)) {}

          TLE::TLE(jint a0, jchar a1, jint a2, jint a3, const ::java::lang::String & a4, jint a5, jint a6, const ::org::orekit::time::AbsoluteDate & a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14, jdouble a15, jint a16, jdouble a17) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fec22c4b07c3c8c9, a0, a1, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17)) {}

          TLE::TLE(jint a0, jchar a1, jint a2, jint a3, const ::java::lang::String & a4, jint a5, jint a6, const ::org::orekit::time::AbsoluteDate & a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14, jdouble a15, jint a16, jdouble a17, const ::org::orekit::time::TimeScale & a18) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_139971ec8507b5f6, a0, a1, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18.this$)) {}

          jboolean TLE::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
          }

          jdouble TLE::getBStar() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBStar_456d9a2f64d6b28d]);
          }

          jdouble TLE::getBStar(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBStar_e912d21057defe63], a0.this$);
          }

          jchar TLE::getClassification() const
          {
            return env->callCharMethod(this$, mids$[mid_getClassification_29e026b9d068f1c7]);
          }

          ::org::orekit::time::AbsoluteDate TLE::getDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
          }

          jdouble TLE::getE() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getE_456d9a2f64d6b28d]);
          }

          jint TLE::getElementNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getElementNumber_f2f64475e4580546]);
          }

          jint TLE::getEphemerisType() const
          {
            return env->callIntMethod(this$, mids$[mid_getEphemerisType_f2f64475e4580546]);
          }

          jdouble TLE::getI() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getI_456d9a2f64d6b28d]);
          }

          jint TLE::getLaunchNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getLaunchNumber_f2f64475e4580546]);
          }

          ::java::lang::String TLE::getLaunchPiece() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaunchPiece_0090f7797e403f43]));
          }

          jint TLE::getLaunchYear() const
          {
            return env->callIntMethod(this$, mids$[mid_getLaunchYear_f2f64475e4580546]);
          }

          ::java::lang::String TLE::getLine1() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLine1_0090f7797e403f43]));
          }

          ::java::lang::String TLE::getLine2() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLine2_0090f7797e403f43]));
          }

          jdouble TLE::getMeanAnomaly() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanAnomaly_456d9a2f64d6b28d]);
          }

          jdouble TLE::getMeanMotion() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_456d9a2f64d6b28d]);
          }

          jdouble TLE::getMeanMotionFirstDerivative() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanMotionFirstDerivative_456d9a2f64d6b28d]);
          }

          jdouble TLE::getMeanMotionSecondDerivative() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanMotionSecondDerivative_456d9a2f64d6b28d]);
          }

          ::java::util::List TLE::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          jdouble TLE::getPerigeeArgument() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPerigeeArgument_456d9a2f64d6b28d]);
          }

          jdouble TLE::getRaan() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRaan_456d9a2f64d6b28d]);
          }

          jint TLE::getRevolutionNumberAtEpoch() const
          {
            return env->callIntMethod(this$, mids$[mid_getRevolutionNumberAtEpoch_f2f64475e4580546]);
          }

          jint TLE::getSatelliteNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getSatelliteNumber_f2f64475e4580546]);
          }

          ::org::orekit::time::TimeScale TLE::getUtc() const
          {
            return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getUtc_63ac10047983bd43]));
          }

          jint TLE::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
          }

          jboolean TLE::isFormatOK(const ::java::lang::String & a0, const ::java::lang::String & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticBooleanMethod(cls, mids$[mid_isFormatOK_5e4279f3952110c4], a0.this$, a1.this$);
          }

          TLE TLE::stateToTLE(const ::org::orekit::propagation::SpacecraftState & a0, const TLE & a1, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return TLE(env->callStaticObjectMethod(cls, mids$[mid_stateToTLE_fbd75895746d88af], a0.this$, a1.this$, a2.this$));
          }

          ::java::lang::String TLE::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
        namespace tle {
          static PyObject *t_TLE_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TLE_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TLE_init_(t_TLE *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TLE_equals(t_TLE *self, PyObject *args);
          static PyObject *t_TLE_getBStar(t_TLE *self, PyObject *args);
          static PyObject *t_TLE_getClassification(t_TLE *self);
          static PyObject *t_TLE_getDate(t_TLE *self);
          static PyObject *t_TLE_getE(t_TLE *self);
          static PyObject *t_TLE_getElementNumber(t_TLE *self);
          static PyObject *t_TLE_getEphemerisType(t_TLE *self);
          static PyObject *t_TLE_getI(t_TLE *self);
          static PyObject *t_TLE_getLaunchNumber(t_TLE *self);
          static PyObject *t_TLE_getLaunchPiece(t_TLE *self);
          static PyObject *t_TLE_getLaunchYear(t_TLE *self);
          static PyObject *t_TLE_getLine1(t_TLE *self);
          static PyObject *t_TLE_getLine2(t_TLE *self);
          static PyObject *t_TLE_getMeanAnomaly(t_TLE *self);
          static PyObject *t_TLE_getMeanMotion(t_TLE *self);
          static PyObject *t_TLE_getMeanMotionFirstDerivative(t_TLE *self);
          static PyObject *t_TLE_getMeanMotionSecondDerivative(t_TLE *self);
          static PyObject *t_TLE_getParametersDrivers(t_TLE *self);
          static PyObject *t_TLE_getPerigeeArgument(t_TLE *self);
          static PyObject *t_TLE_getRaan(t_TLE *self);
          static PyObject *t_TLE_getRevolutionNumberAtEpoch(t_TLE *self);
          static PyObject *t_TLE_getSatelliteNumber(t_TLE *self);
          static PyObject *t_TLE_getUtc(t_TLE *self);
          static PyObject *t_TLE_hashCode(t_TLE *self, PyObject *args);
          static PyObject *t_TLE_isFormatOK(PyTypeObject *type, PyObject *args);
          static PyObject *t_TLE_stateToTLE(PyTypeObject *type, PyObject *args);
          static PyObject *t_TLE_toString(t_TLE *self, PyObject *args);
          static PyObject *t_TLE_get__bStar(t_TLE *self, void *data);
          static PyObject *t_TLE_get__classification(t_TLE *self, void *data);
          static PyObject *t_TLE_get__date(t_TLE *self, void *data);
          static PyObject *t_TLE_get__e(t_TLE *self, void *data);
          static PyObject *t_TLE_get__elementNumber(t_TLE *self, void *data);
          static PyObject *t_TLE_get__ephemerisType(t_TLE *self, void *data);
          static PyObject *t_TLE_get__i(t_TLE *self, void *data);
          static PyObject *t_TLE_get__launchNumber(t_TLE *self, void *data);
          static PyObject *t_TLE_get__launchPiece(t_TLE *self, void *data);
          static PyObject *t_TLE_get__launchYear(t_TLE *self, void *data);
          static PyObject *t_TLE_get__line1(t_TLE *self, void *data);
          static PyObject *t_TLE_get__line2(t_TLE *self, void *data);
          static PyObject *t_TLE_get__meanAnomaly(t_TLE *self, void *data);
          static PyObject *t_TLE_get__meanMotion(t_TLE *self, void *data);
          static PyObject *t_TLE_get__meanMotionFirstDerivative(t_TLE *self, void *data);
          static PyObject *t_TLE_get__meanMotionSecondDerivative(t_TLE *self, void *data);
          static PyObject *t_TLE_get__parametersDrivers(t_TLE *self, void *data);
          static PyObject *t_TLE_get__perigeeArgument(t_TLE *self, void *data);
          static PyObject *t_TLE_get__raan(t_TLE *self, void *data);
          static PyObject *t_TLE_get__revolutionNumberAtEpoch(t_TLE *self, void *data);
          static PyObject *t_TLE_get__satelliteNumber(t_TLE *self, void *data);
          static PyObject *t_TLE_get__utc(t_TLE *self, void *data);
          static PyGetSetDef t_TLE__fields_[] = {
            DECLARE_GET_FIELD(t_TLE, bStar),
            DECLARE_GET_FIELD(t_TLE, classification),
            DECLARE_GET_FIELD(t_TLE, date),
            DECLARE_GET_FIELD(t_TLE, e),
            DECLARE_GET_FIELD(t_TLE, elementNumber),
            DECLARE_GET_FIELD(t_TLE, ephemerisType),
            DECLARE_GET_FIELD(t_TLE, i),
            DECLARE_GET_FIELD(t_TLE, launchNumber),
            DECLARE_GET_FIELD(t_TLE, launchPiece),
            DECLARE_GET_FIELD(t_TLE, launchYear),
            DECLARE_GET_FIELD(t_TLE, line1),
            DECLARE_GET_FIELD(t_TLE, line2),
            DECLARE_GET_FIELD(t_TLE, meanAnomaly),
            DECLARE_GET_FIELD(t_TLE, meanMotion),
            DECLARE_GET_FIELD(t_TLE, meanMotionFirstDerivative),
            DECLARE_GET_FIELD(t_TLE, meanMotionSecondDerivative),
            DECLARE_GET_FIELD(t_TLE, parametersDrivers),
            DECLARE_GET_FIELD(t_TLE, perigeeArgument),
            DECLARE_GET_FIELD(t_TLE, raan),
            DECLARE_GET_FIELD(t_TLE, revolutionNumberAtEpoch),
            DECLARE_GET_FIELD(t_TLE, satelliteNumber),
            DECLARE_GET_FIELD(t_TLE, utc),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TLE__methods_[] = {
            DECLARE_METHOD(t_TLE, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLE, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLE, equals, METH_VARARGS),
            DECLARE_METHOD(t_TLE, getBStar, METH_VARARGS),
            DECLARE_METHOD(t_TLE, getClassification, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getDate, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getE, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getElementNumber, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getEphemerisType, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getI, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLaunchNumber, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLaunchPiece, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLaunchYear, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLine1, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLine2, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getMeanAnomaly, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getMeanMotion, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getMeanMotionFirstDerivative, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getMeanMotionSecondDerivative, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getPerigeeArgument, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getRaan, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getRevolutionNumberAtEpoch, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getSatelliteNumber, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getUtc, METH_NOARGS),
            DECLARE_METHOD(t_TLE, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_TLE, isFormatOK, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TLE, stateToTLE, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TLE, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TLE)[] = {
            { Py_tp_methods, t_TLE__methods_ },
            { Py_tp_init, (void *) t_TLE_init_ },
            { Py_tp_getset, t_TLE__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TLE)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TLE, t_TLE, TLE);

          void t_TLE::install(PyObject *module)
          {
            installType(&PY_TYPE(TLE), &PY_TYPE_DEF(TLE), module, "TLE", 0);
          }

          void t_TLE::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "class_", make_descriptor(TLE::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "wrapfn_", make_descriptor(t_TLE::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "boxfn_", make_descriptor(boxObject));
            env->getClass(TLE::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "B_STAR", make_descriptor(j2p(*TLE::B_STAR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "DEFAULT", make_descriptor(TLE::DEFAULT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SDP4", make_descriptor(TLE::SDP4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SDP8", make_descriptor(TLE::SDP8));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SGP", make_descriptor(TLE::SGP));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SGP4", make_descriptor(TLE::SGP4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SGP8", make_descriptor(TLE::SGP8));
          }

          static PyObject *t_TLE_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TLE::initializeClass, 1)))
              return NULL;
            return t_TLE::wrap_Object(TLE(((t_TLE *) arg)->object.this$));
          }
          static PyObject *t_TLE_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TLE::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TLE_init_(t_TLE *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                TLE object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = TLE(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                TLE object((jobject) NULL);

                if (!parseArgs(args, "ssk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = TLE(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 18:
              {
                jint a0;
                jchar a1;
                jint a2;
                jint a3;
                ::java::lang::String a4((jobject) NULL);
                jint a5;
                jint a6;
                ::org::orekit::time::AbsoluteDate a7((jobject) NULL);
                jdouble a8;
                jdouble a9;
                jdouble a10;
                jdouble a11;
                jdouble a12;
                jdouble a13;
                jdouble a14;
                jdouble a15;
                jint a16;
                jdouble a17;
                TLE object((jobject) NULL);

                if (!parseArgs(args, "ICIIsIIkDDDDDDDDID", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17))
                {
                  INT_CALL(object = TLE(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 19:
              {
                jint a0;
                jchar a1;
                jint a2;
                jint a3;
                ::java::lang::String a4((jobject) NULL);
                jint a5;
                jint a6;
                ::org::orekit::time::AbsoluteDate a7((jobject) NULL);
                jdouble a8;
                jdouble a9;
                jdouble a10;
                jdouble a11;
                jdouble a12;
                jdouble a13;
                jdouble a14;
                jdouble a15;
                jint a16;
                jdouble a17;
                ::org::orekit::time::TimeScale a18((jobject) NULL);
                TLE object((jobject) NULL);

                if (!parseArgs(args, "ICIIsIIkDDDDDDDDIDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17, &a18))
                {
                  INT_CALL(object = TLE(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18));
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

          static PyObject *t_TLE_equals(t_TLE *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(TLE), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_TLE_getBStar(t_TLE *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBStar());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getBStar(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getBStar", args);
            return NULL;
          }

          static PyObject *t_TLE_getClassification(t_TLE *self)
          {
            jchar result;
            OBJ_CALL(result = self->object.getClassification());
            return c2p(result);
          }

          static PyObject *t_TLE_getDate(t_TLE *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_TLE_getE(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getE());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getElementNumber(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getElementNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getEphemerisType(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getEphemerisType());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getI(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getI());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getLaunchNumber(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLaunchNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getLaunchPiece(t_TLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLaunchPiece());
            return j2p(result);
          }

          static PyObject *t_TLE_getLaunchYear(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLaunchYear());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getLine1(t_TLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine1());
            return j2p(result);
          }

          static PyObject *t_TLE_getLine2(t_TLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine2());
            return j2p(result);
          }

          static PyObject *t_TLE_getMeanAnomaly(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMeanAnomaly());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getMeanMotion(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMeanMotion());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getMeanMotionFirstDerivative(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMeanMotionFirstDerivative());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getMeanMotionSecondDerivative(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMeanMotionSecondDerivative());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getParametersDrivers(t_TLE *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TLE_getPerigeeArgument(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPerigeeArgument());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getRaan(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getRaan());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getRevolutionNumberAtEpoch(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getRevolutionNumberAtEpoch());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getSatelliteNumber(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSatelliteNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getUtc(t_TLE *self)
          {
            ::org::orekit::time::TimeScale result((jobject) NULL);
            OBJ_CALL(result = self->object.getUtc());
            return ::org::orekit::time::t_TimeScale::wrap_Object(result);
          }

          static PyObject *t_TLE_hashCode(t_TLE *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(TLE), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_TLE_isFormatOK(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLE::isFormatOK(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError(type, "isFormatOK", args);
            return NULL;
          }

          static PyObject *t_TLE_stateToTLE(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            TLE a1((jobject) NULL);
            ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm a2((jobject) NULL);
            TLE result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::propagation::SpacecraftState::initializeClass, TLE::initializeClass, ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLE::stateToTLE(a0, a1, a2));
              return t_TLE::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "stateToTLE", args);
            return NULL;
          }

          static PyObject *t_TLE_toString(t_TLE *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(TLE), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_TLE_get__bStar(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBStar());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__classification(t_TLE *self, void *data)
          {
            jchar value;
            OBJ_CALL(value = self->object.getClassification());
            return c2p(value);
          }

          static PyObject *t_TLE_get__date(t_TLE *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_TLE_get__e(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getE());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__elementNumber(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getElementNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__ephemerisType(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getEphemerisType());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__i(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getI());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__launchNumber(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLaunchNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__launchPiece(t_TLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLaunchPiece());
            return j2p(value);
          }

          static PyObject *t_TLE_get__launchYear(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLaunchYear());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__line1(t_TLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine1());
            return j2p(value);
          }

          static PyObject *t_TLE_get__line2(t_TLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine2());
            return j2p(value);
          }

          static PyObject *t_TLE_get__meanAnomaly(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMeanAnomaly());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__meanMotion(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMeanMotion());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__meanMotionFirstDerivative(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMeanMotionFirstDerivative());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__meanMotionSecondDerivative(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMeanMotionSecondDerivative());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__parametersDrivers(t_TLE *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_TLE_get__perigeeArgument(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPerigeeArgument());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__raan(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getRaan());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__revolutionNumberAtEpoch(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getRevolutionNumberAtEpoch());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__satelliteNumber(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSatelliteNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__utc(t_TLE *self, void *data)
          {
            ::org::orekit::time::TimeScale value((jobject) NULL);
            OBJ_CALL(value = self->object.getUtc());
            return ::org::orekit::time::t_TimeScale::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/InterSatellitesRangeBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *InterSatellitesRangeBuilder::class$ = NULL;
          jmethodID *InterSatellitesRangeBuilder::mids$ = NULL;
          bool InterSatellitesRangeBuilder::live$ = false;

          jclass InterSatellitesRangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/InterSatellitesRangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_cb2cbc2223ddd49f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/estimation/measurements/ObservableSatellite;ZDD)V");
              mids$[mid_build_e6a480b17d4c31c2] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/InterSatellitesRange;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesRangeBuilder::InterSatellitesRangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::ObservableSatellite & a1, const ::org::orekit::estimation::measurements::ObservableSatellite & a2, jboolean a3, jdouble a4, jdouble a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_cb2cbc2223ddd49f, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

          ::org::orekit::estimation::measurements::InterSatellitesRange InterSatellitesRangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::InterSatellitesRange(env->callObjectMethod(this$, mids$[mid_build_e6a480b17d4c31c2], a0.this$, a1.this$));
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
          static PyObject *t_InterSatellitesRangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesRangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesRangeBuilder_of_(t_InterSatellitesRangeBuilder *self, PyObject *args);
          static int t_InterSatellitesRangeBuilder_init_(t_InterSatellitesRangeBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesRangeBuilder_build(t_InterSatellitesRangeBuilder *self, PyObject *args);
          static PyObject *t_InterSatellitesRangeBuilder_get__parameters_(t_InterSatellitesRangeBuilder *self, void *data);
          static PyGetSetDef t_InterSatellitesRangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesRangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesRangeBuilder__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesRangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesRangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesRangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_InterSatellitesRangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesRangeBuilder)[] = {
            { Py_tp_methods, t_InterSatellitesRangeBuilder__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesRangeBuilder_init_ },
            { Py_tp_getset, t_InterSatellitesRangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesRangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(InterSatellitesRangeBuilder, t_InterSatellitesRangeBuilder, InterSatellitesRangeBuilder);
          PyObject *t_InterSatellitesRangeBuilder::wrap_Object(const InterSatellitesRangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesRangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesRangeBuilder *self = (t_InterSatellitesRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_InterSatellitesRangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesRangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesRangeBuilder *self = (t_InterSatellitesRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_InterSatellitesRangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesRangeBuilder), &PY_TYPE_DEF(InterSatellitesRangeBuilder), module, "InterSatellitesRangeBuilder", 0);
          }

          void t_InterSatellitesRangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRangeBuilder), "class_", make_descriptor(InterSatellitesRangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRangeBuilder), "wrapfn_", make_descriptor(t_InterSatellitesRangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesRangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesRangeBuilder::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesRangeBuilder::wrap_Object(InterSatellitesRangeBuilder(((t_InterSatellitesRangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesRangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesRangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_InterSatellitesRangeBuilder_of_(t_InterSatellitesRangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_InterSatellitesRangeBuilder_init_(t_InterSatellitesRangeBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a1((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a2((jobject) NULL);
            jboolean a3;
            jdouble a4;
            jdouble a5;
            InterSatellitesRangeBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkZDD", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = InterSatellitesRangeBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(InterSatellitesRange);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_InterSatellitesRangeBuilder_build(t_InterSatellitesRangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::InterSatellitesRange result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_InterSatellitesRange::wrap_Object(result);
            }

            return callSuper(PY_TYPE(InterSatellitesRangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_InterSatellitesRangeBuilder_get__parameters_(t_InterSatellitesRangeBuilder *self, void *data)
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
#include "org/orekit/propagation/analytical/FieldEcksteinHechlerPropagator.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/util/List.h"
#include "org/orekit/orbits/FieldCartesianOrbit.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/orbits/FieldCircularOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *FieldEcksteinHechlerPropagator::class$ = NULL;
        jmethodID *FieldEcksteinHechlerPropagator::mids$ = NULL;
        bool FieldEcksteinHechlerPropagator::live$ = false;

        jclass FieldEcksteinHechlerPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/FieldEcksteinHechlerPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_caed22740809c762] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_e92583cff477cccf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_be4d539c82934311] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_acf4046bd0d094ed] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_3114878c93964f63] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_e0c585d0fbe5de14] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_8d8b7520545d3327] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;)V");
            mids$[mid_init$_8d7c396ebe6ad713] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_9699e1e4e93262a7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_654e1af68d0dc653] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_d88346aabaf42630] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_ee94ff43d4b7d233] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_457b11c33cfcd0ff] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDDLorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_07035391a455b92e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDDLorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_computeMeanOrbit_89c6f483cd6215a2] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;)Lorg/orekit/orbits/FieldCircularOrbit;");
            mids$[mid_computeMeanOrbit_7afa3e3a1da75579] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;DI)Lorg/orekit/orbits/FieldCircularOrbit;");
            mids$[mid_computeMeanOrbit_21badc3c0a40fb1c] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;DDDDDDDDI)Lorg/orekit/orbits/FieldCircularOrbit;");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_propagateOrbit_c848e8106d3cd1a3] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldCartesianOrbit;");
            mids$[mid_resetInitialState_52154b94d63e10ed] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_resetInitialState_7e8354b496e2a6c1] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_resetInitialState_24c065641ce262aa] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_getMass_7bc0fd76ee915b72] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_resetIntermediateState_b2aaf6a3ad1afcea] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;ZDI)V");
            mids$[mid_resetIntermediateState_c76342d42407aa3d] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_caed22740809c762, a0.this$, a1.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::propagation::PropagationType & a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_e92583cff477cccf, a0.this$, a1.this$, a2.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_be4d539c82934311, a0.this$, a1.this$, a2.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_acf4046bd0d094ed, a0.this$, a1.this$, a2.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_3114878c93964f63, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::propagation::PropagationType & a4) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_e0c585d0fbe5de14, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_8d8b7520545d3327, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, const ::org::orekit::propagation::PropagationType & a5) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_8d7c396ebe6ad713, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, jdouble a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_9699e1e4e93262a7, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_654e1af68d0dc653, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_d88346aabaf42630, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_ee94ff43d4b7d233, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, const ::org::orekit::propagation::PropagationType & a10) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_457b11c33cfcd0ff, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9, a10.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, const ::org::orekit::propagation::PropagationType & a10, jdouble a11, jint a12) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_07035391a455b92e, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9, a10.this$, a11, a12)) {}

        ::org::orekit::orbits::FieldCircularOrbit FieldEcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldCircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_89c6f483cd6215a2], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::orbits::FieldCircularOrbit FieldEcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3, jint a4)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldCircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_7afa3e3a1da75579], a0.this$, a1.this$, a2.this$, a3, a4));
        }

        ::org::orekit::orbits::FieldCircularOrbit FieldEcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jint a9)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldCircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_21badc3c0a40fb1c], a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9));
        }

        ::java::util::List FieldEcksteinHechlerPropagator::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
        }

        ::org::orekit::orbits::FieldCartesianOrbit FieldEcksteinHechlerPropagator::propagateOrbit(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::orekit::orbits::FieldCartesianOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_c848e8106d3cd1a3], a0.this$, a1.this$));
        }

        void FieldEcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_52154b94d63e10ed], a0.this$);
        }

        void FieldEcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_7e8354b496e2a6c1], a0.this$, a1.this$);
        }

        void FieldEcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1, jdouble a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_24c065641ce262aa], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_FieldEcksteinHechlerPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEcksteinHechlerPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEcksteinHechlerPropagator_of_(t_FieldEcksteinHechlerPropagator *self, PyObject *args);
        static int t_FieldEcksteinHechlerPropagator_init_(t_FieldEcksteinHechlerPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEcksteinHechlerPropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldEcksteinHechlerPropagator_getParametersDrivers(t_FieldEcksteinHechlerPropagator *self, PyObject *args);
        static PyObject *t_FieldEcksteinHechlerPropagator_propagateOrbit(t_FieldEcksteinHechlerPropagator *self, PyObject *args);
        static PyObject *t_FieldEcksteinHechlerPropagator_resetInitialState(t_FieldEcksteinHechlerPropagator *self, PyObject *args);
        static PyObject *t_FieldEcksteinHechlerPropagator_get__parametersDrivers(t_FieldEcksteinHechlerPropagator *self, void *data);
        static PyObject *t_FieldEcksteinHechlerPropagator_get__parameters_(t_FieldEcksteinHechlerPropagator *self, void *data);
        static PyGetSetDef t_FieldEcksteinHechlerPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEcksteinHechlerPropagator, parametersDrivers),
          DECLARE_GET_FIELD(t_FieldEcksteinHechlerPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEcksteinHechlerPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, computeMeanOrbit, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, propagateOrbit, METH_VARARGS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEcksteinHechlerPropagator)[] = {
          { Py_tp_methods, t_FieldEcksteinHechlerPropagator__methods_ },
          { Py_tp_init, (void *) t_FieldEcksteinHechlerPropagator_init_ },
          { Py_tp_getset, t_FieldEcksteinHechlerPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEcksteinHechlerPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(FieldEcksteinHechlerPropagator, t_FieldEcksteinHechlerPropagator, FieldEcksteinHechlerPropagator);
        PyObject *t_FieldEcksteinHechlerPropagator::wrap_Object(const FieldEcksteinHechlerPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEcksteinHechlerPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEcksteinHechlerPropagator *self = (t_FieldEcksteinHechlerPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEcksteinHechlerPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEcksteinHechlerPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEcksteinHechlerPropagator *self = (t_FieldEcksteinHechlerPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEcksteinHechlerPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEcksteinHechlerPropagator), &PY_TYPE_DEF(FieldEcksteinHechlerPropagator), module, "FieldEcksteinHechlerPropagator", 0);
        }

        void t_FieldEcksteinHechlerPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEcksteinHechlerPropagator), "class_", make_descriptor(FieldEcksteinHechlerPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEcksteinHechlerPropagator), "wrapfn_", make_descriptor(t_FieldEcksteinHechlerPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEcksteinHechlerPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEcksteinHechlerPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldEcksteinHechlerPropagator::wrap_Object(FieldEcksteinHechlerPropagator(((t_FieldEcksteinHechlerPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldEcksteinHechlerPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEcksteinHechlerPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_of_(t_FieldEcksteinHechlerPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEcksteinHechlerPropagator_init_(t_FieldEcksteinHechlerPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::propagation::PropagationType a2((jobject) NULL);
              PyTypeObject **p2;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "Kkk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              ::org::orekit::propagation::PropagationType a5((jobject) NULL);
              PyTypeObject **p5;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkkK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &a5, &p5, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 9:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KKDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
            goto err;
           case 11:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              ::org::orekit::propagation::PropagationType a10((jobject) NULL);
              PyTypeObject **p10;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDDK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9, &a10, &p10, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                self->object = object;
                break;
              }
            }
            goto err;
           case 13:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              ::org::orekit::propagation::PropagationType a10((jobject) NULL);
              PyTypeObject **p10;
              jdouble a11;
              jint a12;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDDKDI", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9, &a10, &p10, ::org::orekit::propagation::t_PropagationType::parameters_, &a11, &a12))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_FieldEcksteinHechlerPropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              ::org::orekit::orbits::FieldCircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "Kkk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldEcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2));
                return ::org::orekit::orbits::t_FieldCircularOrbit::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              jint a4;
              ::org::orekit::orbits::FieldCircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "KkkDI", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldEcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2, a3, a4));
                return ::org::orekit::orbits::t_FieldCircularOrbit::wrap_Object(result);
              }
            }
            break;
           case 10:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jint a9;
              ::org::orekit::orbits::FieldCircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "KDDDDDDDDI", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldEcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                return ::org::orekit::orbits::t_FieldCircularOrbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "computeMeanOrbit", args);
          return NULL;
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_getParametersDrivers(t_FieldEcksteinHechlerPropagator *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(FieldEcksteinHechlerPropagator), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_propagateOrbit(t_FieldEcksteinHechlerPropagator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::orbits::FieldCartesianOrbit result((jobject) NULL);

          if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.propagateOrbit(a0, a1));
            return ::org::orekit::orbits::t_FieldCartesianOrbit::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "propagateOrbit", args);
          return NULL;
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_resetInitialState(t_FieldEcksteinHechlerPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
              {
                OBJ_CALL(self->object.resetInitialState(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              jint a3;

              if (!parseArgs(args, "KKDI", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &a3))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          return callSuper(PY_TYPE(FieldEcksteinHechlerPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }
        static PyObject *t_FieldEcksteinHechlerPropagator_get__parameters_(t_FieldEcksteinHechlerPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_get__parametersDrivers(t_FieldEcksteinHechlerPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PropagatorBuilder::class$ = NULL;
        jmethodID *PropagatorBuilder::mids$ = NULL;
        bool PropagatorBuilder::live$ = false;

        jclass PropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildLeastSquaresModel_31c4fcde5bc19fc3] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_d397e255f9fb16e6] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_6e20699935a1c88e] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;");
            mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialOrbitDate_aaa854c403487cf3] = env->getMethodID(cls, "getInitialOrbitDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getOrbitalParametersDrivers_eb9e6df280c6daa0] = env->getMethodID(cls, "getOrbitalParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getPropagationParametersDrivers_eb9e6df280c6daa0] = env->getMethodID(cls, "getPropagationParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getSelectedNormalizedParameters_7cdc325af0834901] = env->getMethodID(cls, "getSelectedNormalizedParameters", "()[D");
            mids$[mid_resetOrbit_e5b8a6a44355183e] = env->getMethodID(cls, "resetOrbit", "(Lorg/orekit/orbits/Orbit;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel PropagatorBuilder::buildLeastSquaresModel(const JArray< PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_31c4fcde5bc19fc3], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::Propagator PropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_d397e255f9fb16e6], a0.this$));
        }

        PropagatorBuilder PropagatorBuilder::copy() const
        {
          return PropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_6e20699935a1c88e]));
        }

        ::org::orekit::frames::Frame PropagatorBuilder::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
        }

        ::org::orekit::time::AbsoluteDate PropagatorBuilder::getInitialOrbitDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getInitialOrbitDate_aaa854c403487cf3]));
        }

        jdouble PropagatorBuilder::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
        }

        ::org::orekit::orbits::OrbitType PropagatorBuilder::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_63ea5cd020bf7bf1]));
        }

        ::org::orekit::utils::ParameterDriversList PropagatorBuilder::getOrbitalParametersDrivers() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getOrbitalParametersDrivers_eb9e6df280c6daa0]));
        }

        ::org::orekit::orbits::PositionAngleType PropagatorBuilder::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_2571e8fe1cede425]));
        }

        ::org::orekit::utils::ParameterDriversList PropagatorBuilder::getPropagationParametersDrivers() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getPropagationParametersDrivers_eb9e6df280c6daa0]));
        }

        JArray< jdouble > PropagatorBuilder::getSelectedNormalizedParameters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSelectedNormalizedParameters_7cdc325af0834901]));
        }

        void PropagatorBuilder::resetOrbit(const ::org::orekit::orbits::Orbit & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetOrbit_e5b8a6a44355183e], a0.this$);
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
      namespace conversion {
        static PyObject *t_PropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PropagatorBuilder_buildLeastSquaresModel(t_PropagatorBuilder *self, PyObject *args);
        static PyObject *t_PropagatorBuilder_buildPropagator(t_PropagatorBuilder *self, PyObject *arg);
        static PyObject *t_PropagatorBuilder_copy(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getFrame(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getInitialOrbitDate(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getMu(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getOrbitType(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getOrbitalParametersDrivers(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getPositionAngleType(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getPropagationParametersDrivers(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getSelectedNormalizedParameters(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_resetOrbit(t_PropagatorBuilder *self, PyObject *arg);
        static PyObject *t_PropagatorBuilder_get__frame(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__initialOrbitDate(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__mu(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__orbitType(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__orbitalParametersDrivers(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__positionAngleType(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__propagationParametersDrivers(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__selectedNormalizedParameters(t_PropagatorBuilder *self, void *data);
        static PyGetSetDef t_PropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PropagatorBuilder, frame),
          DECLARE_GET_FIELD(t_PropagatorBuilder, initialOrbitDate),
          DECLARE_GET_FIELD(t_PropagatorBuilder, mu),
          DECLARE_GET_FIELD(t_PropagatorBuilder, orbitType),
          DECLARE_GET_FIELD(t_PropagatorBuilder, orbitalParametersDrivers),
          DECLARE_GET_FIELD(t_PropagatorBuilder, positionAngleType),
          DECLARE_GET_FIELD(t_PropagatorBuilder, propagationParametersDrivers),
          DECLARE_GET_FIELD(t_PropagatorBuilder, selectedNormalizedParameters),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_PropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_PropagatorBuilder, buildPropagator, METH_O),
          DECLARE_METHOD(t_PropagatorBuilder, copy, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getInitialOrbitDate, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getMu, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getOrbitalParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getPropagationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getSelectedNormalizedParameters, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, resetOrbit, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PropagatorBuilder)[] = {
          { Py_tp_methods, t_PropagatorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_PropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PropagatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PropagatorBuilder, t_PropagatorBuilder, PropagatorBuilder);

        void t_PropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PropagatorBuilder), &PY_TYPE_DEF(PropagatorBuilder), module, "PropagatorBuilder", 0);
        }

        void t_PropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorBuilder), "class_", make_descriptor(PropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorBuilder), "wrapfn_", make_descriptor(t_PropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_PropagatorBuilder::wrap_Object(PropagatorBuilder(((t_PropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PropagatorBuilder_buildLeastSquaresModel(t_PropagatorBuilder *self, PyObject *args)
        {
          JArray< PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_AbstractBatchLSModel::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildLeastSquaresModel", args);
          return NULL;
        }

        static PyObject *t_PropagatorBuilder_buildPropagator(t_PropagatorBuilder *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::Propagator result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildPropagator", arg);
          return NULL;
        }

        static PyObject *t_PropagatorBuilder_copy(t_PropagatorBuilder *self)
        {
          PropagatorBuilder result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_PropagatorBuilder::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getFrame(t_PropagatorBuilder *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getInitialOrbitDate(t_PropagatorBuilder *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getInitialOrbitDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getMu(t_PropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PropagatorBuilder_getOrbitType(t_PropagatorBuilder *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getOrbitalParametersDrivers(t_PropagatorBuilder *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitalParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getPositionAngleType(t_PropagatorBuilder *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getPropagationParametersDrivers(t_PropagatorBuilder *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getSelectedNormalizedParameters(t_PropagatorBuilder *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSelectedNormalizedParameters());
          return result.wrap();
        }

        static PyObject *t_PropagatorBuilder_resetOrbit(t_PropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetOrbit(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "resetOrbit", arg);
          return NULL;
        }

        static PyObject *t_PropagatorBuilder_get__frame(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__initialOrbitDate(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialOrbitDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__mu(t_PropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PropagatorBuilder_get__orbitType(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__orbitalParametersDrivers(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitalParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__positionAngleType(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__propagationParametersDrivers(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__selectedNormalizedParameters(t_PropagatorBuilder *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSelectedNormalizedParameters());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmDataSubStructureKey::class$ = NULL;
              jmethodID *OcmDataSubStructureKey::mids$ = NULL;
              bool OcmDataSubStructureKey::live$ = false;
              OcmDataSubStructureKey *OcmDataSubStructureKey::COV = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::MAN = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::OD = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::PERT = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::PHYS = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::TRAJ = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::USER = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::cov = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::man = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::od = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::pert = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::phys = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::traj = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::user = NULL;

              jclass OcmDataSubStructureKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_d5fe06bc409af280] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmParser;)Z");
                  mids$[mid_valueOf_24b4afcb1de58680] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;");
                  mids$[mid_values_29e1efd6ae68ea8a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COV = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "COV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  MAN = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "MAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  OD = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "OD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  PERT = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "PERT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  PHYS = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "PHYS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  TRAJ = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "TRAJ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  USER = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "USER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  cov = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "cov", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  man = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "man", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  od = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "od", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  pert = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "pert", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  phys = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "phys", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  traj = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "traj", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  user = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "user", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OcmDataSubStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser & a1) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_d5fe06bc409af280], a0.this$, a1.this$);
              }

              OcmDataSubStructureKey OcmDataSubStructureKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OcmDataSubStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_24b4afcb1de58680], a0.this$));
              }

              JArray< OcmDataSubStructureKey > OcmDataSubStructureKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OcmDataSubStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_29e1efd6ae68ea8a]));
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
              static PyObject *t_OcmDataSubStructureKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmDataSubStructureKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmDataSubStructureKey_of_(t_OcmDataSubStructureKey *self, PyObject *args);
              static PyObject *t_OcmDataSubStructureKey_process(t_OcmDataSubStructureKey *self, PyObject *args);
              static PyObject *t_OcmDataSubStructureKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OcmDataSubStructureKey_values(PyTypeObject *type);
              static PyObject *t_OcmDataSubStructureKey_get__parameters_(t_OcmDataSubStructureKey *self, void *data);
              static PyGetSetDef t_OcmDataSubStructureKey__fields_[] = {
                DECLARE_GET_FIELD(t_OcmDataSubStructureKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmDataSubStructureKey__methods_[] = {
                DECLARE_METHOD(t_OcmDataSubStructureKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmDataSubStructureKey)[] = {
                { Py_tp_methods, t_OcmDataSubStructureKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OcmDataSubStructureKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmDataSubStructureKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OcmDataSubStructureKey, t_OcmDataSubStructureKey, OcmDataSubStructureKey);
              PyObject *t_OcmDataSubStructureKey::wrap_Object(const OcmDataSubStructureKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmDataSubStructureKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmDataSubStructureKey *self = (t_OcmDataSubStructureKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OcmDataSubStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmDataSubStructureKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmDataSubStructureKey *self = (t_OcmDataSubStructureKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OcmDataSubStructureKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmDataSubStructureKey), &PY_TYPE_DEF(OcmDataSubStructureKey), module, "OcmDataSubStructureKey", 0);
              }

              void t_OcmDataSubStructureKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "class_", make_descriptor(OcmDataSubStructureKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "wrapfn_", make_descriptor(t_OcmDataSubStructureKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmDataSubStructureKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "COV", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::COV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "MAN", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::MAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "OD", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::OD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "PERT", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::PERT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "PHYS", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::PHYS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "TRAJ", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::TRAJ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "USER", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::USER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "cov", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::cov)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "man", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::man)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "od", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::od)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "pert", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::pert)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "phys", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::phys)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "traj", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::traj)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "user", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::user)));
              }

              static PyObject *t_OcmDataSubStructureKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmDataSubStructureKey::initializeClass, 1)))
                  return NULL;
                return t_OcmDataSubStructureKey::wrap_Object(OcmDataSubStructureKey(((t_OcmDataSubStructureKey *) arg)->object.this$));
              }
              static PyObject *t_OcmDataSubStructureKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmDataSubStructureKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmDataSubStructureKey_of_(t_OcmDataSubStructureKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OcmDataSubStructureKey_process(t_OcmDataSubStructureKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser a1((jobject) NULL);
                PyTypeObject **p1;
                jboolean result;

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmParser::parameters_))
                {
                  OBJ_CALL(result = self->object.process(a0, a1));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OcmDataSubStructureKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OcmDataSubStructureKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmDataSubStructureKey::valueOf(a0));
                  return t_OcmDataSubStructureKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OcmDataSubStructureKey_values(PyTypeObject *type)
              {
                JArray< OcmDataSubStructureKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmDataSubStructureKey::values());
                return JArray<jobject>(result.this$).wrap(t_OcmDataSubStructureKey::wrap_jobject);
              }
              static PyObject *t_OcmDataSubStructureKey_get__parameters_(t_OcmDataSubStructureKey *self, void *data)
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
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimationsProvider::class$ = NULL;
        jmethodID *EstimationsProvider::mids$ = NULL;
        bool EstimationsProvider::live$ = false;

        jclass EstimationsProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimationsProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEstimatedMeasurement_4b39cdd283f0ffac] = env->getMethodID(cls, "getEstimatedMeasurement", "(I)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getNumber_f2f64475e4580546] = env->getMethodID(cls, "getNumber", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement EstimationsProvider::getEstimatedMeasurement(jint a0) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurement_4b39cdd283f0ffac], a0));
        }

        jint EstimationsProvider::getNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumber_f2f64475e4580546]);
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
        static PyObject *t_EstimationsProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimationsProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimationsProvider_getEstimatedMeasurement(t_EstimationsProvider *self, PyObject *arg);
        static PyObject *t_EstimationsProvider_getNumber(t_EstimationsProvider *self);
        static PyObject *t_EstimationsProvider_get__number(t_EstimationsProvider *self, void *data);
        static PyGetSetDef t_EstimationsProvider__fields_[] = {
          DECLARE_GET_FIELD(t_EstimationsProvider, number),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimationsProvider__methods_[] = {
          DECLARE_METHOD(t_EstimationsProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimationsProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimationsProvider, getEstimatedMeasurement, METH_O),
          DECLARE_METHOD(t_EstimationsProvider, getNumber, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimationsProvider)[] = {
          { Py_tp_methods, t_EstimationsProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EstimationsProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimationsProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EstimationsProvider, t_EstimationsProvider, EstimationsProvider);

        void t_EstimationsProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimationsProvider), &PY_TYPE_DEF(EstimationsProvider), module, "EstimationsProvider", 0);
        }

        void t_EstimationsProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationsProvider), "class_", make_descriptor(EstimationsProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationsProvider), "wrapfn_", make_descriptor(t_EstimationsProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationsProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EstimationsProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimationsProvider::initializeClass, 1)))
            return NULL;
          return t_EstimationsProvider::wrap_Object(EstimationsProvider(((t_EstimationsProvider *) arg)->object.this$));
        }
        static PyObject *t_EstimationsProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimationsProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimationsProvider_getEstimatedMeasurement(t_EstimationsProvider *self, PyObject *arg)
        {
          jint a0;
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getEstimatedMeasurement(a0));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEstimatedMeasurement", arg);
          return NULL;
        }

        static PyObject *t_EstimationsProvider_getNumber(t_EstimationsProvider *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EstimationsProvider_get__number(t_EstimationsProvider *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumber());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonBoundedPropagator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonBoundedPropagator::class$ = NULL;
      jmethodID *PythonBoundedPropagator::mids$ = NULL;
      bool PythonBoundedPropagator::live$ = false;

      jclass PythonBoundedPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonBoundedPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addAdditionalStateProvider_7dfba37c14ed8f7a] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V");
          mids$[mid_addEventDetector_8ef30a2ad40caceb] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
          mids$[mid_clearEventsDetectors_7ae3461a92a43152] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalStateProviders_a6156df500549a58] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_5cce95036ae870ba] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_dd0e78d2be8aaf34] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
          mids$[mid_getEventsDetectors_cfcfd130f9013e3e] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getManagedAdditionalStates_0f62ccf08eef5924] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMultiplexer_a44bf32d2051f26b] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_20557c175f7cd899] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_6b161f495ea569b8] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_889031abe87f3b14] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_propagate_afc18c81ed763a96] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_resetInitialState_2b88003f931f70a7] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonBoundedPropagator::PythonBoundedPropagator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonBoundedPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonBoundedPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonBoundedPropagator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonBoundedPropagator_init_(t_PythonBoundedPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonBoundedPropagator_finalize(t_PythonBoundedPropagator *self);
      static PyObject *t_PythonBoundedPropagator_pythonExtension(t_PythonBoundedPropagator *self, PyObject *args);
      static void JNICALL t_PythonBoundedPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonBoundedPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonBoundedPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getFrame7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getInitialState8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getMaxDate10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getMinDate11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getMultiplexer12(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getPVCoordinates13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonBoundedPropagator_isAdditionalStateManaged14(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonBoundedPropagator_propagate15(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonBoundedPropagator_propagate16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonBoundedPropagator_pythonDecRef17(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonBoundedPropagator_resetInitialState18(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonBoundedPropagator_setAttitudeProvider19(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonBoundedPropagator_get__self(t_PythonBoundedPropagator *self, void *data);
      static PyGetSetDef t_PythonBoundedPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonBoundedPropagator, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonBoundedPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonBoundedPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBoundedPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBoundedPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonBoundedPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonBoundedPropagator)[] = {
        { Py_tp_methods, t_PythonBoundedPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonBoundedPropagator_init_ },
        { Py_tp_getset, t_PythonBoundedPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonBoundedPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonBoundedPropagator, t_PythonBoundedPropagator, PythonBoundedPropagator);

      void t_PythonBoundedPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonBoundedPropagator), &PY_TYPE_DEF(PythonBoundedPropagator), module, "PythonBoundedPropagator", 1);
      }

      void t_PythonBoundedPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedPropagator), "class_", make_descriptor(PythonBoundedPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedPropagator), "wrapfn_", make_descriptor(t_PythonBoundedPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonBoundedPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V", (void *) t_PythonBoundedPropagator_addAdditionalStateProvider0 },
          { "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V", (void *) t_PythonBoundedPropagator_addEventDetector1 },
          { "clearEventsDetectors", "()V", (void *) t_PythonBoundedPropagator_clearEventsDetectors2 },
          { "getAdditionalStateProviders", "()Ljava/util/List;", (void *) t_PythonBoundedPropagator_getAdditionalStateProviders3 },
          { "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonBoundedPropagator_getAttitudeProvider4 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;", (void *) t_PythonBoundedPropagator_getEphemerisGenerator5 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonBoundedPropagator_getEventsDetectors6 },
          { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonBoundedPropagator_getFrame7 },
          { "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonBoundedPropagator_getInitialState8 },
          { "getManagedAdditionalStates", "()[Ljava/lang/String;", (void *) t_PythonBoundedPropagator_getManagedAdditionalStates9 },
          { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonBoundedPropagator_getMaxDate10 },
          { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonBoundedPropagator_getMinDate11 },
          { "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;", (void *) t_PythonBoundedPropagator_getMultiplexer12 },
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonBoundedPropagator_getPVCoordinates13 },
          { "isAdditionalStateManaged", "(Ljava/lang/String;)Z", (void *) t_PythonBoundedPropagator_isAdditionalStateManaged14 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonBoundedPropagator_propagate15 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonBoundedPropagator_propagate16 },
          { "pythonDecRef", "()V", (void *) t_PythonBoundedPropagator_pythonDecRef17 },
          { "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonBoundedPropagator_resetInitialState18 },
          { "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonBoundedPropagator_setAttitudeProvider19 },
        };
        env->registerNatives(cls, methods, 20);
      }

      static PyObject *t_PythonBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonBoundedPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonBoundedPropagator::wrap_Object(PythonBoundedPropagator(((t_PythonBoundedPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonBoundedPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonBoundedPropagator_init_(t_PythonBoundedPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonBoundedPropagator object((jobject) NULL);

        INT_CALL(object = PythonBoundedPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonBoundedPropagator_finalize(t_PythonBoundedPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonBoundedPropagator_pythonExtension(t_PythonBoundedPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonBoundedPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_AdditionalStateProvider::wrap_Object(::org::orekit::propagation::AdditionalStateProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "addAdditionalStateProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonBoundedPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonBoundedPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonBoundedPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalStateProviders", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getAdditionalStateProviders", result);
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

      static jobject JNICALL t_PythonBoundedPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAttitudeProvider", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
        {
          throwTypeError("getAttitudeProvider", result);
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

      static jobject JNICALL t_PythonBoundedPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::EphemerisGenerator::initializeClass, &value))
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

      static jobject JNICALL t_PythonBoundedPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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

      static jobject JNICALL t_PythonBoundedPropagator_getFrame7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getFrame", result);
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

      static jobject JNICALL t_PythonBoundedPropagator_getInitialState8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInitialState", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("getInitialState", result);
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

      static jobject JNICALL t_PythonBoundedPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::java::lang::String > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getManagedAdditionalStates", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[s", &value))
        {
          throwTypeError("getManagedAdditionalStates", result);
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

      static jobject JNICALL t_PythonBoundedPropagator_getMaxDate10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getMaxDate", result);
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

      static jobject JNICALL t_PythonBoundedPropagator_getMinDate11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getMinDate", result);
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

      static jobject JNICALL t_PythonBoundedPropagator_getMultiplexer12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMultiplexer", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::sampling::StepHandlerMultiplexer::initializeClass, &value))
        {
          throwTypeError("getMultiplexer", result);
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

      static jobject JNICALL t_PythonBoundedPropagator_getPVCoordinates13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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

      static jboolean JNICALL t_PythonBoundedPropagator_isAdditionalStateManaged14(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "isAdditionalStateManaged", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("isAdditionalStateManaged", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static jobject JNICALL t_PythonBoundedPropagator_propagate15(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
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

      static jobject JNICALL t_PythonBoundedPropagator_propagate16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
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

      static void JNICALL t_PythonBoundedPropagator_pythonDecRef17(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonBoundedPropagator_resetInitialState18(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "resetInitialState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonBoundedPropagator_setAttitudeProvider19(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "setAttitudeProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonBoundedPropagator_get__self(t_PythonBoundedPropagator *self, void *data)
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
#include "org/hipparchus/stat/descriptive/AbstractUnivariateStatistic.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *AbstractUnivariateStatistic::class$ = NULL;
        jmethodID *AbstractUnivariateStatistic::mids$ = NULL;
        bool AbstractUnivariateStatistic::live$ = false;

        jclass AbstractUnivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/AbstractUnivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_copy_00705cc7a411fc09] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/UnivariateStatistic;");
            mids$[mid_evaluate_456d9a2f64d6b28d] = env->getMethodID(cls, "evaluate", "()D");
            mids$[mid_evaluate_0a7ff474793a505a] = env->getMethodID(cls, "evaluate", "([DII)D");
            mids$[mid_getData_7cdc325af0834901] = env->getMethodID(cls, "getData", "()[D");
            mids$[mid_setData_ebc26dcaf4761286] = env->getMethodID(cls, "setData", "([D)V");
            mids$[mid_setData_d3508f432c1d798d] = env->getMethodID(cls, "setData", "([DII)V");
            mids$[mid_getDataRef_7cdc325af0834901] = env->getMethodID(cls, "getDataRef", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::stat::descriptive::UnivariateStatistic AbstractUnivariateStatistic::copy() const
        {
          return ::org::hipparchus::stat::descriptive::UnivariateStatistic(env->callObjectMethod(this$, mids$[mid_copy_00705cc7a411fc09]));
        }

        jdouble AbstractUnivariateStatistic::evaluate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_456d9a2f64d6b28d]);
        }

        jdouble AbstractUnivariateStatistic::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_0a7ff474793a505a], a0.this$, a1, a2);
        }

        JArray< jdouble > AbstractUnivariateStatistic::getData() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getData_7cdc325af0834901]));
        }

        void AbstractUnivariateStatistic::setData(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setData_ebc26dcaf4761286], a0.this$);
        }

        void AbstractUnivariateStatistic::setData(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setData_d3508f432c1d798d], a0.this$, a1, a2);
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
      namespace descriptive {
        static PyObject *t_AbstractUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateStatistic_copy(t_AbstractUnivariateStatistic *self);
        static PyObject *t_AbstractUnivariateStatistic_evaluate(t_AbstractUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractUnivariateStatistic_getData(t_AbstractUnivariateStatistic *self);
        static PyObject *t_AbstractUnivariateStatistic_setData(t_AbstractUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractUnivariateStatistic_get__data(t_AbstractUnivariateStatistic *self, void *data);
        static int t_AbstractUnivariateStatistic_set__data(t_AbstractUnivariateStatistic *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractUnivariateStatistic__fields_[] = {
          DECLARE_GETSET_FIELD(t_AbstractUnivariateStatistic, data),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractUnivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_AbstractUnivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateStatistic, copy, METH_NOARGS),
          DECLARE_METHOD(t_AbstractUnivariateStatistic, evaluate, METH_VARARGS),
          DECLARE_METHOD(t_AbstractUnivariateStatistic, getData, METH_NOARGS),
          DECLARE_METHOD(t_AbstractUnivariateStatistic, setData, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractUnivariateStatistic)[] = {
          { Py_tp_methods, t_AbstractUnivariateStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractUnivariateStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractUnivariateStatistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractUnivariateStatistic, t_AbstractUnivariateStatistic, AbstractUnivariateStatistic);

        void t_AbstractUnivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractUnivariateStatistic), &PY_TYPE_DEF(AbstractUnivariateStatistic), module, "AbstractUnivariateStatistic", 0);
        }

        void t_AbstractUnivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateStatistic), "class_", make_descriptor(AbstractUnivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateStatistic), "wrapfn_", make_descriptor(t_AbstractUnivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractUnivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_AbstractUnivariateStatistic::wrap_Object(AbstractUnivariateStatistic(((t_AbstractUnivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_AbstractUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractUnivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractUnivariateStatistic_copy(t_AbstractUnivariateStatistic *self)
        {
          ::org::hipparchus::stat::descriptive::UnivariateStatistic result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::stat::descriptive::t_UnivariateStatistic::wrap_Object(result);
        }

        static PyObject *t_AbstractUnivariateStatistic_evaluate(t_AbstractUnivariateStatistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.evaluate());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "[DII", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "evaluate", args);
          return NULL;
        }

        static PyObject *t_AbstractUnivariateStatistic_getData(t_AbstractUnivariateStatistic *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getData());
          return result.wrap();
        }

        static PyObject *t_AbstractUnivariateStatistic_setData(t_AbstractUnivariateStatistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(self->object.setData(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;

              if (!parseArgs(args, "[DII", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setData(a0, a1, a2));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setData", args);
          return NULL;
        }

        static PyObject *t_AbstractUnivariateStatistic_get__data(t_AbstractUnivariateStatistic *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getData());
          return value.wrap();
        }
        static int t_AbstractUnivariateStatistic_set__data(t_AbstractUnivariateStatistic *self, PyObject *arg, void *data)
        {
          {
            JArray< jdouble > value((jobject) NULL);
            if (!parseArg(arg, "[D", &value))
            {
              INT_CALL(self->object.setData(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "data", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/Metadata.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Metadata::class$ = NULL;
          jmethodID *Metadata::mids$ = NULL;
          bool Metadata::live$ = false;

          jclass Metadata::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Metadata");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getTimeSystem_8ece93c6c1ece30e] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/files/ccsds/definitions/TimeSystem;");
              mids$[mid_setTimeSystem_3dd15fb182523a58] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/files/ccsds/definitions/TimeSystem;)V");
              mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");
              mids$[mid_getLaunchYear_5d6fce34d596f8f0] = env->getMethodID(cls, "getLaunchYear", "(Ljava/lang/String;)I");
              mids$[mid_getLaunchNumber_5d6fce34d596f8f0] = env->getMethodID(cls, "getLaunchNumber", "(Ljava/lang/String;)I");
              mids$[mid_getLaunchPiece_43625fc1c3d86afe] = env->getMethodID(cls, "getLaunchPiece", "(Ljava/lang/String;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::files::ccsds::definitions::TimeSystem Metadata::getTimeSystem() const
          {
            return ::org::orekit::files::ccsds::definitions::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_8ece93c6c1ece30e]));
          }

          void Metadata::setTimeSystem(const ::org::orekit::files::ccsds::definitions::TimeSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTimeSystem_3dd15fb182523a58], a0.this$);
          }

          void Metadata::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
        namespace section {
          static PyObject *t_Metadata_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Metadata_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Metadata_getTimeSystem(t_Metadata *self);
          static PyObject *t_Metadata_setTimeSystem(t_Metadata *self, PyObject *arg);
          static PyObject *t_Metadata_validate(t_Metadata *self, PyObject *args);
          static PyObject *t_Metadata_get__timeSystem(t_Metadata *self, void *data);
          static int t_Metadata_set__timeSystem(t_Metadata *self, PyObject *arg, void *data);
          static PyGetSetDef t_Metadata__fields_[] = {
            DECLARE_GETSET_FIELD(t_Metadata, timeSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Metadata__methods_[] = {
            DECLARE_METHOD(t_Metadata, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Metadata, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Metadata, getTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_Metadata, setTimeSystem, METH_O),
            DECLARE_METHOD(t_Metadata, validate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Metadata)[] = {
            { Py_tp_methods, t_Metadata__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Metadata__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Metadata)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
            NULL
          };

          DEFINE_TYPE(Metadata, t_Metadata, Metadata);

          void t_Metadata::install(PyObject *module)
          {
            installType(&PY_TYPE(Metadata), &PY_TYPE_DEF(Metadata), module, "Metadata", 0);
          }

          void t_Metadata::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Metadata), "class_", make_descriptor(Metadata::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Metadata), "wrapfn_", make_descriptor(t_Metadata::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Metadata), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Metadata_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Metadata::initializeClass, 1)))
              return NULL;
            return t_Metadata::wrap_Object(Metadata(((t_Metadata *) arg)->object.this$));
          }
          static PyObject *t_Metadata_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Metadata::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Metadata_getTimeSystem(t_Metadata *self)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystem());
            return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_Metadata_setTimeSystem(t_Metadata *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_TimeSystem::parameters_))
            {
              OBJ_CALL(self->object.setTimeSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
            return NULL;
          }

          static PyObject *t_Metadata_validate(t_Metadata *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Metadata), (PyObject *) self, "validate", args, 2);
          }

          static PyObject *t_Metadata_get__timeSystem(t_Metadata *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystem());
            return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(value);
          }
          static int t_Metadata_set__timeSystem(t_Metadata *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setTimeSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/EigenDecompositionNonSymmetric.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *EigenDecompositionNonSymmetric::class$ = NULL;
      jmethodID *EigenDecompositionNonSymmetric::mids$ = NULL;
      bool EigenDecompositionNonSymmetric::live$ = false;
      jdouble EigenDecompositionNonSymmetric::DEFAULT_EPSILON = (jdouble) 0;

      jclass EigenDecompositionNonSymmetric::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/EigenDecompositionNonSymmetric");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_30aa151fd03f3096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_27ff5cf8ba76b4fe] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getD_7116bbecdd8ceb21] = env->getMethodID(cls, "getD", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getDeterminant_8278e96d3787b980] = env->getMethodID(cls, "getDeterminant", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_getEigenvalue_6274be11ed0ee172] = env->getMethodID(cls, "getEigenvalue", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_getEigenvalues_a42e219c62839d3d] = env->getMethodID(cls, "getEigenvalues", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getEigenvector_61bcfe594fe45427] = env->getMethodID(cls, "getEigenvector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getEpsilon_456d9a2f64d6b28d] = env->getMethodID(cls, "getEpsilon", "()D");
          mids$[mid_getV_7116bbecdd8ceb21] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getVInv_7116bbecdd8ceb21] = env->getMethodID(cls, "getVInv", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EigenDecompositionNonSymmetric::EigenDecompositionNonSymmetric(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30aa151fd03f3096, a0.this$)) {}

      EigenDecompositionNonSymmetric::EigenDecompositionNonSymmetric(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_27ff5cf8ba76b4fe, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix EigenDecompositionNonSymmetric::getD() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getD_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::complex::Complex EigenDecompositionNonSymmetric::getDeterminant() const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_getDeterminant_8278e96d3787b980]));
      }

      ::org::hipparchus::complex::Complex EigenDecompositionNonSymmetric::getEigenvalue(jint a0) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_getEigenvalue_6274be11ed0ee172], a0));
      }

      JArray< ::org::hipparchus::complex::Complex > EigenDecompositionNonSymmetric::getEigenvalues() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getEigenvalues_a42e219c62839d3d]));
      }

      ::org::hipparchus::linear::FieldVector EigenDecompositionNonSymmetric::getEigenvector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getEigenvector_61bcfe594fe45427], a0));
      }

      jdouble EigenDecompositionNonSymmetric::getEpsilon() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEpsilon_456d9a2f64d6b28d]);
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionNonSymmetric::getV() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getV_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionNonSymmetric::getVInv() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getVInv_7116bbecdd8ceb21]));
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
      static PyObject *t_EigenDecompositionNonSymmetric_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EigenDecompositionNonSymmetric_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EigenDecompositionNonSymmetric_init_(t_EigenDecompositionNonSymmetric *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EigenDecompositionNonSymmetric_getD(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getDeterminant(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvalue(t_EigenDecompositionNonSymmetric *self, PyObject *arg);
      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvalues(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvector(t_EigenDecompositionNonSymmetric *self, PyObject *arg);
      static PyObject *t_EigenDecompositionNonSymmetric_getEpsilon(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getV(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getVInv(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_get__d(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__determinant(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__eigenvalues(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__epsilon(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__v(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__vInv(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyGetSetDef t_EigenDecompositionNonSymmetric__fields_[] = {
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, d),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, determinant),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, eigenvalues),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, epsilon),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, v),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, vInv),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EigenDecompositionNonSymmetric__methods_[] = {
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getD, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getEigenvalue, METH_O),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getEigenvalues, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getEigenvector, METH_O),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getEpsilon, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getV, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getVInv, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EigenDecompositionNonSymmetric)[] = {
        { Py_tp_methods, t_EigenDecompositionNonSymmetric__methods_ },
        { Py_tp_init, (void *) t_EigenDecompositionNonSymmetric_init_ },
        { Py_tp_getset, t_EigenDecompositionNonSymmetric__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EigenDecompositionNonSymmetric)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EigenDecompositionNonSymmetric, t_EigenDecompositionNonSymmetric, EigenDecompositionNonSymmetric);

      void t_EigenDecompositionNonSymmetric::install(PyObject *module)
      {
        installType(&PY_TYPE(EigenDecompositionNonSymmetric), &PY_TYPE_DEF(EigenDecompositionNonSymmetric), module, "EigenDecompositionNonSymmetric", 0);
      }

      void t_EigenDecompositionNonSymmetric::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionNonSymmetric), "class_", make_descriptor(EigenDecompositionNonSymmetric::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionNonSymmetric), "wrapfn_", make_descriptor(t_EigenDecompositionNonSymmetric::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionNonSymmetric), "boxfn_", make_descriptor(boxObject));
        env->getClass(EigenDecompositionNonSymmetric::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionNonSymmetric), "DEFAULT_EPSILON", make_descriptor(EigenDecompositionNonSymmetric::DEFAULT_EPSILON));
      }

      static PyObject *t_EigenDecompositionNonSymmetric_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EigenDecompositionNonSymmetric::initializeClass, 1)))
          return NULL;
        return t_EigenDecompositionNonSymmetric::wrap_Object(EigenDecompositionNonSymmetric(((t_EigenDecompositionNonSymmetric *) arg)->object.this$));
      }
      static PyObject *t_EigenDecompositionNonSymmetric_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EigenDecompositionNonSymmetric::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EigenDecompositionNonSymmetric_init_(t_EigenDecompositionNonSymmetric *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            EigenDecompositionNonSymmetric object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = EigenDecompositionNonSymmetric(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            EigenDecompositionNonSymmetric object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = EigenDecompositionNonSymmetric(a0, a1));
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

      static PyObject *t_EigenDecompositionNonSymmetric_getD(t_EigenDecompositionNonSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getD());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getDeterminant(t_EigenDecompositionNonSymmetric *self)
      {
        ::org::hipparchus::complex::Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.getDeterminant());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvalue(t_EigenDecompositionNonSymmetric *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::complex::Complex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvalue(a0));
          return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvalue", arg);
        return NULL;
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvalues(t_EigenDecompositionNonSymmetric *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getEigenvalues());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvector(t_EigenDecompositionNonSymmetric *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvector", arg);
        return NULL;
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getEpsilon(t_EigenDecompositionNonSymmetric *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEpsilon());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getV(t_EigenDecompositionNonSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getVInv(t_EigenDecompositionNonSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getVInv());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__d(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getD());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__determinant(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        ::org::hipparchus::complex::Complex value((jobject) NULL);
        OBJ_CALL(value = self->object.getDeterminant());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__eigenvalues(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getEigenvalues());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__epsilon(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEpsilon());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__v(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__vInv(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVInv());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Region::class$ = NULL;
        jmethodID *Region::mids$ = NULL;
        bool Region::live$ = false;

        jclass Region::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Region");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildNew_c5623595bd3a3a84] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_checkPoint_153fabdeca87a5c4] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_contains_b25943163cbdf489] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/partitioning/Region;)Z");
            mids$[mid_copySelf_9552c312bc09a7e5] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_getBarycenter_268784e47ab908a6] = env->getMethodID(cls, "getBarycenter", "()Lorg/hipparchus/geometry/Point;");
            mids$[mid_getBoundarySize_456d9a2f64d6b28d] = env->getMethodID(cls, "getBoundarySize", "()D");
            mids$[mid_getSize_456d9a2f64d6b28d] = env->getMethodID(cls, "getSize", "()D");
            mids$[mid_getTree_5bed1988454faad9] = env->getMethodID(cls, "getTree", "(Z)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_intersection_55f41ec2172e02d3] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
            mids$[mid_isEmpty_257992acaacae48a] = env->getMethodID(cls, "isEmpty", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Z");
            mids$[mid_isFull_e470b6d9e0d979db] = env->getMethodID(cls, "isFull", "()Z");
            mids$[mid_isFull_257992acaacae48a] = env->getMethodID(cls, "isFull", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Z");
            mids$[mid_projectToBoundary_a3932f0f8ec705f8] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/BoundaryProjection;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Region Region::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return Region(env->callObjectMethod(this$, mids$[mid_buildNew_c5623595bd3a3a84], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region$Location Region::checkPoint(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_153fabdeca87a5c4], a0.this$));
        }

        jboolean Region::contains(const Region & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_contains_b25943163cbdf489], a0.this$);
        }

        Region Region::copySelf() const
        {
          return Region(env->callObjectMethod(this$, mids$[mid_copySelf_9552c312bc09a7e5]));
        }

        ::org::hipparchus::geometry::Point Region::getBarycenter() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getBarycenter_268784e47ab908a6]));
        }

        jdouble Region::getBoundarySize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBoundarySize_456d9a2f64d6b28d]);
        }

        jdouble Region::getSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSize_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::geometry::partitioning::BSPTree Region::getTree(jboolean a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTree(env->callObjectMethod(this$, mids$[mid_getTree_5bed1988454faad9], a0));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane Region::intersection(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_intersection_55f41ec2172e02d3], a0.this$));
        }

        jboolean Region::isEmpty() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
        }

        jboolean Region::isEmpty(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_257992acaacae48a], a0.this$);
        }

        jboolean Region::isFull() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFull_e470b6d9e0d979db]);
        }

        jboolean Region::isFull(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFull_257992acaacae48a], a0.this$);
        }

        ::org::hipparchus::geometry::partitioning::BoundaryProjection Region::projectToBoundary(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BoundaryProjection(env->callObjectMethod(this$, mids$[mid_projectToBoundary_a3932f0f8ec705f8], a0.this$));
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
      namespace partitioning {
        static PyObject *t_Region_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Region_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Region_of_(t_Region *self, PyObject *args);
        static PyObject *t_Region_buildNew(t_Region *self, PyObject *arg);
        static PyObject *t_Region_checkPoint(t_Region *self, PyObject *arg);
        static PyObject *t_Region_contains(t_Region *self, PyObject *arg);
        static PyObject *t_Region_copySelf(t_Region *self);
        static PyObject *t_Region_getBarycenter(t_Region *self);
        static PyObject *t_Region_getBoundarySize(t_Region *self);
        static PyObject *t_Region_getSize(t_Region *self);
        static PyObject *t_Region_getTree(t_Region *self, PyObject *arg);
        static PyObject *t_Region_intersection(t_Region *self, PyObject *arg);
        static PyObject *t_Region_isEmpty(t_Region *self, PyObject *args);
        static PyObject *t_Region_isFull(t_Region *self, PyObject *args);
        static PyObject *t_Region_projectToBoundary(t_Region *self, PyObject *arg);
        static PyObject *t_Region_get__barycenter(t_Region *self, void *data);
        static PyObject *t_Region_get__boundarySize(t_Region *self, void *data);
        static PyObject *t_Region_get__empty(t_Region *self, void *data);
        static PyObject *t_Region_get__full(t_Region *self, void *data);
        static PyObject *t_Region_get__size(t_Region *self, void *data);
        static PyObject *t_Region_get__parameters_(t_Region *self, void *data);
        static PyGetSetDef t_Region__fields_[] = {
          DECLARE_GET_FIELD(t_Region, barycenter),
          DECLARE_GET_FIELD(t_Region, boundarySize),
          DECLARE_GET_FIELD(t_Region, empty),
          DECLARE_GET_FIELD(t_Region, full),
          DECLARE_GET_FIELD(t_Region, size),
          DECLARE_GET_FIELD(t_Region, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Region__methods_[] = {
          DECLARE_METHOD(t_Region, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Region, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Region, of_, METH_VARARGS),
          DECLARE_METHOD(t_Region, buildNew, METH_O),
          DECLARE_METHOD(t_Region, checkPoint, METH_O),
          DECLARE_METHOD(t_Region, contains, METH_O),
          DECLARE_METHOD(t_Region, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_Region, getBarycenter, METH_NOARGS),
          DECLARE_METHOD(t_Region, getBoundarySize, METH_NOARGS),
          DECLARE_METHOD(t_Region, getSize, METH_NOARGS),
          DECLARE_METHOD(t_Region, getTree, METH_O),
          DECLARE_METHOD(t_Region, intersection, METH_O),
          DECLARE_METHOD(t_Region, isEmpty, METH_VARARGS),
          DECLARE_METHOD(t_Region, isFull, METH_VARARGS),
          DECLARE_METHOD(t_Region, projectToBoundary, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Region)[] = {
          { Py_tp_methods, t_Region__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Region__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Region)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Region, t_Region, Region);
        PyObject *t_Region::wrap_Object(const Region& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Region::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Region *self = (t_Region *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Region::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Region::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Region *self = (t_Region *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Region::install(PyObject *module)
        {
          installType(&PY_TYPE(Region), &PY_TYPE_DEF(Region), module, "Region", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region), "Location", make_descriptor(&PY_TYPE_DEF(Region$Location)));
        }

        void t_Region::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region), "class_", make_descriptor(Region::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region), "wrapfn_", make_descriptor(t_Region::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Region_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Region::initializeClass, 1)))
            return NULL;
          return t_Region::wrap_Object(Region(((t_Region *) arg)->object.this$));
        }
        static PyObject *t_Region_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Region::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Region_of_(t_Region *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Region_buildNew(t_Region *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          Region result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(result = self->object.buildNew(a0));
            return t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "buildNew", arg);
          return NULL;
        }

        static PyObject *t_Region_checkPoint(t_Region *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.checkPoint(a0));
            return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "checkPoint", arg);
          return NULL;
        }

        static PyObject *t_Region_contains(t_Region *self, PyObject *arg)
        {
          Region a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", Region::initializeClass, &a0, &p0, t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.contains(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "contains", arg);
          return NULL;
        }

        static PyObject *t_Region_copySelf(t_Region *self)
        {
          Region result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_Region::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Region_getBarycenter(t_Region *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getBarycenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Region_getBoundarySize(t_Region *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBoundarySize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Region_getSize(t_Region *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Region_getTree(t_Region *self, PyObject *arg)
        {
          jboolean a0;
          ::org::hipparchus::geometry::partitioning::BSPTree result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getTree(a0));
            return ::org::hipparchus::geometry::partitioning::t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getTree", arg);
          return NULL;
        }

        static PyObject *t_Region_intersection(t_Region *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.intersection(a0));
            return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", arg);
          return NULL;
        }

        static PyObject *t_Region_isEmpty(t_Region *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jboolean result;
              OBJ_CALL(result = self->object.isEmpty());
              Py_RETURN_BOOL(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
              {
                OBJ_CALL(result = self->object.isEmpty(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isEmpty", args);
          return NULL;
        }

        static PyObject *t_Region_isFull(t_Region *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jboolean result;
              OBJ_CALL(result = self->object.isFull());
              Py_RETURN_BOOL(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
              {
                OBJ_CALL(result = self->object.isFull(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isFull", args);
          return NULL;
        }

        static PyObject *t_Region_projectToBoundary(t_Region *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BoundaryProjection result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::partitioning::t_BoundaryProjection::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "projectToBoundary", arg);
          return NULL;
        }
        static PyObject *t_Region_get__parameters_(t_Region *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Region_get__barycenter(t_Region *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getBarycenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }

        static PyObject *t_Region_get__boundarySize(t_Region *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBoundarySize());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Region_get__empty(t_Region *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEmpty());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_Region_get__full(t_Region *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isFull());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_Region_get__size(t_Region *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSize());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/SimpleRegression.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/regression/UpdatingMultipleLinearRegression.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/regression/SimpleRegression.h"
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *SimpleRegression::class$ = NULL;
        jmethodID *SimpleRegression::mids$ = NULL;
        bool SimpleRegression::live$ = false;

        jclass SimpleRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/SimpleRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_50a2e0b139e80a58] = env->getMethodID(cls, "<init>", "(Z)V");
            mids$[mid_addData_d660c7a97bf55272] = env->getMethodID(cls, "addData", "([[D)V");
            mids$[mid_addData_1d715fa3b7b756e1] = env->getMethodID(cls, "addData", "(DD)V");
            mids$[mid_addObservation_caadaecfce5fba2f] = env->getMethodID(cls, "addObservation", "([DD)V");
            mids$[mid_addObservations_f51b12ef24067352] = env->getMethodID(cls, "addObservations", "([[D[D)V");
            mids$[mid_append_28845c69a6d4c8e4] = env->getMethodID(cls, "append", "(Lorg/hipparchus/stat/regression/SimpleRegression;)V");
            mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_getIntercept_456d9a2f64d6b28d] = env->getMethodID(cls, "getIntercept", "()D");
            mids$[mid_getInterceptStdErr_456d9a2f64d6b28d] = env->getMethodID(cls, "getInterceptStdErr", "()D");
            mids$[mid_getMeanSquareError_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeanSquareError", "()D");
            mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getR_456d9a2f64d6b28d] = env->getMethodID(cls, "getR", "()D");
            mids$[mid_getRSquare_456d9a2f64d6b28d] = env->getMethodID(cls, "getRSquare", "()D");
            mids$[mid_getRegressionSumSquares_456d9a2f64d6b28d] = env->getMethodID(cls, "getRegressionSumSquares", "()D");
            mids$[mid_getSignificance_456d9a2f64d6b28d] = env->getMethodID(cls, "getSignificance", "()D");
            mids$[mid_getSlope_456d9a2f64d6b28d] = env->getMethodID(cls, "getSlope", "()D");
            mids$[mid_getSlopeConfidenceInterval_456d9a2f64d6b28d] = env->getMethodID(cls, "getSlopeConfidenceInterval", "()D");
            mids$[mid_getSlopeConfidenceInterval_0ba5fed9597b693e] = env->getMethodID(cls, "getSlopeConfidenceInterval", "(D)D");
            mids$[mid_getSlopeStdErr_456d9a2f64d6b28d] = env->getMethodID(cls, "getSlopeStdErr", "()D");
            mids$[mid_getSumOfCrossProducts_456d9a2f64d6b28d] = env->getMethodID(cls, "getSumOfCrossProducts", "()D");
            mids$[mid_getSumSquaredErrors_456d9a2f64d6b28d] = env->getMethodID(cls, "getSumSquaredErrors", "()D");
            mids$[mid_getTotalSumSquares_456d9a2f64d6b28d] = env->getMethodID(cls, "getTotalSumSquares", "()D");
            mids$[mid_getXSumSquares_456d9a2f64d6b28d] = env->getMethodID(cls, "getXSumSquares", "()D");
            mids$[mid_hasIntercept_e470b6d9e0d979db] = env->getMethodID(cls, "hasIntercept", "()Z");
            mids$[mid_predict_0ba5fed9597b693e] = env->getMethodID(cls, "predict", "(D)D");
            mids$[mid_regress_b84c99961a7276a9] = env->getMethodID(cls, "regress", "()Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_regress_d722bd798e38d351] = env->getMethodID(cls, "regress", "([I)Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_removeData_d660c7a97bf55272] = env->getMethodID(cls, "removeData", "([[D)V");
            mids$[mid_removeData_1d715fa3b7b756e1] = env->getMethodID(cls, "removeData", "(DD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimpleRegression::SimpleRegression() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        SimpleRegression::SimpleRegression(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_50a2e0b139e80a58, a0)) {}

        void SimpleRegression::addData(const JArray< JArray< jdouble > > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addData_d660c7a97bf55272], a0.this$);
        }

        void SimpleRegression::addData(jdouble a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addData_1d715fa3b7b756e1], a0, a1);
        }

        void SimpleRegression::addObservation(const JArray< jdouble > & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservation_caadaecfce5fba2f], a0.this$, a1);
        }

        void SimpleRegression::addObservations(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservations_f51b12ef24067352], a0.this$, a1.this$);
        }

        void SimpleRegression::append(const SimpleRegression & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_append_28845c69a6d4c8e4], a0.this$);
        }

        void SimpleRegression::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
        }

        jdouble SimpleRegression::getIntercept() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIntercept_456d9a2f64d6b28d]);
        }

        jdouble SimpleRegression::getInterceptStdErr() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getInterceptStdErr_456d9a2f64d6b28d]);
        }

        jdouble SimpleRegression::getMeanSquareError() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMeanSquareError_456d9a2f64d6b28d]);
        }

        jlong SimpleRegression::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
        }

        jdouble SimpleRegression::getR() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getR_456d9a2f64d6b28d]);
        }

        jdouble SimpleRegression::getRSquare() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRSquare_456d9a2f64d6b28d]);
        }

        jdouble SimpleRegression::getRegressionSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRegressionSumSquares_456d9a2f64d6b28d]);
        }

        jdouble SimpleRegression::getSignificance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSignificance_456d9a2f64d6b28d]);
        }

        jdouble SimpleRegression::getSlope() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSlope_456d9a2f64d6b28d]);
        }

        jdouble SimpleRegression::getSlopeConfidenceInterval() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSlopeConfidenceInterval_456d9a2f64d6b28d]);
        }

        jdouble SimpleRegression::getSlopeConfidenceInterval(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSlopeConfidenceInterval_0ba5fed9597b693e], a0);
        }

        jdouble SimpleRegression::getSlopeStdErr() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSlopeStdErr_456d9a2f64d6b28d]);
        }

        jdouble SimpleRegression::getSumOfCrossProducts() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfCrossProducts_456d9a2f64d6b28d]);
        }

        jdouble SimpleRegression::getSumSquaredErrors() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumSquaredErrors_456d9a2f64d6b28d]);
        }

        jdouble SimpleRegression::getTotalSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTotalSumSquares_456d9a2f64d6b28d]);
        }

        jdouble SimpleRegression::getXSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getXSumSquares_456d9a2f64d6b28d]);
        }

        jboolean SimpleRegression::hasIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasIntercept_e470b6d9e0d979db]);
        }

        jdouble SimpleRegression::predict(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_predict_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::stat::regression::RegressionResults SimpleRegression::regress() const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_b84c99961a7276a9]));
        }

        ::org::hipparchus::stat::regression::RegressionResults SimpleRegression::regress(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_d722bd798e38d351], a0.this$));
        }

        void SimpleRegression::removeData(const JArray< JArray< jdouble > > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_removeData_d660c7a97bf55272], a0.this$);
        }

        void SimpleRegression::removeData(jdouble a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_removeData_1d715fa3b7b756e1], a0, a1);
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
      namespace regression {
        static PyObject *t_SimpleRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SimpleRegression_init_(t_SimpleRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SimpleRegression_addData(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_addObservation(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_addObservations(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_append(t_SimpleRegression *self, PyObject *arg);
        static PyObject *t_SimpleRegression_clear(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getIntercept(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getInterceptStdErr(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getMeanSquareError(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getN(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getR(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getRSquare(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getRegressionSumSquares(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSignificance(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSlope(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSlopeConfidenceInterval(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_getSlopeStdErr(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSumOfCrossProducts(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSumSquaredErrors(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getTotalSumSquares(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getXSumSquares(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_hasIntercept(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_predict(t_SimpleRegression *self, PyObject *arg);
        static PyObject *t_SimpleRegression_regress(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_removeData(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_get__intercept(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__interceptStdErr(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__meanSquareError(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__n(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__r(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__rSquare(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__regressionSumSquares(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__significance(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__slope(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__slopeConfidenceInterval(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__slopeStdErr(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__sumOfCrossProducts(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__sumSquaredErrors(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__totalSumSquares(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__xSumSquares(t_SimpleRegression *self, void *data);
        static PyGetSetDef t_SimpleRegression__fields_[] = {
          DECLARE_GET_FIELD(t_SimpleRegression, intercept),
          DECLARE_GET_FIELD(t_SimpleRegression, interceptStdErr),
          DECLARE_GET_FIELD(t_SimpleRegression, meanSquareError),
          DECLARE_GET_FIELD(t_SimpleRegression, n),
          DECLARE_GET_FIELD(t_SimpleRegression, r),
          DECLARE_GET_FIELD(t_SimpleRegression, rSquare),
          DECLARE_GET_FIELD(t_SimpleRegression, regressionSumSquares),
          DECLARE_GET_FIELD(t_SimpleRegression, significance),
          DECLARE_GET_FIELD(t_SimpleRegression, slope),
          DECLARE_GET_FIELD(t_SimpleRegression, slopeConfidenceInterval),
          DECLARE_GET_FIELD(t_SimpleRegression, slopeStdErr),
          DECLARE_GET_FIELD(t_SimpleRegression, sumOfCrossProducts),
          DECLARE_GET_FIELD(t_SimpleRegression, sumSquaredErrors),
          DECLARE_GET_FIELD(t_SimpleRegression, totalSumSquares),
          DECLARE_GET_FIELD(t_SimpleRegression, xSumSquares),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SimpleRegression__methods_[] = {
          DECLARE_METHOD(t_SimpleRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleRegression, addData, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, addObservation, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, addObservations, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, append, METH_O),
          DECLARE_METHOD(t_SimpleRegression, clear, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getIntercept, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getInterceptStdErr, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getMeanSquareError, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getN, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getR, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getRSquare, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getRegressionSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSignificance, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSlope, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSlopeConfidenceInterval, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, getSlopeStdErr, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSumOfCrossProducts, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSumSquaredErrors, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getTotalSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getXSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, hasIntercept, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, predict, METH_O),
          DECLARE_METHOD(t_SimpleRegression, regress, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, removeData, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpleRegression)[] = {
          { Py_tp_methods, t_SimpleRegression__methods_ },
          { Py_tp_init, (void *) t_SimpleRegression_init_ },
          { Py_tp_getset, t_SimpleRegression__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpleRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SimpleRegression, t_SimpleRegression, SimpleRegression);

        void t_SimpleRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpleRegression), &PY_TYPE_DEF(SimpleRegression), module, "SimpleRegression", 0);
        }

        void t_SimpleRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRegression), "class_", make_descriptor(SimpleRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRegression), "wrapfn_", make_descriptor(t_SimpleRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimpleRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpleRegression::initializeClass, 1)))
            return NULL;
          return t_SimpleRegression::wrap_Object(SimpleRegression(((t_SimpleRegression *) arg)->object.this$));
        }
        static PyObject *t_SimpleRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpleRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SimpleRegression_init_(t_SimpleRegression *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SimpleRegression object((jobject) NULL);

              INT_CALL(object = SimpleRegression());
              self->object = object;
              break;
            }
           case 1:
            {
              jboolean a0;
              SimpleRegression object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = SimpleRegression(a0));
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

        static PyObject *t_SimpleRegression_addData(t_SimpleRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(self->object.addData(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              jdouble a0;
              jdouble a1;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(self->object.addData(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addData", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_addObservation(t_SimpleRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservation", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_addObservations(t_SimpleRegression *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservations(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservations", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_append(t_SimpleRegression *self, PyObject *arg)
        {
          SimpleRegression a0((jobject) NULL);

          if (!parseArg(arg, "k", SimpleRegression::initializeClass, &a0))
          {
            OBJ_CALL(self->object.append(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "append", arg);
          return NULL;
        }

        static PyObject *t_SimpleRegression_clear(t_SimpleRegression *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_SimpleRegression_getIntercept(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getIntercept());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getInterceptStdErr(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getInterceptStdErr());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getMeanSquareError(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMeanSquareError());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getN(t_SimpleRegression *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_SimpleRegression_getR(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getR());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getRSquare(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRSquare());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getRegressionSumSquares(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRegressionSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSignificance(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSignificance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSlope(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSlope());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSlopeConfidenceInterval(t_SimpleRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSlopeConfidenceInterval());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.getSlopeConfidenceInterval(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getSlopeConfidenceInterval", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_getSlopeStdErr(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSlopeStdErr());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSumOfCrossProducts(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfCrossProducts());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSumSquaredErrors(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumSquaredErrors());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getTotalSumSquares(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTotalSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getXSumSquares(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getXSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_hasIntercept(t_SimpleRegression *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SimpleRegression_predict(t_SimpleRegression *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.predict(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "predict", arg);
          return NULL;
        }

        static PyObject *t_SimpleRegression_regress(t_SimpleRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);
              OBJ_CALL(result = self->object.regress());
              return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
            }
            break;
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.regress(a0));
                return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "regress", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_removeData(t_SimpleRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(self->object.removeData(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              jdouble a0;
              jdouble a1;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(self->object.removeData(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "removeData", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_get__intercept(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIntercept());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__interceptStdErr(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getInterceptStdErr());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__meanSquareError(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMeanSquareError());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__n(t_SimpleRegression *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_SimpleRegression_get__r(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getR());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__rSquare(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRSquare());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__regressionSumSquares(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRegressionSumSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__significance(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSignificance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__slope(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSlope());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__slopeConfidenceInterval(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSlopeConfidenceInterval());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__slopeStdErr(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSlopeStdErr());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__sumOfCrossProducts(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfCrossProducts());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__sumSquaredErrors(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumSquaredErrors());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__totalSumSquares(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTotalSumSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__xSumSquares(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getXSumSquares());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedInternalError.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedInternalError::class$ = NULL;
        jmethodID *RuggedInternalError::mids$ = NULL;
        bool RuggedInternalError::live$ = false;

        jclass RuggedInternalError::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedInternalError");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ea7f4d04e27238a7] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
            mids$[mid_getLocalizedMessage_0090f7797e403f43] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
            mids$[mid_getMessage_0090f7797e403f43] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
            mids$[mid_getMessage_bab3be9b232acc5a] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
            mids$[mid_getParts_e81d7907eea7e008] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
            mids$[mid_getSpecifier_2e589a53386da289] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedInternalError::RuggedInternalError(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ea7f4d04e27238a7, a0.this$)) {}

        ::java::lang::String RuggedInternalError::getLocalizedMessage() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_0090f7797e403f43]));
        }

        ::java::lang::String RuggedInternalError::getMessage() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_0090f7797e403f43]));
        }

        ::java::lang::String RuggedInternalError::getMessage(const ::java::util::Locale & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_bab3be9b232acc5a], a0.this$));
        }

        JArray< ::java::lang::Object > RuggedInternalError::getParts() const
        {
          return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_e81d7907eea7e008]));
        }

        ::org::hipparchus::exception::Localizable RuggedInternalError::getSpecifier() const
        {
          return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_2e589a53386da289]));
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
      namespace errors {
        static PyObject *t_RuggedInternalError_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedInternalError_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RuggedInternalError_init_(t_RuggedInternalError *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedInternalError_getLocalizedMessage(t_RuggedInternalError *self, PyObject *args);
        static PyObject *t_RuggedInternalError_getMessage(t_RuggedInternalError *self, PyObject *args);
        static PyObject *t_RuggedInternalError_getParts(t_RuggedInternalError *self);
        static PyObject *t_RuggedInternalError_getSpecifier(t_RuggedInternalError *self);
        static PyObject *t_RuggedInternalError_get__localizedMessage(t_RuggedInternalError *self, void *data);
        static PyObject *t_RuggedInternalError_get__message(t_RuggedInternalError *self, void *data);
        static PyObject *t_RuggedInternalError_get__parts(t_RuggedInternalError *self, void *data);
        static PyObject *t_RuggedInternalError_get__specifier(t_RuggedInternalError *self, void *data);
        static PyGetSetDef t_RuggedInternalError__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedInternalError, localizedMessage),
          DECLARE_GET_FIELD(t_RuggedInternalError, message),
          DECLARE_GET_FIELD(t_RuggedInternalError, parts),
          DECLARE_GET_FIELD(t_RuggedInternalError, specifier),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedInternalError__methods_[] = {
          DECLARE_METHOD(t_RuggedInternalError, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedInternalError, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedInternalError, getLocalizedMessage, METH_VARARGS),
          DECLARE_METHOD(t_RuggedInternalError, getMessage, METH_VARARGS),
          DECLARE_METHOD(t_RuggedInternalError, getParts, METH_NOARGS),
          DECLARE_METHOD(t_RuggedInternalError, getSpecifier, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedInternalError)[] = {
          { Py_tp_methods, t_RuggedInternalError__methods_ },
          { Py_tp_init, (void *) t_RuggedInternalError_init_ },
          { Py_tp_getset, t_RuggedInternalError__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedInternalError)[] = {
          &PY_TYPE_DEF(::java::lang::RuntimeException),
          NULL
        };

        DEFINE_TYPE(RuggedInternalError, t_RuggedInternalError, RuggedInternalError);

        void t_RuggedInternalError::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedInternalError), &PY_TYPE_DEF(RuggedInternalError), module, "RuggedInternalError", 0);
        }

        void t_RuggedInternalError::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedInternalError), "class_", make_descriptor(RuggedInternalError::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedInternalError), "wrapfn_", make_descriptor(t_RuggedInternalError::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedInternalError), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedInternalError_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedInternalError::initializeClass, 1)))
            return NULL;
          return t_RuggedInternalError::wrap_Object(RuggedInternalError(((t_RuggedInternalError *) arg)->object.this$));
        }
        static PyObject *t_RuggedInternalError_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedInternalError::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RuggedInternalError_init_(t_RuggedInternalError *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::Throwable a0((jobject) NULL);
          RuggedInternalError object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = RuggedInternalError(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_RuggedInternalError_getLocalizedMessage(t_RuggedInternalError *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getLocalizedMessage());
            return j2p(result);
          }

          return callSuper(PY_TYPE(RuggedInternalError), (PyObject *) self, "getLocalizedMessage", args, 2);
        }

        static PyObject *t_RuggedInternalError_getMessage(t_RuggedInternalError *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getMessage());
              return j2p(result);
            }
            break;
           case 1:
            {
              ::java::util::Locale a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMessage(a0));
                return j2p(result);
              }
            }
          }

          return callSuper(PY_TYPE(RuggedInternalError), (PyObject *) self, "getMessage", args, 2);
        }

        static PyObject *t_RuggedInternalError_getParts(t_RuggedInternalError *self)
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.getParts());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }

        static PyObject *t_RuggedInternalError_getSpecifier(t_RuggedInternalError *self)
        {
          ::org::hipparchus::exception::Localizable result((jobject) NULL);
          OBJ_CALL(result = self->object.getSpecifier());
          return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
        }

        static PyObject *t_RuggedInternalError_get__localizedMessage(t_RuggedInternalError *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLocalizedMessage());
          return j2p(value);
        }

        static PyObject *t_RuggedInternalError_get__message(t_RuggedInternalError *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getMessage());
          return j2p(value);
        }

        static PyObject *t_RuggedInternalError_get__parts(t_RuggedInternalError *self, void *data)
        {
          JArray< ::java::lang::Object > value((jobject) NULL);
          OBJ_CALL(value = self->object.getParts());
          return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }

        static PyObject *t_RuggedInternalError_get__specifier(t_RuggedInternalError *self, void *data)
        {
          ::org::hipparchus::exception::Localizable value((jobject) NULL);
          OBJ_CALL(value = self->object.getSpecifier());
          return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AbstractTimeInterpolator$InterpolationData.h"
#include "org/orekit/utils/ImmutableTimeStampedCache.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractTimeInterpolator$InterpolationData::class$ = NULL;
      jmethodID *AbstractTimeInterpolator$InterpolationData::mids$ = NULL;
      bool AbstractTimeInterpolator$InterpolationData::live$ = false;

      jclass AbstractTimeInterpolator$InterpolationData::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractTimeInterpolator$InterpolationData");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCachedSamples_63e099e72fa7bec4] = env->getMethodID(cls, "getCachedSamples", "()Lorg/orekit/utils/ImmutableTimeStampedCache;");
          mids$[mid_getInterpolationDate_aaa854c403487cf3] = env->getMethodID(cls, "getInterpolationDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getNeighborList_a6156df500549a58] = env->getMethodID(cls, "getNeighborList", "()Ljava/util/List;");
          mids$[mid_getCentralDate_bbd7d43191f97a9d] = env->getMethodID(cls, "getCentralDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::ImmutableTimeStampedCache AbstractTimeInterpolator$InterpolationData::getCachedSamples() const
      {
        return ::org::orekit::utils::ImmutableTimeStampedCache(env->callObjectMethod(this$, mids$[mid_getCachedSamples_63e099e72fa7bec4]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeInterpolator$InterpolationData::getInterpolationDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getInterpolationDate_aaa854c403487cf3]));
      }

      ::java::util::List AbstractTimeInterpolator$InterpolationData::getNeighborList() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNeighborList_a6156df500549a58]));
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
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_of_(t_AbstractTimeInterpolator$InterpolationData *self, PyObject *args);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getCachedSamples(t_AbstractTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getInterpolationDate(t_AbstractTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getNeighborList(t_AbstractTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__cachedSamples(t_AbstractTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__interpolationDate(t_AbstractTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__neighborList(t_AbstractTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__parameters_(t_AbstractTimeInterpolator$InterpolationData *self, void *data);
      static PyGetSetDef t_AbstractTimeInterpolator$InterpolationData__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator$InterpolationData, cachedSamples),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator$InterpolationData, interpolationDate),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator$InterpolationData, neighborList),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator$InterpolationData, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractTimeInterpolator$InterpolationData__methods_[] = {
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, getCachedSamples, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, getInterpolationDate, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, getNeighborList, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractTimeInterpolator$InterpolationData)[] = {
        { Py_tp_methods, t_AbstractTimeInterpolator$InterpolationData__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractTimeInterpolator$InterpolationData__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractTimeInterpolator$InterpolationData)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractTimeInterpolator$InterpolationData, t_AbstractTimeInterpolator$InterpolationData, AbstractTimeInterpolator$InterpolationData);
      PyObject *t_AbstractTimeInterpolator$InterpolationData::wrap_Object(const AbstractTimeInterpolator$InterpolationData& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractTimeInterpolator$InterpolationData::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractTimeInterpolator$InterpolationData *self = (t_AbstractTimeInterpolator$InterpolationData *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractTimeInterpolator$InterpolationData::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractTimeInterpolator$InterpolationData::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractTimeInterpolator$InterpolationData *self = (t_AbstractTimeInterpolator$InterpolationData *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractTimeInterpolator$InterpolationData::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractTimeInterpolator$InterpolationData), &PY_TYPE_DEF(AbstractTimeInterpolator$InterpolationData), module, "AbstractTimeInterpolator$InterpolationData", 0);
      }

      void t_AbstractTimeInterpolator$InterpolationData::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator$InterpolationData), "class_", make_descriptor(AbstractTimeInterpolator$InterpolationData::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator$InterpolationData), "wrapfn_", make_descriptor(t_AbstractTimeInterpolator$InterpolationData::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator$InterpolationData), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractTimeInterpolator$InterpolationData::initializeClass, 1)))
          return NULL;
        return t_AbstractTimeInterpolator$InterpolationData::wrap_Object(AbstractTimeInterpolator$InterpolationData(((t_AbstractTimeInterpolator$InterpolationData *) arg)->object.this$));
      }
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractTimeInterpolator$InterpolationData::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_of_(t_AbstractTimeInterpolator$InterpolationData *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getCachedSamples(t_AbstractTimeInterpolator$InterpolationData *self)
      {
        ::org::orekit::utils::ImmutableTimeStampedCache result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedSamples());
        return ::org::orekit::utils::t_ImmutableTimeStampedCache::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getInterpolationDate(t_AbstractTimeInterpolator$InterpolationData *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getInterpolationDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getNeighborList(t_AbstractTimeInterpolator$InterpolationData *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getNeighborList());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__parameters_(t_AbstractTimeInterpolator$InterpolationData *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__cachedSamples(t_AbstractTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::orekit::utils::ImmutableTimeStampedCache value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedSamples());
        return ::org::orekit::utils::t_ImmutableTimeStampedCache::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__interpolationDate(t_AbstractTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getInterpolationDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__neighborList(t_AbstractTimeInterpolator$InterpolationData *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeighborList());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitMessages$UTF8Control.h"
#include "java/io/IOException.h"
#include "java/lang/InstantiationException.h"
#include "java/util/Locale.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/IllegalAccessException.h"
#include "org/orekit/errors/OrekitMessages.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitMessages$UTF8Control::class$ = NULL;
      jmethodID *OrekitMessages$UTF8Control::mids$ = NULL;
      bool OrekitMessages$UTF8Control::live$ = false;

      jclass OrekitMessages$UTF8Control::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitMessages$UTF8Control");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_newBundle_155ef0911ce0f838] = env->getMethodID(cls, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitMessages$UTF8Control::OrekitMessages$UTF8Control() : ::java::util::ResourceBundle$Control(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      ::java::util::ResourceBundle OrekitMessages$UTF8Control::newBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, jboolean a4) const
      {
        return ::java::util::ResourceBundle(env->callObjectMethod(this$, mids$[mid_newBundle_155ef0911ce0f838], a0.this$, a1.this$, a2.this$, a3.this$, a4));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitMessages$UTF8Control_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitMessages$UTF8Control_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitMessages$UTF8Control_of_(t_OrekitMessages$UTF8Control *self, PyObject *args);
      static int t_OrekitMessages$UTF8Control_init_(t_OrekitMessages$UTF8Control *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitMessages$UTF8Control_newBundle(t_OrekitMessages$UTF8Control *self, PyObject *args);
      static PyObject *t_OrekitMessages$UTF8Control_get__parameters_(t_OrekitMessages$UTF8Control *self, void *data);
      static PyGetSetDef t_OrekitMessages$UTF8Control__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitMessages$UTF8Control, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitMessages$UTF8Control__methods_[] = {
        DECLARE_METHOD(t_OrekitMessages$UTF8Control, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages$UTF8Control, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages$UTF8Control, of_, METH_VARARGS),
        DECLARE_METHOD(t_OrekitMessages$UTF8Control, newBundle, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitMessages$UTF8Control)[] = {
        { Py_tp_methods, t_OrekitMessages$UTF8Control__methods_ },
        { Py_tp_init, (void *) t_OrekitMessages$UTF8Control_init_ },
        { Py_tp_getset, t_OrekitMessages$UTF8Control__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitMessages$UTF8Control)[] = {
        &PY_TYPE_DEF(::java::util::ResourceBundle$Control),
        NULL
      };

      DEFINE_TYPE(OrekitMessages$UTF8Control, t_OrekitMessages$UTF8Control, OrekitMessages$UTF8Control);
      PyObject *t_OrekitMessages$UTF8Control::wrap_Object(const OrekitMessages$UTF8Control& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrekitMessages$UTF8Control::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrekitMessages$UTF8Control *self = (t_OrekitMessages$UTF8Control *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrekitMessages$UTF8Control::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrekitMessages$UTF8Control::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrekitMessages$UTF8Control *self = (t_OrekitMessages$UTF8Control *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrekitMessages$UTF8Control::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitMessages$UTF8Control), &PY_TYPE_DEF(OrekitMessages$UTF8Control), module, "OrekitMessages$UTF8Control", 0);
      }

      void t_OrekitMessages$UTF8Control::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages$UTF8Control), "class_", make_descriptor(OrekitMessages$UTF8Control::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages$UTF8Control), "wrapfn_", make_descriptor(t_OrekitMessages$UTF8Control::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages$UTF8Control), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitMessages$UTF8Control_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitMessages$UTF8Control::initializeClass, 1)))
          return NULL;
        return t_OrekitMessages$UTF8Control::wrap_Object(OrekitMessages$UTF8Control(((t_OrekitMessages$UTF8Control *) arg)->object.this$));
      }
      static PyObject *t_OrekitMessages$UTF8Control_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitMessages$UTF8Control::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrekitMessages$UTF8Control_of_(t_OrekitMessages$UTF8Control *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_OrekitMessages$UTF8Control_init_(t_OrekitMessages$UTF8Control *self, PyObject *args, PyObject *kwds)
      {
        OrekitMessages$UTF8Control object((jobject) NULL);

        INT_CALL(object = OrekitMessages$UTF8Control());
        self->object = object;
        self->parameters[0] = ::org::orekit::errors::PY_TYPE(OrekitMessages);

        return 0;
      }

      static PyObject *t_OrekitMessages$UTF8Control_newBundle(t_OrekitMessages$UTF8Control *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::util::Locale a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::ClassLoader a3((jobject) NULL);
        jboolean a4;
        ::java::util::ResourceBundle result((jobject) NULL);

        if (!parseArgs(args, "skskZ", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          OBJ_CALL(result = self->object.newBundle(a0, a1, a2, a3, a4));
          return ::java::util::t_ResourceBundle::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OrekitMessages$UTF8Control), (PyObject *) self, "newBundle", args, 2);
      }
      static PyObject *t_OrekitMessages$UTF8Control_get__parameters_(t_OrekitMessages$UTF8Control *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "org/hipparchus/ode/events/AdaptableInterval.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/ODEEventHandler.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *ODEEventDetector::class$ = NULL;
        jmethodID *ODEEventDetector::mids$ = NULL;
        bool ODEEventDetector::live$ = false;

        jclass ODEEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/ODEEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_3b8f73a4d2dddc4a] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)D");
            mids$[mid_getHandler_91daffcf18e93821] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/ODEEventHandler;");
            mids$[mid_getMaxCheckInterval_3c6e49cd9bc6c1c8] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/hipparchus/ode/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_f2f64475e4580546] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getSolver_26f10bd8188f2feb] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;");
            mids$[mid_init_85808f3d6374b436] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble ODEEventDetector::g(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_3b8f73a4d2dddc4a], a0.this$);
        }

        ::org::hipparchus::ode::events::ODEEventHandler ODEEventDetector::getHandler() const
        {
          return ::org::hipparchus::ode::events::ODEEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_91daffcf18e93821]));
        }

        ::org::hipparchus::ode::events::AdaptableInterval ODEEventDetector::getMaxCheckInterval() const
        {
          return ::org::hipparchus::ode::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_3c6e49cd9bc6c1c8]));
        }

        jint ODEEventDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_f2f64475e4580546]);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver ODEEventDetector::getSolver() const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver(env->callObjectMethod(this$, mids$[mid_getSolver_26f10bd8188f2feb]));
        }

        void ODEEventDetector::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_85808f3d6374b436], a0.this$, a1);
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
      namespace events {
        static PyObject *t_ODEEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEEventDetector_g(t_ODEEventDetector *self, PyObject *arg);
        static PyObject *t_ODEEventDetector_getHandler(t_ODEEventDetector *self);
        static PyObject *t_ODEEventDetector_getMaxCheckInterval(t_ODEEventDetector *self);
        static PyObject *t_ODEEventDetector_getMaxIterationCount(t_ODEEventDetector *self);
        static PyObject *t_ODEEventDetector_getSolver(t_ODEEventDetector *self);
        static PyObject *t_ODEEventDetector_init(t_ODEEventDetector *self, PyObject *args);
        static PyObject *t_ODEEventDetector_get__handler(t_ODEEventDetector *self, void *data);
        static PyObject *t_ODEEventDetector_get__maxCheckInterval(t_ODEEventDetector *self, void *data);
        static PyObject *t_ODEEventDetector_get__maxIterationCount(t_ODEEventDetector *self, void *data);
        static PyObject *t_ODEEventDetector_get__solver(t_ODEEventDetector *self, void *data);
        static PyGetSetDef t_ODEEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ODEEventDetector, handler),
          DECLARE_GET_FIELD(t_ODEEventDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_ODEEventDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_ODEEventDetector, solver),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ODEEventDetector__methods_[] = {
          DECLARE_METHOD(t_ODEEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEEventDetector, g, METH_O),
          DECLARE_METHOD(t_ODEEventDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_ODEEventDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_ODEEventDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_ODEEventDetector, getSolver, METH_NOARGS),
          DECLARE_METHOD(t_ODEEventDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEEventDetector)[] = {
          { Py_tp_methods, t_ODEEventDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ODEEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEEventDetector, t_ODEEventDetector, ODEEventDetector);

        void t_ODEEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEEventDetector), &PY_TYPE_DEF(ODEEventDetector), module, "ODEEventDetector", 0);
        }

        void t_ODEEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventDetector), "class_", make_descriptor(ODEEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventDetector), "wrapfn_", make_descriptor(t_ODEEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEEventDetector::initializeClass, 1)))
            return NULL;
          return t_ODEEventDetector::wrap_Object(ODEEventDetector(((t_ODEEventDetector *) arg)->object.this$));
        }
        static PyObject *t_ODEEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEEventDetector_g(t_ODEEventDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_ODEEventDetector_getHandler(t_ODEEventDetector *self)
        {
          ::org::hipparchus::ode::events::ODEEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEEventHandler::wrap_Object(result);
        }

        static PyObject *t_ODEEventDetector_getMaxCheckInterval(t_ODEEventDetector *self)
        {
          ::org::hipparchus::ode::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_ODEEventDetector_getMaxIterationCount(t_ODEEventDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ODEEventDetector_getSolver(t_ODEEventDetector *self)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::wrap_Object(result, ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction));
        }

        static PyObject *t_ODEEventDetector_init(t_ODEEventDetector *self, PyObject *args)
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

        static PyObject *t_ODEEventDetector_get__handler(t_ODEEventDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEEventHandler::wrap_Object(value);
        }

        static PyObject *t_ODEEventDetector_get__maxCheckInterval(t_ODEEventDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_ODEEventDetector_get__maxIterationCount(t_ODEEventDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_ODEEventDetector_get__solver(t_ODEEventDetector *self, void *data)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/util/TimeZone.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/Month.h"
#include "java/lang/Comparable.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/util/Date.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldAbsoluteDate::class$ = NULL;
      jmethodID *FieldAbsoluteDate::mids$ = NULL;
      bool FieldAbsoluteDate::live$ = false;

      jclass FieldAbsoluteDate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldAbsoluteDate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_205c34b8e33cf33f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_4755a82757aa97d9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;D)V");
          mids$[mid_init$_ec524e87348c3a08] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_80058f185a6b4b35] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_init$_2e02d11b2b84552b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_d91841320b4d4f87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/util/Date;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_720ad314d22b945b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_3d19303ecb965f91] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_9840df2f97486f45] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_bd22b120bed2ad7b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/time/DateTimeComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_c09a15c281545dfb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_dc1a59fc6ff312b6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;ILorg/orekit/time/Month;ILorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_6eca69ab117c5598] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IIILorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_b45cd2005cdf72ee] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;ILorg/orekit/time/Month;IIIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_232d890b1a0eab17] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IIIIIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_compareTo_90583a249f651dc5] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/FieldAbsoluteDate;)I");
          mids$[mid_createBesselianEpoch_b179475577cb34cc] = env->getStaticMethodID(cls, "createBesselianEpoch", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createBesselianEpoch_4fec374212b3e123] = env->getStaticMethodID(cls, "createBesselianEpoch", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createGPSDate_be9d571ff63cfdfb] = env->getStaticMethodID(cls, "createGPSDate", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createGPSDate_65a00228a8497170] = env->getStaticMethodID(cls, "createGPSDate", "(ILorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createJDDate_65a00228a8497170] = env->getStaticMethodID(cls, "createJDDate", "(ILorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createJulianEpoch_b179475577cb34cc] = env->getStaticMethodID(cls, "createJulianEpoch", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createJulianEpoch_4fec374212b3e123] = env->getStaticMethodID(cls, "createJulianEpoch", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createMJDDate_65a00228a8497170] = env->getStaticMethodID(cls, "createMJDDate", "(ILorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_durationFrom_6d1712f09a3dbe55] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_durationFrom_7bc0fd76ee915b72] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getArbitraryEpoch_f5242eafca7336d1] = env->getStaticMethodID(cls, "getArbitraryEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getCCSDSEpoch_f5242eafca7336d1] = env->getStaticMethodID(cls, "getCCSDSEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getComponents_35b9f69c73993da4] = env->getMethodID(cls, "getComponents", "(Ljava/util/TimeZone;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_9f0387d3e8c4d9e9] = env->getMethodID(cls, "getComponents", "(I)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_cc66809e3a6a3d13] = env->getMethodID(cls, "getComponents", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_2c20491308df7588] = env->getMethodID(cls, "getComponents", "(Ljava/util/TimeZone;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_bf941b87708f3b2b] = env->getMethodID(cls, "getComponents", "(ILorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getDate_09b0a926600dfc14] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getFiftiesEpoch_f5242eafca7336d1] = env->getStaticMethodID(cls, "getFiftiesEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getFutureInfinity_f5242eafca7336d1] = env->getStaticMethodID(cls, "getFutureInfinity", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getGPSEpoch_f5242eafca7336d1] = env->getStaticMethodID(cls, "getGPSEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getGalileoEpoch_f5242eafca7336d1] = env->getStaticMethodID(cls, "getGalileoEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getJ2000Epoch_f5242eafca7336d1] = env->getStaticMethodID(cls, "getJ2000Epoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getJavaEpoch_f5242eafca7336d1] = env->getStaticMethodID(cls, "getJavaEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getJulianEpoch_f5242eafca7336d1] = env->getStaticMethodID(cls, "getJulianEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getModifiedJulianEpoch_f5242eafca7336d1] = env->getStaticMethodID(cls, "getModifiedJulianEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getPastInfinity_f5242eafca7336d1] = env->getStaticMethodID(cls, "getPastInfinity", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_hasZeroField_e470b6d9e0d979db] = env->getMethodID(cls, "hasZeroField", "()Z");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isAfter_99ba459ed031421b] = env->getMethodID(cls, "isAfter", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isAfterOrEqualTo_99ba459ed031421b] = env->getMethodID(cls, "isAfterOrEqualTo", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isBefore_99ba459ed031421b] = env->getMethodID(cls, "isBefore", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isBeforeOrEqualTo_99ba459ed031421b] = env->getMethodID(cls, "isBeforeOrEqualTo", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isBetween_28a93535a0abcc76] = env->getMethodID(cls, "isBetween", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isBetweenOrEqualTo_28a93535a0abcc76] = env->getMethodID(cls, "isBetweenOrEqualTo", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isCloseTo_8549b0b631079127] = env->getMethodID(cls, "isCloseTo", "(Lorg/orekit/time/FieldTimeStamped;D)Z");
          mids$[mid_isEqualTo_99ba459ed031421b] = env->getMethodID(cls, "isEqualTo", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_offsetFrom_56380e3faf4084f4] = env->getMethodID(cls, "offsetFrom", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/TimeScale;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_parseCCSDSCalendarSegmentedTimeCode_96f4bfec3e132622] = env->getMethodID(cls, "parseCCSDSCalendarSegmentedTimeCode", "(B[B)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSCalendarSegmentedTimeCode_76898e769dc3d563] = env->getMethodID(cls, "parseCCSDSCalendarSegmentedTimeCode", "(B[BLorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSDaySegmentedTimeCode_5b8f932902581419] = env->getStaticMethodID(cls, "parseCCSDSDaySegmentedTimeCode", "(Lorg/hipparchus/Field;B[BLorg/orekit/time/DateComponents;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSDaySegmentedTimeCode_89b4cc857d22de7a] = env->getStaticMethodID(cls, "parseCCSDSDaySegmentedTimeCode", "(Lorg/hipparchus/Field;B[BLorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSUnsegmentedTimeCode_49f89ce3b3385442] = env->getStaticMethodID(cls, "parseCCSDSUnsegmentedTimeCode", "(Lorg/hipparchus/Field;BB[BLorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSUnsegmentedTimeCode_7f8f89704ead9684] = env->getStaticMethodID(cls, "parseCCSDSUnsegmentedTimeCode", "(Lorg/hipparchus/Field;BB[BLorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_shiftedBy_d47015dfb61dc025] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_shiftedBy_b179475577cb34cc] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_timeScalesOffset_a09629a2ff24a390] = env->getMethodID(cls, "timeScalesOffset", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScale;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toAbsoluteDate_aaa854c403487cf3] = env->getMethodID(cls, "toAbsoluteDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_toDate_f64dbfcfe4c641a8] = env->getMethodID(cls, "toDate", "(Lorg/orekit/time/TimeScale;)Ljava/util/Date;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_498d3d20a2b4a836] = env->getMethodID(cls, "toString", "(Ljava/util/TimeZone;)Ljava/lang/String;");
          mids$[mid_toString_90cbcc0b7a5ddae9] = env->getMethodID(cls, "toString", "(I)Ljava/lang/String;");
          mids$[mid_toString_44577b71ebe5fefb] = env->getMethodID(cls, "toString", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toString_57a8fe1fee44b5a2] = env->getMethodID(cls, "toString", "(Ljava/util/TimeZone;Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toString_6c05df8a55d4fe6c] = env->getMethodID(cls, "toString", "(ILorg/orekit/time/TimeScale;)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_205c34b8e33cf33f, a0.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const FieldAbsoluteDate & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4755a82757aa97d9, a0.this$, a1)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ec524e87348c3a08, a0.this$, a1.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::org::orekit::time::AbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_80058f185a6b4b35, a0.this$, a1.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2e02d11b2b84552b, a0.this$, a1.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::java::util::Date & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d91841320b4d4f87, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_720ad314d22b945b, a0.this$, a1, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3d19303ecb965f91, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::org::orekit::time::DateComponents & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9840df2f97486f45, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::org::orekit::time::DateTimeComponents & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd22b120bed2ad7b, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::org::orekit::time::DateComponents & a1, const ::org::orekit::time::TimeComponents & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c09a15c281545dfb, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, jint a1, const ::org::orekit::time::Month & a2, jint a3, const ::org::orekit::time::TimeScale & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dc1a59fc6ff312b6, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3, const ::org::orekit::time::TimeScale & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6eca69ab117c5598, a0.this$, a1, a2, a3, a4.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, jint a1, const ::org::orekit::time::Month & a2, jint a3, jint a4, jint a5, jdouble a6, const ::org::orekit::time::TimeScale & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b45cd2005cdf72ee, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3, jint a4, jint a5, jdouble a6, const ::org::orekit::time::TimeScale & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_232d890b1a0eab17, a0.this$, a1, a2, a3, a4, a5, a6, a7.this$)) {}

      jint FieldAbsoluteDate::compareTo(const FieldAbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_90583a249f651dc5], a0.this$);
      }

      FieldAbsoluteDate FieldAbsoluteDate::createBesselianEpoch(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createBesselianEpoch_b179475577cb34cc], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createBesselianEpoch(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::TimeScales & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createBesselianEpoch_4fec374212b3e123], a0.this$, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createGPSDate(jint a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createGPSDate_be9d571ff63cfdfb], a0, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createGPSDate(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createGPSDate_65a00228a8497170], a0, a1.this$, a2.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createJDDate(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJDDate_65a00228a8497170], a0, a1.this$, a2.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createJulianEpoch(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJulianEpoch_b179475577cb34cc], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createJulianEpoch(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::TimeScales & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJulianEpoch_4fec374212b3e123], a0.this$, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createMJDDate(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createMJDDate_65a00228a8497170], a0, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldAbsoluteDate::durationFrom(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_durationFrom_6d1712f09a3dbe55], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldAbsoluteDate::durationFrom(const FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_durationFrom_7bc0fd76ee915b72], a0.this$));
      }

      jboolean FieldAbsoluteDate::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      FieldAbsoluteDate FieldAbsoluteDate::getArbitraryEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getArbitraryEpoch_f5242eafca7336d1], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getCCSDSEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getCCSDSEpoch_f5242eafca7336d1], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(const ::java::util::TimeZone & a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_35b9f69c73993da4], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(jint a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_9f0387d3e8c4d9e9], a0));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_cc66809e3a6a3d13], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(const ::java::util::TimeZone & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_2c20491308df7588], a0.this$, a1.this$));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(jint a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_bf941b87708f3b2b], a0, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getDate() const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_09b0a926600dfc14]));
      }

      ::org::hipparchus::Field FieldAbsoluteDate::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getFiftiesEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getFiftiesEpoch_f5242eafca7336d1], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getFutureInfinity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getFutureInfinity_f5242eafca7336d1], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getGPSEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getGPSEpoch_f5242eafca7336d1], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getGalileoEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getGalileoEpoch_f5242eafca7336d1], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getJ2000Epoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getJ2000Epoch_f5242eafca7336d1], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getJavaEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getJavaEpoch_f5242eafca7336d1], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getJulianEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getJulianEpoch_f5242eafca7336d1], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getModifiedJulianEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getModifiedJulianEpoch_f5242eafca7336d1], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getPastInfinity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getPastInfinity_f5242eafca7336d1], a0.this$));
      }

      jboolean FieldAbsoluteDate::hasZeroField() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasZeroField_e470b6d9e0d979db]);
      }

      jint FieldAbsoluteDate::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      jboolean FieldAbsoluteDate::isAfter(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAfter_99ba459ed031421b], a0.this$);
      }

      jboolean FieldAbsoluteDate::isAfterOrEqualTo(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAfterOrEqualTo_99ba459ed031421b], a0.this$);
      }

      jboolean FieldAbsoluteDate::isBefore(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBefore_99ba459ed031421b], a0.this$);
      }

      jboolean FieldAbsoluteDate::isBeforeOrEqualTo(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBeforeOrEqualTo_99ba459ed031421b], a0.this$);
      }

      jboolean FieldAbsoluteDate::isBetween(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBetween_28a93535a0abcc76], a0.this$, a1.this$);
      }

      jboolean FieldAbsoluteDate::isBetweenOrEqualTo(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBetweenOrEqualTo_28a93535a0abcc76], a0.this$, a1.this$);
      }

      jboolean FieldAbsoluteDate::isCloseTo(const ::org::orekit::time::FieldTimeStamped & a0, jdouble a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isCloseTo_8549b0b631079127], a0.this$, a1);
      }

      jboolean FieldAbsoluteDate::isEqualTo(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isEqualTo_99ba459ed031421b], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldAbsoluteDate::offsetFrom(const FieldAbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFrom_56380e3faf4084f4], a0.this$, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1) const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_parseCCSDSCalendarSegmentedTimeCode_96f4bfec3e132622], a0, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1, const ::org::orekit::time::TimeScale & a2) const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_parseCCSDSCalendarSegmentedTimeCode_76898e769dc3d563], a0, a1.this$, a2.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSDaySegmentedTimeCode(const ::org::hipparchus::Field & a0, jbyte a1, const JArray< jbyte > & a2, const ::org::orekit::time::DateComponents & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSDaySegmentedTimeCode_5b8f932902581419], a0.this$, a1, a2.this$, a3.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSDaySegmentedTimeCode(const ::org::hipparchus::Field & a0, jbyte a1, const JArray< jbyte > & a2, const ::org::orekit::time::DateComponents & a3, const ::org::orekit::time::TimeScale & a4)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSDaySegmentedTimeCode_89b4cc857d22de7a], a0.this$, a1, a2.this$, a3.this$, a4.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSUnsegmentedTimeCode(const ::org::hipparchus::Field & a0, jbyte a1, jbyte a2, const JArray< jbyte > & a3, const FieldAbsoluteDate & a4)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSUnsegmentedTimeCode_49f89ce3b3385442], a0.this$, a1, a2, a3.this$, a4.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSUnsegmentedTimeCode(const ::org::hipparchus::Field & a0, jbyte a1, jbyte a2, const JArray< jbyte > & a3, const FieldAbsoluteDate & a4, const FieldAbsoluteDate & a5)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSUnsegmentedTimeCode_7f8f89704ead9684], a0.this$, a1, a2, a3.this$, a4.this$, a5.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::shiftedBy(jdouble a0) const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_shiftedBy_d47015dfb61dc025], a0));
      }

      FieldAbsoluteDate FieldAbsoluteDate::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_shiftedBy_b179475577cb34cc], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldAbsoluteDate::timeScalesOffset(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_timeScalesOffset_a09629a2ff24a390], a0.this$, a1.this$));
      }

      ::org::orekit::time::AbsoluteDate FieldAbsoluteDate::toAbsoluteDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_toAbsoluteDate_aaa854c403487cf3]));
      }

      ::java::util::Date FieldAbsoluteDate::toDate(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::util::Date(env->callObjectMethod(this$, mids$[mid_toDate_f64dbfcfe4c641a8], a0.this$));
      }

      ::java::lang::String FieldAbsoluteDate::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      ::java::lang::String FieldAbsoluteDate::toString(const ::java::util::TimeZone & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_498d3d20a2b4a836], a0.this$));
      }

      ::java::lang::String FieldAbsoluteDate::toString(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_90cbcc0b7a5ddae9], a0));
      }

      ::java::lang::String FieldAbsoluteDate::toString(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_44577b71ebe5fefb], a0.this$));
      }

      ::java::lang::String FieldAbsoluteDate::toString(const ::java::util::TimeZone & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_57a8fe1fee44b5a2], a0.this$, a1.this$));
      }

      ::java::lang::String FieldAbsoluteDate::toString(jint a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_6c05df8a55d4fe6c], a0, a1.this$));
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
      static PyObject *t_FieldAbsoluteDate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_of_(t_FieldAbsoluteDate *self, PyObject *args);
      static int t_FieldAbsoluteDate_init_(t_FieldAbsoluteDate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAbsoluteDate_compareTo(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_createBesselianEpoch(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_createGPSDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_createJDDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_createJulianEpoch(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_createMJDDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_durationFrom(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_equals(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_getArbitraryEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getCCSDSEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getComponents(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_getDate(t_FieldAbsoluteDate *self);
      static PyObject *t_FieldAbsoluteDate_getField(t_FieldAbsoluteDate *self);
      static PyObject *t_FieldAbsoluteDate_getFiftiesEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getFutureInfinity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getGPSEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getGalileoEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getJ2000Epoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getJavaEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getJulianEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getModifiedJulianEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getPastInfinity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_hasZeroField(t_FieldAbsoluteDate *self);
      static PyObject *t_FieldAbsoluteDate_hashCode(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_isAfter(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_isAfterOrEqualTo(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_isBefore(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_isBeforeOrEqualTo(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_isBetween(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_isBetweenOrEqualTo(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_isCloseTo(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_isEqualTo(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_offsetFrom(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_parseCCSDSCalendarSegmentedTimeCode(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_parseCCSDSDaySegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_parseCCSDSUnsegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_shiftedBy(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_timeScalesOffset(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_toAbsoluteDate(t_FieldAbsoluteDate *self);
      static PyObject *t_FieldAbsoluteDate_toDate(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_toString(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_get__date(t_FieldAbsoluteDate *self, void *data);
      static PyObject *t_FieldAbsoluteDate_get__field(t_FieldAbsoluteDate *self, void *data);
      static PyObject *t_FieldAbsoluteDate_get__parameters_(t_FieldAbsoluteDate *self, void *data);
      static PyGetSetDef t_FieldAbsoluteDate__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAbsoluteDate, date),
        DECLARE_GET_FIELD(t_FieldAbsoluteDate, field),
        DECLARE_GET_FIELD(t_FieldAbsoluteDate, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAbsoluteDate__methods_[] = {
        DECLARE_METHOD(t_FieldAbsoluteDate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, compareTo, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, createBesselianEpoch, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, createGPSDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, createJDDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, createJulianEpoch, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, createMJDDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, durationFrom, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getArbitraryEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getCCSDSEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getComponents, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getFiftiesEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getFutureInfinity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getGPSEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getGalileoEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getJ2000Epoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getJavaEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getJulianEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getModifiedJulianEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getPastInfinity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, hasZeroField, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, isAfter, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, isAfterOrEqualTo, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, isBefore, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, isBeforeOrEqualTo, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, isBetween, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, isBetweenOrEqualTo, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, isCloseTo, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, isEqualTo, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, offsetFrom, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, parseCCSDSCalendarSegmentedTimeCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, parseCCSDSDaySegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, parseCCSDSUnsegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, timeScalesOffset, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, toAbsoluteDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, toDate, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAbsoluteDate)[] = {
        { Py_tp_methods, t_FieldAbsoluteDate__methods_ },
        { Py_tp_init, (void *) t_FieldAbsoluteDate_init_ },
        { Py_tp_getset, t_FieldAbsoluteDate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAbsoluteDate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAbsoluteDate, t_FieldAbsoluteDate, FieldAbsoluteDate);
      PyObject *t_FieldAbsoluteDate::wrap_Object(const FieldAbsoluteDate& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsoluteDate::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsoluteDate *self = (t_FieldAbsoluteDate *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAbsoluteDate::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsoluteDate::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsoluteDate *self = (t_FieldAbsoluteDate *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAbsoluteDate::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAbsoluteDate), &PY_TYPE_DEF(FieldAbsoluteDate), module, "FieldAbsoluteDate", 0);
      }

      void t_FieldAbsoluteDate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsoluteDate), "class_", make_descriptor(FieldAbsoluteDate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsoluteDate), "wrapfn_", make_descriptor(t_FieldAbsoluteDate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsoluteDate), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAbsoluteDate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAbsoluteDate::initializeClass, 1)))
          return NULL;
        return t_FieldAbsoluteDate::wrap_Object(FieldAbsoluteDate(((t_FieldAbsoluteDate *) arg)->object.this$));
      }
      static PyObject *t_FieldAbsoluteDate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAbsoluteDate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAbsoluteDate_of_(t_FieldAbsoluteDate *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAbsoluteDate_init_(t_FieldAbsoluteDate *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldAbsoluteDate(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KD", FieldAbsoluteDate::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_, &a1))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KK", FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Date a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::Field::initializeClass, ::java::util::Date::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KDk", FieldAbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Ksk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DateComponents a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DateTimeComponents a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateTimeComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DateComponents a1((jobject) NULL);
            ::org::orekit::time::TimeComponents a2((jobject) NULL);
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kkkk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::time::Month a2((jobject) NULL);
            PyTypeObject **p2;
            jint a3;
            ::org::orekit::time::TimeScale a4((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KIKIk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::Month::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_Month::parameters_, &a3, &a4))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            ::org::orekit::time::TimeScale a4((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KIIIk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 8:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::time::Month a2((jobject) NULL);
            PyTypeObject **p2;
            jint a3;
            jint a4;
            jint a5;
            jdouble a6;
            ::org::orekit::time::TimeScale a7((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KIKIIIDk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::Month::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_Month::parameters_, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jint a5;
            jdouble a6;
            ::org::orekit::time::TimeScale a7((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KIIIIIDk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3, a4, a5, a6, a7));
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

      static PyObject *t_FieldAbsoluteDate_compareTo(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        jint result;

        if (!parseArg(arg, "K", FieldAbsoluteDate::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createBesselianEpoch(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createBesselianEpoch(a0));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createBesselianEpoch(a0, a1));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createBesselianEpoch", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createGPSDate(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createGPSDate(a0, a1));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "IKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createGPSDate(a0, a1, a2));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createGPSDate", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createJDDate(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "IKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createJDDate(a0, a1, a2));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createJDDate", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createJulianEpoch(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createJulianEpoch(a0));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createJulianEpoch(a0, a1));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createJulianEpoch", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createMJDDate(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "IKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createMJDDate(a0, a1, a2));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createMJDDate", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_durationFrom(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.durationFrom(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", FieldAbsoluteDate::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.durationFrom(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "durationFrom", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_equals(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldAbsoluteDate), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldAbsoluteDate_getArbitraryEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getArbitraryEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getArbitraryEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getCCSDSEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getCCSDSEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getCCSDSEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getComponents(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::TimeZone::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::TimeZone::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getComponents(a0, a1));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getComponents(a0, a1));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getComponents", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getDate(t_FieldAbsoluteDate *self)
      {
        FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbsoluteDate_getField(t_FieldAbsoluteDate *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbsoluteDate_getFiftiesEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getFiftiesEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFiftiesEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getFutureInfinity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getFutureInfinity(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFutureInfinity", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getGPSEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getGPSEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getGPSEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getGalileoEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getGalileoEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getGalileoEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getJ2000Epoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getJ2000Epoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getJ2000Epoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getJavaEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getJavaEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getJavaEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getJulianEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getJulianEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getModifiedJulianEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getModifiedJulianEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getModifiedJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getPastInfinity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getPastInfinity(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getPastInfinity", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_hasZeroField(t_FieldAbsoluteDate *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasZeroField());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldAbsoluteDate_hashCode(t_FieldAbsoluteDate *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldAbsoluteDate), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FieldAbsoluteDate_isAfter(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isAfter(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAfter", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isAfterOrEqualTo(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isAfterOrEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAfterOrEqualTo", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isBefore(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isBefore(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBefore", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isBeforeOrEqualTo(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isBeforeOrEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBeforeOrEqualTo", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isBetween(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
        PyTypeObject **p1;
        jboolean result;

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isBetween(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBetween", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isBetweenOrEqualTo(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
        PyTypeObject **p1;
        jboolean result;

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isBetweenOrEqualTo(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBetweenOrEqualTo", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isCloseTo(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        jboolean result;

        if (!parseArgs(args, "KD", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.isCloseTo(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isCloseTo", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isEqualTo(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isEqualTo", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_offsetFrom(t_FieldAbsoluteDate *self, PyObject *args)
      {
        FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "Kk", FieldAbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.offsetFrom(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFrom", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_parseCCSDSCalendarSegmentedTimeCode(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[B", &a0, &a1))
            {
              OBJ_CALL(result = self->object.parseCCSDSCalendarSegmentedTimeCode(a0, a1));
              return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 3:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[Bk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.parseCCSDSCalendarSegmentedTimeCode(a0, a1, a2));
              return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parseCCSDSCalendarSegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_parseCCSDSDaySegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jbyte a1;
            JArray< jbyte > a2((jobject) NULL);
            ::org::orekit::time::DateComponents a3((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "KB[Bk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateComponents::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::parseCCSDSDaySegmentedTimeCode(a0, a1, a2, a3));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jbyte a1;
            JArray< jbyte > a2((jobject) NULL);
            ::org::orekit::time::DateComponents a3((jobject) NULL);
            ::org::orekit::time::TimeScale a4((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "KB[Bkk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::parseCCSDSDaySegmentedTimeCode(a0, a1, a2, a3, a4));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSDaySegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_parseCCSDSUnsegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jbyte a1;
            jbyte a2;
            JArray< jbyte > a3((jobject) NULL);
            FieldAbsoluteDate a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "KBB[BK", ::org::hipparchus::Field::initializeClass, FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &p4, t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::parseCCSDSUnsegmentedTimeCode(a0, a1, a2, a3, a4));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jbyte a1;
            jbyte a2;
            JArray< jbyte > a3((jobject) NULL);
            FieldAbsoluteDate a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAbsoluteDate a5((jobject) NULL);
            PyTypeObject **p5;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "KBB[BKK", ::org::hipparchus::Field::initializeClass, FieldAbsoluteDate::initializeClass, FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &p4, t_FieldAbsoluteDate::parameters_, &a5, &p5, t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::parseCCSDSUnsegmentedTimeCode(a0, a1, a2, a3, a4, a5));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSUnsegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_shiftedBy(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_timeScalesOffset(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.timeScalesOffset(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "timeScalesOffset", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_toAbsoluteDate(t_FieldAbsoluteDate *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.toAbsoluteDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_FieldAbsoluteDate_toDate(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::java::util::Date result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toDate(a0));
          return ::java::util::t_Date::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDate", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_toString(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::TimeZone::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::TimeZone::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(FieldAbsoluteDate), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_FieldAbsoluteDate_get__parameters_(t_FieldAbsoluteDate *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAbsoluteDate_get__date(t_FieldAbsoluteDate *self, void *data)
      {
        FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldAbsoluteDate_get__field(t_FieldAbsoluteDate *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldStopOnEvent.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldStopOnEvent::class$ = NULL;
          jmethodID *FieldStopOnEvent::mids$ = NULL;
          bool FieldStopOnEvent::live$ = false;

          jclass FieldStopOnEvent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldStopOnEvent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_9bc9ae10f590e312] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldStopOnEvent::FieldStopOnEvent() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::org::hipparchus::ode::events::Action FieldStopOnEvent::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_9bc9ae10f590e312], a0.this$, a1.this$, a2));
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
      namespace events {
        namespace handlers {
          static PyObject *t_FieldStopOnEvent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnEvent_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnEvent_of_(t_FieldStopOnEvent *self, PyObject *args);
          static int t_FieldStopOnEvent_init_(t_FieldStopOnEvent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldStopOnEvent_eventOccurred(t_FieldStopOnEvent *self, PyObject *args);
          static PyObject *t_FieldStopOnEvent_get__parameters_(t_FieldStopOnEvent *self, void *data);
          static PyGetSetDef t_FieldStopOnEvent__fields_[] = {
            DECLARE_GET_FIELD(t_FieldStopOnEvent, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldStopOnEvent__methods_[] = {
            DECLARE_METHOD(t_FieldStopOnEvent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnEvent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnEvent, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldStopOnEvent, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldStopOnEvent)[] = {
            { Py_tp_methods, t_FieldStopOnEvent__methods_ },
            { Py_tp_init, (void *) t_FieldStopOnEvent_init_ },
            { Py_tp_getset, t_FieldStopOnEvent__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldStopOnEvent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldStopOnEvent, t_FieldStopOnEvent, FieldStopOnEvent);
          PyObject *t_FieldStopOnEvent::wrap_Object(const FieldStopOnEvent& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnEvent::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnEvent *self = (t_FieldStopOnEvent *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldStopOnEvent::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnEvent::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnEvent *self = (t_FieldStopOnEvent *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldStopOnEvent::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldStopOnEvent), &PY_TYPE_DEF(FieldStopOnEvent), module, "FieldStopOnEvent", 0);
          }

          void t_FieldStopOnEvent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnEvent), "class_", make_descriptor(FieldStopOnEvent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnEvent), "wrapfn_", make_descriptor(t_FieldStopOnEvent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnEvent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldStopOnEvent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldStopOnEvent::initializeClass, 1)))
              return NULL;
            return t_FieldStopOnEvent::wrap_Object(FieldStopOnEvent(((t_FieldStopOnEvent *) arg)->object.this$));
          }
          static PyObject *t_FieldStopOnEvent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldStopOnEvent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldStopOnEvent_of_(t_FieldStopOnEvent *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldStopOnEvent_init_(t_FieldStopOnEvent *self, PyObject *args, PyObject *kwds)
          {
            FieldStopOnEvent object((jobject) NULL);

            INT_CALL(object = FieldStopOnEvent());
            self->object = object;

            return 0;
          }

          static PyObject *t_FieldStopOnEvent_eventOccurred(t_FieldStopOnEvent *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
          static PyObject *t_FieldStopOnEvent_get__parameters_(t_FieldStopOnEvent *self, void *data)
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
#include "org/orekit/propagation/events/FieldOfViewDetector.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/FieldOfViewDetector.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldOfViewDetector::class$ = NULL;
        jmethodID *FieldOfViewDetector::mids$ = NULL;
        bool FieldOfViewDetector::live$ = false;

        jclass FieldOfViewDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldOfViewDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_eb7f6b32b4c4c016] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/geometry/fov/FieldOfView;)V");
            mids$[mid_init$_8c3123eda1317708] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;DLorg/orekit/propagation/events/VisibilityTrigger;Lorg/orekit/geometry/fov/FieldOfView;)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getFOV_f51bf66c035a133c] = env->getMethodID(cls, "getFOV", "()Lorg/orekit/geometry/fov/FieldOfView;");
            mids$[mid_getPVTarget_7044cb1966c8a481] = env->getMethodID(cls, "getPVTarget", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_create_899b1be126382817] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/FieldOfViewDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldOfViewDetector::FieldOfViewDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::geometry::fov::FieldOfView & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_eb7f6b32b4c4c016, a0.this$, a1.this$)) {}

        FieldOfViewDetector::FieldOfViewDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2, const ::org::orekit::geometry::fov::FieldOfView & a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_8c3123eda1317708, a0.this$, a1, a2.this$, a3.this$)) {}

        jdouble FieldOfViewDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::geometry::fov::FieldOfView FieldOfViewDetector::getFOV() const
        {
          return ::org::orekit::geometry::fov::FieldOfView(env->callObjectMethod(this$, mids$[mid_getFOV_f51bf66c035a133c]));
        }

        ::org::orekit::utils::PVCoordinatesProvider FieldOfViewDetector::getPVTarget() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPVTarget_7044cb1966c8a481]));
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
        static PyObject *t_FieldOfViewDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOfViewDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOfViewDetector_of_(t_FieldOfViewDetector *self, PyObject *args);
        static int t_FieldOfViewDetector_init_(t_FieldOfViewDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldOfViewDetector_g(t_FieldOfViewDetector *self, PyObject *args);
        static PyObject *t_FieldOfViewDetector_getFOV(t_FieldOfViewDetector *self);
        static PyObject *t_FieldOfViewDetector_getPVTarget(t_FieldOfViewDetector *self);
        static PyObject *t_FieldOfViewDetector_get__fOV(t_FieldOfViewDetector *self, void *data);
        static PyObject *t_FieldOfViewDetector_get__pVTarget(t_FieldOfViewDetector *self, void *data);
        static PyObject *t_FieldOfViewDetector_get__parameters_(t_FieldOfViewDetector *self, void *data);
        static PyGetSetDef t_FieldOfViewDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOfViewDetector, fOV),
          DECLARE_GET_FIELD(t_FieldOfViewDetector, pVTarget),
          DECLARE_GET_FIELD(t_FieldOfViewDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOfViewDetector__methods_[] = {
          DECLARE_METHOD(t_FieldOfViewDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOfViewDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOfViewDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOfViewDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldOfViewDetector, getFOV, METH_NOARGS),
          DECLARE_METHOD(t_FieldOfViewDetector, getPVTarget, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOfViewDetector)[] = {
          { Py_tp_methods, t_FieldOfViewDetector__methods_ },
          { Py_tp_init, (void *) t_FieldOfViewDetector_init_ },
          { Py_tp_getset, t_FieldOfViewDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOfViewDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldOfViewDetector, t_FieldOfViewDetector, FieldOfViewDetector);
        PyObject *t_FieldOfViewDetector::wrap_Object(const FieldOfViewDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOfViewDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOfViewDetector *self = (t_FieldOfViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOfViewDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOfViewDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOfViewDetector *self = (t_FieldOfViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOfViewDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOfViewDetector), &PY_TYPE_DEF(FieldOfViewDetector), module, "FieldOfViewDetector", 0);
        }

        void t_FieldOfViewDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfViewDetector), "class_", make_descriptor(FieldOfViewDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfViewDetector), "wrapfn_", make_descriptor(t_FieldOfViewDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfViewDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOfViewDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOfViewDetector::initializeClass, 1)))
            return NULL;
          return t_FieldOfViewDetector::wrap_Object(FieldOfViewDetector(((t_FieldOfViewDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldOfViewDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOfViewDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOfViewDetector_of_(t_FieldOfViewDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldOfViewDetector_init_(t_FieldOfViewDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
              ::org::orekit::geometry::fov::FieldOfView a1((jobject) NULL);
              FieldOfViewDetector object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::geometry::fov::FieldOfView::initializeClass, &a0, &a1))
              {
                INT_CALL(object = FieldOfViewDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(FieldOfViewDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::propagation::events::VisibilityTrigger a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::geometry::fov::FieldOfView a3((jobject) NULL);
              FieldOfViewDetector object((jobject) NULL);

              if (!parseArgs(args, "kDKk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::propagation::events::VisibilityTrigger::initializeClass, ::org::orekit::geometry::fov::FieldOfView::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::events::t_VisibilityTrigger::parameters_, &a3))
              {
                INT_CALL(object = FieldOfViewDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(FieldOfViewDetector);
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

        static PyObject *t_FieldOfViewDetector_g(t_FieldOfViewDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FieldOfViewDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldOfViewDetector_getFOV(t_FieldOfViewDetector *self)
        {
          ::org::orekit::geometry::fov::FieldOfView result((jobject) NULL);
          OBJ_CALL(result = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(result);
        }

        static PyObject *t_FieldOfViewDetector_getPVTarget(t_FieldOfViewDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPVTarget());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }
        static PyObject *t_FieldOfViewDetector_get__parameters_(t_FieldOfViewDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldOfViewDetector_get__fOV(t_FieldOfViewDetector *self, void *data)
        {
          ::org::orekit::geometry::fov::FieldOfView value((jobject) NULL);
          OBJ_CALL(value = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(value);
        }

        static PyObject *t_FieldOfViewDetector_get__pVTarget(t_FieldOfViewDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPVTarget());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *StreamingAemWriter$SegmentWriter::class$ = NULL;
              jmethodID *StreamingAemWriter$SegmentWriter::mids$ = NULL;
              bool StreamingAemWriter$SegmentWriter::live$ = false;

              jclass StreamingAemWriter$SegmentWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c4852ac8bee4b6d9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter;)V");
                  mids$[mid_finish_2b88003f931f70a7] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_handleStep_2b88003f931f70a7] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_init_703918df646bd2ae] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingAemWriter$SegmentWriter::StreamingAemWriter$SegmentWriter(const ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c4852ac8bee4b6d9, a0.this$)) {}

              void StreamingAemWriter$SegmentWriter::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_finish_2b88003f931f70a7], a0.this$);
              }

              void StreamingAemWriter$SegmentWriter::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_handleStep_2b88003f931f70a7], a0.this$);
              }

              void StreamingAemWriter$SegmentWriter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_init_703918df646bd2ae], a0.this$, a1.this$, a2);
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
          namespace adm {
            namespace aem {
              static PyObject *t_StreamingAemWriter$SegmentWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingAemWriter$SegmentWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingAemWriter$SegmentWriter_init_(t_StreamingAemWriter$SegmentWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingAemWriter$SegmentWriter_finish(t_StreamingAemWriter$SegmentWriter *self, PyObject *arg);
              static PyObject *t_StreamingAemWriter$SegmentWriter_handleStep(t_StreamingAemWriter$SegmentWriter *self, PyObject *arg);
              static PyObject *t_StreamingAemWriter$SegmentWriter_init(t_StreamingAemWriter$SegmentWriter *self, PyObject *args);

              static PyMethodDef t_StreamingAemWriter$SegmentWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, finish, METH_O),
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, handleStep, METH_O),
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, init, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingAemWriter$SegmentWriter)[] = {
                { Py_tp_methods, t_StreamingAemWriter$SegmentWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingAemWriter$SegmentWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingAemWriter$SegmentWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingAemWriter$SegmentWriter, t_StreamingAemWriter$SegmentWriter, StreamingAemWriter$SegmentWriter);

              void t_StreamingAemWriter$SegmentWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingAemWriter$SegmentWriter), &PY_TYPE_DEF(StreamingAemWriter$SegmentWriter), module, "StreamingAemWriter$SegmentWriter", 0);
              }

              void t_StreamingAemWriter$SegmentWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter$SegmentWriter), "class_", make_descriptor(StreamingAemWriter$SegmentWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter$SegmentWriter), "wrapfn_", make_descriptor(t_StreamingAemWriter$SegmentWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter$SegmentWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingAemWriter$SegmentWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingAemWriter$SegmentWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingAemWriter$SegmentWriter::wrap_Object(StreamingAemWriter$SegmentWriter(((t_StreamingAemWriter$SegmentWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingAemWriter$SegmentWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingAemWriter$SegmentWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingAemWriter$SegmentWriter_init_(t_StreamingAemWriter$SegmentWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter a0((jobject) NULL);
                StreamingAemWriter$SegmentWriter object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter::initializeClass, &a0))
                {
                  INT_CALL(object = StreamingAemWriter$SegmentWriter(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_StreamingAemWriter$SegmentWriter_finish(t_StreamingAemWriter$SegmentWriter *self, PyObject *arg)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.finish(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "finish", arg);
                return NULL;
              }

              static PyObject *t_StreamingAemWriter$SegmentWriter_handleStep(t_StreamingAemWriter$SegmentWriter *self, PyObject *arg)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.handleStep(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
                return NULL;
              }

              static PyObject *t_StreamingAemWriter$SegmentWriter_init(t_StreamingAemWriter$SegmentWriter *self, PyObject *args)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                jdouble a2;

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.init(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "init", args);
                return NULL;
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
#include "org/orekit/estimation/sequential/PythonSemiAnalyticalProcess.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonSemiAnalyticalProcess::class$ = NULL;
        jmethodID *PythonSemiAnalyticalProcess::mids$ = NULL;
        bool PythonSemiAnalyticalProcess::live$ = false;

        jclass PythonSemiAnalyticalProcess::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonSemiAnalyticalProcess");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finalizeEstimation_7cf22bbe05cd26dc] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_finalizeOperationsObservationGrid_7ae3461a92a43152] = env->getMethodID(cls, "finalizeOperationsObservationGrid", "()V");
            mids$[mid_getObserver_c42c64cc17e34100] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;");
            mids$[mid_initializeShortPeriodicTerms_2b88003f931f70a7] = env->getMethodID(cls, "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_updateNominalSpacecraftState_2b88003f931f70a7] = env->getMethodID(cls, "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateShortPeriods_2b88003f931f70a7] = env->getMethodID(cls, "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonSemiAnalyticalProcess::PythonSemiAnalyticalProcess() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonSemiAnalyticalProcess::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonSemiAnalyticalProcess::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonSemiAnalyticalProcess::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      namespace sequential {
        static PyObject *t_PythonSemiAnalyticalProcess_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonSemiAnalyticalProcess_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonSemiAnalyticalProcess_init_(t_PythonSemiAnalyticalProcess *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonSemiAnalyticalProcess_finalize(t_PythonSemiAnalyticalProcess *self);
        static PyObject *t_PythonSemiAnalyticalProcess_pythonExtension(t_PythonSemiAnalyticalProcess *self, PyObject *args);
        static void JNICALL t_PythonSemiAnalyticalProcess_finalizeEstimation0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonSemiAnalyticalProcess_finalizeOperationsObservationGrid1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSemiAnalyticalProcess_getObserver2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonSemiAnalyticalProcess_initializeShortPeriodicTerms3(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonSemiAnalyticalProcess_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonSemiAnalyticalProcess_updateNominalSpacecraftState5(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonSemiAnalyticalProcess_updateShortPeriods6(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonSemiAnalyticalProcess_get__self(t_PythonSemiAnalyticalProcess *self, void *data);
        static PyGetSetDef t_PythonSemiAnalyticalProcess__fields_[] = {
          DECLARE_GET_FIELD(t_PythonSemiAnalyticalProcess, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonSemiAnalyticalProcess__methods_[] = {
          DECLARE_METHOD(t_PythonSemiAnalyticalProcess, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSemiAnalyticalProcess, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSemiAnalyticalProcess, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonSemiAnalyticalProcess, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonSemiAnalyticalProcess)[] = {
          { Py_tp_methods, t_PythonSemiAnalyticalProcess__methods_ },
          { Py_tp_init, (void *) t_PythonSemiAnalyticalProcess_init_ },
          { Py_tp_getset, t_PythonSemiAnalyticalProcess__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonSemiAnalyticalProcess)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonSemiAnalyticalProcess, t_PythonSemiAnalyticalProcess, PythonSemiAnalyticalProcess);

        void t_PythonSemiAnalyticalProcess::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonSemiAnalyticalProcess), &PY_TYPE_DEF(PythonSemiAnalyticalProcess), module, "PythonSemiAnalyticalProcess", 1);
        }

        void t_PythonSemiAnalyticalProcess::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSemiAnalyticalProcess), "class_", make_descriptor(PythonSemiAnalyticalProcess::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSemiAnalyticalProcess), "wrapfn_", make_descriptor(t_PythonSemiAnalyticalProcess::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSemiAnalyticalProcess), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonSemiAnalyticalProcess::initializeClass);
          JNINativeMethod methods[] = {
            { "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V", (void *) t_PythonSemiAnalyticalProcess_finalizeEstimation0 },
            { "finalizeOperationsObservationGrid", "()V", (void *) t_PythonSemiAnalyticalProcess_finalizeOperationsObservationGrid1 },
            { "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;", (void *) t_PythonSemiAnalyticalProcess_getObserver2 },
            { "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonSemiAnalyticalProcess_initializeShortPeriodicTerms3 },
            { "pythonDecRef", "()V", (void *) t_PythonSemiAnalyticalProcess_pythonDecRef4 },
            { "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonSemiAnalyticalProcess_updateNominalSpacecraftState5 },
            { "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonSemiAnalyticalProcess_updateShortPeriods6 },
          };
          env->registerNatives(cls, methods, 7);
        }

        static PyObject *t_PythonSemiAnalyticalProcess_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonSemiAnalyticalProcess::initializeClass, 1)))
            return NULL;
          return t_PythonSemiAnalyticalProcess::wrap_Object(PythonSemiAnalyticalProcess(((t_PythonSemiAnalyticalProcess *) arg)->object.this$));
        }
        static PyObject *t_PythonSemiAnalyticalProcess_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonSemiAnalyticalProcess::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonSemiAnalyticalProcess_init_(t_PythonSemiAnalyticalProcess *self, PyObject *args, PyObject *kwds)
        {
          PythonSemiAnalyticalProcess object((jobject) NULL);

          INT_CALL(object = PythonSemiAnalyticalProcess());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonSemiAnalyticalProcess_finalize(t_PythonSemiAnalyticalProcess *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonSemiAnalyticalProcess_pythonExtension(t_PythonSemiAnalyticalProcess *self, PyObject *args)
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

        static void JNICALL t_PythonSemiAnalyticalProcess_finalizeEstimation0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(::org::orekit::estimation::measurements::ObservedMeasurement(a0));
          PyObject *o1 = ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(::org::hipparchus::filtering::kalman::ProcessEstimate(a1));
          PyObject *result = PyObject_CallMethod(obj, "finalizeEstimation", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonSemiAnalyticalProcess_finalizeOperationsObservationGrid1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "finalizeOperationsObservationGrid", "");
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static jobject JNICALL t_PythonSemiAnalyticalProcess_getObserver2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getObserver", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
          {
            throwTypeError("getObserver", result);
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

        static void JNICALL t_PythonSemiAnalyticalProcess_initializeShortPeriodicTerms3(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "initializeShortPeriodicTerms", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonSemiAnalyticalProcess_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonSemiAnalyticalProcess_updateNominalSpacecraftState5(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "updateNominalSpacecraftState", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonSemiAnalyticalProcess_updateShortPeriods6(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "updateShortPeriods", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonSemiAnalyticalProcess_get__self(t_PythonSemiAnalyticalProcess *self, void *data)
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
#include "org/hipparchus/linear/FieldLUDecomposition.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldLUDecomposition::class$ = NULL;
      jmethodID *FieldLUDecomposition::mids$ = NULL;
      bool FieldLUDecomposition::live$ = false;

      jclass FieldLUDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldLUDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3e03971cd3efa337] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_getDeterminant_7e89936bdf79375b] = env->getMethodID(cls, "getDeterminant", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_getL_cc77900a647586cf] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getP_cc77900a647586cf] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getPivot_d8ead0d90ce828b0] = env->getMethodID(cls, "getPivot", "()[I");
          mids$[mid_getSolver_60ebb8b71a188d47] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/FieldDecompositionSolver;");
          mids$[mid_getU_cc77900a647586cf] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/linear/FieldMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldLUDecomposition::FieldLUDecomposition(const ::org::hipparchus::linear::FieldMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e03971cd3efa337, a0.this$)) {}

      ::org::hipparchus::FieldElement FieldLUDecomposition::getDeterminant() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getDeterminant_7e89936bdf79375b]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldLUDecomposition::getL() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getL_cc77900a647586cf]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldLUDecomposition::getP() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getP_cc77900a647586cf]));
      }

      JArray< jint > FieldLUDecomposition::getPivot() const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPivot_d8ead0d90ce828b0]));
      }

      ::org::hipparchus::linear::FieldDecompositionSolver FieldLUDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_60ebb8b71a188d47]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldLUDecomposition::getU() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getU_cc77900a647586cf]));
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
      static PyObject *t_FieldLUDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLUDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLUDecomposition_of_(t_FieldLUDecomposition *self, PyObject *args);
      static int t_FieldLUDecomposition_init_(t_FieldLUDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldLUDecomposition_getDeterminant(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_getL(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_getP(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_getPivot(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_getSolver(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_getU(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_get__determinant(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__l(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__p(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__pivot(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__solver(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__u(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__parameters_(t_FieldLUDecomposition *self, void *data);
      static PyGetSetDef t_FieldLUDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_FieldLUDecomposition, determinant),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, l),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, p),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, pivot),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, solver),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, u),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldLUDecomposition__methods_[] = {
        DECLARE_METHOD(t_FieldLUDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLUDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLUDecomposition, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getL, METH_NOARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getP, METH_NOARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getPivot, METH_NOARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getSolver, METH_NOARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getU, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldLUDecomposition)[] = {
        { Py_tp_methods, t_FieldLUDecomposition__methods_ },
        { Py_tp_init, (void *) t_FieldLUDecomposition_init_ },
        { Py_tp_getset, t_FieldLUDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldLUDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldLUDecomposition, t_FieldLUDecomposition, FieldLUDecomposition);
      PyObject *t_FieldLUDecomposition::wrap_Object(const FieldLUDecomposition& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLUDecomposition::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLUDecomposition *self = (t_FieldLUDecomposition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldLUDecomposition::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLUDecomposition::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLUDecomposition *self = (t_FieldLUDecomposition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldLUDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldLUDecomposition), &PY_TYPE_DEF(FieldLUDecomposition), module, "FieldLUDecomposition", 0);
      }

      void t_FieldLUDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposition), "class_", make_descriptor(FieldLUDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposition), "wrapfn_", make_descriptor(t_FieldLUDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldLUDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldLUDecomposition::initializeClass, 1)))
          return NULL;
        return t_FieldLUDecomposition::wrap_Object(FieldLUDecomposition(((t_FieldLUDecomposition *) arg)->object.this$));
      }
      static PyObject *t_FieldLUDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldLUDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldLUDecomposition_of_(t_FieldLUDecomposition *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldLUDecomposition_init_(t_FieldLUDecomposition *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldLUDecomposition object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          INT_CALL(object = FieldLUDecomposition(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldLUDecomposition_getDeterminant(t_FieldLUDecomposition *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getDeterminant());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldLUDecomposition_getL(t_FieldLUDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldLUDecomposition_getP(t_FieldLUDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldLUDecomposition_getPivot(t_FieldLUDecomposition *self)
      {
        JArray< jint > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPivot());
        return result.wrap();
      }

      static PyObject *t_FieldLUDecomposition_getSolver(t_FieldLUDecomposition *self)
      {
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldLUDecomposition_getU(t_FieldLUDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldLUDecomposition_get__parameters_(t_FieldLUDecomposition *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldLUDecomposition_get__determinant(t_FieldLUDecomposition *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getDeterminant());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldLUDecomposition_get__l(t_FieldLUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldLUDecomposition_get__p(t_FieldLUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldLUDecomposition_get__pivot(t_FieldLUDecomposition *self, void *data)
      {
        JArray< jint > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPivot());
        return value.wrap();
      }

      static PyObject *t_FieldLUDecomposition_get__solver(t_FieldLUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldDecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(value);
      }

      static PyObject *t_FieldLUDecomposition_get__u(t_FieldLUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/GlobalIonosphereMapModel.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/TimeScale.h"
#include "java/util/List.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *GlobalIonosphereMapModel::class$ = NULL;
          jmethodID *GlobalIonosphereMapModel::mids$ = NULL;
          bool GlobalIonosphereMapModel::live$ = false;

          jclass GlobalIonosphereMapModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/GlobalIonosphereMapModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_657d44af0e952733] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;[Lorg/orekit/data/DataSource;)V");
              mids$[mid_init$_c3298cacdeeaf7cf] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_78d4f8498e981bf5] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_c824fdb3e595a2ae] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlobalIonosphereMapModel::GlobalIonosphereMapModel(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

          GlobalIonosphereMapModel::GlobalIonosphereMapModel(const ::org::orekit::time::TimeScale & a0, const JArray< ::org::orekit::data::DataSource > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_657d44af0e952733, a0.this$, a1.this$)) {}

          GlobalIonosphereMapModel::GlobalIonosphereMapModel(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c3298cacdeeaf7cf, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List GlobalIonosphereMapModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          ::org::hipparchus::CalculusFieldElement GlobalIonosphereMapModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_78d4f8498e981bf5], a0.this$, a1.this$, a2, a3.this$));
          }

          jdouble GlobalIonosphereMapModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_c824fdb3e595a2ae], a0.this$, a1.this$, a2, a3.this$);
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
        namespace ionosphere {
          static PyObject *t_GlobalIonosphereMapModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlobalIonosphereMapModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlobalIonosphereMapModel_init_(t_GlobalIonosphereMapModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlobalIonosphereMapModel_getParametersDrivers(t_GlobalIonosphereMapModel *self);
          static PyObject *t_GlobalIonosphereMapModel_pathDelay(t_GlobalIonosphereMapModel *self, PyObject *args);
          static PyObject *t_GlobalIonosphereMapModel_get__parametersDrivers(t_GlobalIonosphereMapModel *self, void *data);
          static PyGetSetDef t_GlobalIonosphereMapModel__fields_[] = {
            DECLARE_GET_FIELD(t_GlobalIonosphereMapModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GlobalIonosphereMapModel__methods_[] = {
            DECLARE_METHOD(t_GlobalIonosphereMapModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalIonosphereMapModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalIonosphereMapModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_GlobalIonosphereMapModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlobalIonosphereMapModel)[] = {
            { Py_tp_methods, t_GlobalIonosphereMapModel__methods_ },
            { Py_tp_init, (void *) t_GlobalIonosphereMapModel_init_ },
            { Py_tp_getset, t_GlobalIonosphereMapModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlobalIonosphereMapModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlobalIonosphereMapModel, t_GlobalIonosphereMapModel, GlobalIonosphereMapModel);

          void t_GlobalIonosphereMapModel::install(PyObject *module)
          {
            installType(&PY_TYPE(GlobalIonosphereMapModel), &PY_TYPE_DEF(GlobalIonosphereMapModel), module, "GlobalIonosphereMapModel", 0);
          }

          void t_GlobalIonosphereMapModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalIonosphereMapModel), "class_", make_descriptor(GlobalIonosphereMapModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalIonosphereMapModel), "wrapfn_", make_descriptor(t_GlobalIonosphereMapModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalIonosphereMapModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GlobalIonosphereMapModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlobalIonosphereMapModel::initializeClass, 1)))
              return NULL;
            return t_GlobalIonosphereMapModel::wrap_Object(GlobalIonosphereMapModel(((t_GlobalIonosphereMapModel *) arg)->object.this$));
          }
          static PyObject *t_GlobalIonosphereMapModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlobalIonosphereMapModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlobalIonosphereMapModel_init_(t_GlobalIonosphereMapModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                GlobalIonosphereMapModel object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = GlobalIonosphereMapModel(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::time::TimeScale a0((jobject) NULL);
                JArray< ::org::orekit::data::DataSource > a1((jobject) NULL);
                GlobalIonosphereMapModel object((jobject) NULL);

                if (!parseArgs(args, "k[k", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::data::DataSource::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = GlobalIonosphereMapModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                GlobalIonosphereMapModel object((jobject) NULL);

                if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = GlobalIonosphereMapModel(a0, a1, a2));
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

          static PyObject *t_GlobalIonosphereMapModel_getParametersDrivers(t_GlobalIonosphereMapModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_GlobalIonosphereMapModel_pathDelay(t_GlobalIonosphereMapModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_GlobalIonosphereMapModel_get__parametersDrivers(t_GlobalIonosphereMapModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *Tile$Location::class$ = NULL;
        jmethodID *Tile$Location::mids$ = NULL;
        bool Tile$Location::live$ = false;
        Tile$Location *Tile$Location::EAST = NULL;
        Tile$Location *Tile$Location::HAS_INTERPOLATION_NEIGHBORS = NULL;
        Tile$Location *Tile$Location::NORTH = NULL;
        Tile$Location *Tile$Location::NORTH_EAST = NULL;
        Tile$Location *Tile$Location::NORTH_WEST = NULL;
        Tile$Location *Tile$Location::SOUTH = NULL;
        Tile$Location *Tile$Location::SOUTH_EAST = NULL;
        Tile$Location *Tile$Location::SOUTH_WEST = NULL;
        Tile$Location *Tile$Location::WEST = NULL;

        jclass Tile$Location::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/Tile$Location");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_1c9d6ccb0d1a59a7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/raster/Tile$Location;");
            mids$[mid_values_5c3f3f67b677ce66] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/raster/Tile$Location;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            EAST = new Tile$Location(env->getStaticObjectField(cls, "EAST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            HAS_INTERPOLATION_NEIGHBORS = new Tile$Location(env->getStaticObjectField(cls, "HAS_INTERPOLATION_NEIGHBORS", "Lorg/orekit/rugged/raster/Tile$Location;"));
            NORTH = new Tile$Location(env->getStaticObjectField(cls, "NORTH", "Lorg/orekit/rugged/raster/Tile$Location;"));
            NORTH_EAST = new Tile$Location(env->getStaticObjectField(cls, "NORTH_EAST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            NORTH_WEST = new Tile$Location(env->getStaticObjectField(cls, "NORTH_WEST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            SOUTH = new Tile$Location(env->getStaticObjectField(cls, "SOUTH", "Lorg/orekit/rugged/raster/Tile$Location;"));
            SOUTH_EAST = new Tile$Location(env->getStaticObjectField(cls, "SOUTH_EAST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            SOUTH_WEST = new Tile$Location(env->getStaticObjectField(cls, "SOUTH_WEST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            WEST = new Tile$Location(env->getStaticObjectField(cls, "WEST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Tile$Location Tile$Location::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Tile$Location(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1c9d6ccb0d1a59a7], a0.this$));
        }

        JArray< Tile$Location > Tile$Location::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Tile$Location >(env->callStaticObjectMethod(cls, mids$[mid_values_5c3f3f67b677ce66]));
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
      namespace raster {
        static PyObject *t_Tile$Location_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tile$Location_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tile$Location_of_(t_Tile$Location *self, PyObject *args);
        static PyObject *t_Tile$Location_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Tile$Location_values(PyTypeObject *type);
        static PyObject *t_Tile$Location_get__parameters_(t_Tile$Location *self, void *data);
        static PyGetSetDef t_Tile$Location__fields_[] = {
          DECLARE_GET_FIELD(t_Tile$Location, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Tile$Location__methods_[] = {
          DECLARE_METHOD(t_Tile$Location, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tile$Location, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tile$Location, of_, METH_VARARGS),
          DECLARE_METHOD(t_Tile$Location, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Tile$Location, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Tile$Location)[] = {
          { Py_tp_methods, t_Tile$Location__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Tile$Location__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Tile$Location)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Tile$Location, t_Tile$Location, Tile$Location);
        PyObject *t_Tile$Location::wrap_Object(const Tile$Location& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Tile$Location::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Tile$Location *self = (t_Tile$Location *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Tile$Location::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Tile$Location::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Tile$Location *self = (t_Tile$Location *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Tile$Location::install(PyObject *module)
        {
          installType(&PY_TYPE(Tile$Location), &PY_TYPE_DEF(Tile$Location), module, "Tile$Location", 0);
        }

        void t_Tile$Location::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "class_", make_descriptor(Tile$Location::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "wrapfn_", make_descriptor(t_Tile$Location::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "boxfn_", make_descriptor(boxObject));
          env->getClass(Tile$Location::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "EAST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::EAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "HAS_INTERPOLATION_NEIGHBORS", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::HAS_INTERPOLATION_NEIGHBORS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "NORTH", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::NORTH)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "NORTH_EAST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::NORTH_EAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "NORTH_WEST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::NORTH_WEST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "SOUTH", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::SOUTH)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "SOUTH_EAST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::SOUTH_EAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "SOUTH_WEST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::SOUTH_WEST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "WEST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::WEST)));
        }

        static PyObject *t_Tile$Location_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Tile$Location::initializeClass, 1)))
            return NULL;
          return t_Tile$Location::wrap_Object(Tile$Location(((t_Tile$Location *) arg)->object.this$));
        }
        static PyObject *t_Tile$Location_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Tile$Location::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Tile$Location_of_(t_Tile$Location *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Tile$Location_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Tile$Location result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::raster::Tile$Location::valueOf(a0));
            return t_Tile$Location::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Tile$Location_values(PyTypeObject *type)
        {
          JArray< Tile$Location > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::raster::Tile$Location::values());
          return JArray<jobject>(result.this$).wrap(t_Tile$Location::wrap_jobject);
        }
        static PyObject *t_Tile$Location_get__parameters_(t_Tile$Location *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/AbstractWell.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *AbstractWell::class$ = NULL;
      jmethodID *AbstractWell::mids$ = NULL;
      bool AbstractWell::live$ = false;

      jclass AbstractWell::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/AbstractWell");

          mids$ = new jmethodID[max_mid];
          mids$[mid_setSeed_3b603738d1eb3233] = env->getMethodID(cls, "setSeed", "([I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractWell::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3b603738d1eb3233], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_AbstractWell_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractWell_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractWell_setSeed(t_AbstractWell *self, PyObject *args);
      static int t_AbstractWell_set__seed(t_AbstractWell *self, PyObject *arg, void *data);
      static PyGetSetDef t_AbstractWell__fields_[] = {
        DECLARE_SET_FIELD(t_AbstractWell, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractWell__methods_[] = {
        DECLARE_METHOD(t_AbstractWell, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractWell, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractWell, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractWell)[] = {
        { Py_tp_methods, t_AbstractWell__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractWell__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractWell)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::IntRandomGenerator),
        NULL
      };

      DEFINE_TYPE(AbstractWell, t_AbstractWell, AbstractWell);

      void t_AbstractWell::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractWell), &PY_TYPE_DEF(AbstractWell), module, "AbstractWell", 0);
      }

      void t_AbstractWell::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWell), "class_", make_descriptor(AbstractWell::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWell), "wrapfn_", make_descriptor(t_AbstractWell::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWell), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractWell_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractWell::initializeClass, 1)))
          return NULL;
        return t_AbstractWell::wrap_Object(AbstractWell(((t_AbstractWell *) arg)->object.this$));
      }
      static PyObject *t_AbstractWell_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractWell::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractWell_setSeed(t_AbstractWell *self, PyObject *args)
      {
        JArray< jint > a0((jobject) NULL);

        if (!parseArgs(args, "[I", &a0))
        {
          OBJ_CALL(self->object.setSeed(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(AbstractWell), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_AbstractWell_set__seed(t_AbstractWell *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *JB2008InputParameters::class$ = NULL;
          jmethodID *JB2008InputParameters::mids$ = NULL;
          bool JB2008InputParameters::live$ = false;

          jclass JB2008InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/JB2008InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDSTDTC_e912d21057defe63] = env->getMethodID(cls, "getDSTDTC", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getF10_e912d21057defe63] = env->getMethodID(cls, "getF10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getF10B_e912d21057defe63] = env->getMethodID(cls, "getF10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getS10_e912d21057defe63] = env->getMethodID(cls, "getS10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getS10B_e912d21057defe63] = env->getMethodID(cls, "getS10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getXM10_e912d21057defe63] = env->getMethodID(cls, "getXM10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getXM10B_e912d21057defe63] = env->getMethodID(cls, "getXM10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getY10_e912d21057defe63] = env->getMethodID(cls, "getY10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getY10B_e912d21057defe63] = env->getMethodID(cls, "getY10B", "(Lorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble JB2008InputParameters::getDSTDTC(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDSTDTC_e912d21057defe63], a0.this$);
          }

          jdouble JB2008InputParameters::getF10(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getF10_e912d21057defe63], a0.this$);
          }

          jdouble JB2008InputParameters::getF10B(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getF10B_e912d21057defe63], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate JB2008InputParameters::getMaxDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_aaa854c403487cf3]));
          }

          ::org::orekit::time::AbsoluteDate JB2008InputParameters::getMinDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_aaa854c403487cf3]));
          }

          jdouble JB2008InputParameters::getS10(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getS10_e912d21057defe63], a0.this$);
          }

          jdouble JB2008InputParameters::getS10B(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getS10B_e912d21057defe63], a0.this$);
          }

          jdouble JB2008InputParameters::getXM10(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXM10_e912d21057defe63], a0.this$);
          }

          jdouble JB2008InputParameters::getXM10B(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXM10B_e912d21057defe63], a0.this$);
          }

          jdouble JB2008InputParameters::getY10(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY10_e912d21057defe63], a0.this$);
          }

          jdouble JB2008InputParameters::getY10B(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY10B_e912d21057defe63], a0.this$);
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
          static PyObject *t_JB2008InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JB2008InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getDSTDTC(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getF10(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getF10B(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getMaxDate(t_JB2008InputParameters *self);
          static PyObject *t_JB2008InputParameters_getMinDate(t_JB2008InputParameters *self);
          static PyObject *t_JB2008InputParameters_getS10(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getS10B(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getXM10(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getXM10B(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getY10(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getY10B(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_get__maxDate(t_JB2008InputParameters *self, void *data);
          static PyObject *t_JB2008InputParameters_get__minDate(t_JB2008InputParameters *self, void *data);
          static PyGetSetDef t_JB2008InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_JB2008InputParameters, maxDate),
            DECLARE_GET_FIELD(t_JB2008InputParameters, minDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_JB2008InputParameters__methods_[] = {
            DECLARE_METHOD(t_JB2008InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JB2008InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JB2008InputParameters, getDSTDTC, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getF10, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getF10B, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getMaxDate, METH_NOARGS),
            DECLARE_METHOD(t_JB2008InputParameters, getMinDate, METH_NOARGS),
            DECLARE_METHOD(t_JB2008InputParameters, getS10, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getS10B, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getXM10, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getXM10B, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getY10, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getY10B, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JB2008InputParameters)[] = {
            { Py_tp_methods, t_JB2008InputParameters__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_JB2008InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JB2008InputParameters)[] = {
            &PY_TYPE_DEF(::java::io::Serializable),
            NULL
          };

          DEFINE_TYPE(JB2008InputParameters, t_JB2008InputParameters, JB2008InputParameters);

          void t_JB2008InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(JB2008InputParameters), &PY_TYPE_DEF(JB2008InputParameters), module, "JB2008InputParameters", 0);
          }

          void t_JB2008InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008InputParameters), "class_", make_descriptor(JB2008InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008InputParameters), "wrapfn_", make_descriptor(t_JB2008InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008InputParameters), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JB2008InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JB2008InputParameters::initializeClass, 1)))
              return NULL;
            return t_JB2008InputParameters::wrap_Object(JB2008InputParameters(((t_JB2008InputParameters *) arg)->object.this$));
          }
          static PyObject *t_JB2008InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JB2008InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_JB2008InputParameters_getDSTDTC(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDSTDTC(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getDSTDTC", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getF10(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getF10(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getF10", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getF10B(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getF10B(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getF10B", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getMaxDate(t_JB2008InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_JB2008InputParameters_getMinDate(t_JB2008InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_JB2008InputParameters_getS10(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getS10(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getS10", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getS10B(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getS10B(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getS10B", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getXM10(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getXM10(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getXM10", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getXM10B(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getXM10B(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getXM10B", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getY10(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getY10(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getY10", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getY10B(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getY10B(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getY10B", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_get__maxDate(t_JB2008InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_JB2008InputParameters_get__minDate(t_JB2008InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Perturbations.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *PerturbationsKey::class$ = NULL;
              jmethodID *PerturbationsKey::mids$ = NULL;
              bool PerturbationsKey::live$ = false;
              PerturbationsKey *PerturbationsKey::ALBEDO_GRID_SIZE = NULL;
              PerturbationsKey *PerturbationsKey::ALBEDO_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::ATMOSPHERIC_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::CENTRAL_BODY_ROTATION = NULL;
              PerturbationsKey *PerturbationsKey::COMMENT = NULL;
              PerturbationsKey *PerturbationsKey::EQUATORIAL_RADIUS = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_F10P7 = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_F10P7_MEAN = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_GEOMAG_AP = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_GEOMAG_DST = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_GEOMAG_KP = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_M10P7 = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_M10P7_MEAN = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_S10P7 = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_S10P7_MEAN = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_Y10P7 = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_Y10P7_MEAN = NULL;
              PerturbationsKey *PerturbationsKey::GM = NULL;
              PerturbationsKey *PerturbationsKey::GRAVITY_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::N_BODY_PERTURBATIONS = NULL;
              PerturbationsKey *PerturbationsKey::OBLATE_FLATTENING = NULL;
              PerturbationsKey *PerturbationsKey::OCEAN_TIDES_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::REDUCTION_THEORY = NULL;
              PerturbationsKey *PerturbationsKey::SHADOW_BODIES = NULL;
              PerturbationsKey *PerturbationsKey::SHADOW_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::SOLID_TIDES_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::SRP_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::SW_DATA_EPOCH = NULL;
              PerturbationsKey *PerturbationsKey::SW_DATA_SOURCE = NULL;
              PerturbationsKey *PerturbationsKey::SW_INTERP_METHOD = NULL;

              jclass PerturbationsKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_e65141ab119b8814] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/Perturbations;)Z");
                  mids$[mid_valueOf_c28be20ab826a1c8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;");
                  mids$[mid_values_87072604c96b475c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ALBEDO_GRID_SIZE = new PerturbationsKey(env->getStaticObjectField(cls, "ALBEDO_GRID_SIZE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  ALBEDO_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "ALBEDO_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  ATMOSPHERIC_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "ATMOSPHERIC_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  CENTRAL_BODY_ROTATION = new PerturbationsKey(env->getStaticObjectField(cls, "CENTRAL_BODY_ROTATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  COMMENT = new PerturbationsKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  EQUATORIAL_RADIUS = new PerturbationsKey(env->getStaticObjectField(cls, "EQUATORIAL_RADIUS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_F10P7 = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_F10P7", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_F10P7_MEAN = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_F10P7_MEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_GEOMAG_AP = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_GEOMAG_AP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_GEOMAG_DST = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_GEOMAG_DST", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_GEOMAG_KP = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_GEOMAG_KP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_M10P7 = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_M10P7", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_M10P7_MEAN = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_M10P7_MEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_S10P7 = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_S10P7", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_S10P7_MEAN = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_S10P7_MEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_Y10P7 = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_Y10P7", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_Y10P7_MEAN = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_Y10P7_MEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  GM = new PerturbationsKey(env->getStaticObjectField(cls, "GM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  GRAVITY_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "GRAVITY_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  N_BODY_PERTURBATIONS = new PerturbationsKey(env->getStaticObjectField(cls, "N_BODY_PERTURBATIONS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  OBLATE_FLATTENING = new PerturbationsKey(env->getStaticObjectField(cls, "OBLATE_FLATTENING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  OCEAN_TIDES_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "OCEAN_TIDES_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  REDUCTION_THEORY = new PerturbationsKey(env->getStaticObjectField(cls, "REDUCTION_THEORY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SHADOW_BODIES = new PerturbationsKey(env->getStaticObjectField(cls, "SHADOW_BODIES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SHADOW_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "SHADOW_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SOLID_TIDES_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "SOLID_TIDES_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SRP_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "SRP_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SW_DATA_EPOCH = new PerturbationsKey(env->getStaticObjectField(cls, "SW_DATA_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SW_DATA_SOURCE = new PerturbationsKey(env->getStaticObjectField(cls, "SW_DATA_SOURCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SW_INTERP_METHOD = new PerturbationsKey(env->getStaticObjectField(cls, "SW_INTERP_METHOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean PerturbationsKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_e65141ab119b8814], a0.this$, a1.this$, a2.this$);
              }

              PerturbationsKey PerturbationsKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return PerturbationsKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c28be20ab826a1c8], a0.this$));
              }

              JArray< PerturbationsKey > PerturbationsKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< PerturbationsKey >(env->callStaticObjectMethod(cls, mids$[mid_values_87072604c96b475c]));
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
              static PyObject *t_PerturbationsKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PerturbationsKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PerturbationsKey_of_(t_PerturbationsKey *self, PyObject *args);
              static PyObject *t_PerturbationsKey_process(t_PerturbationsKey *self, PyObject *args);
              static PyObject *t_PerturbationsKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_PerturbationsKey_values(PyTypeObject *type);
              static PyObject *t_PerturbationsKey_get__parameters_(t_PerturbationsKey *self, void *data);
              static PyGetSetDef t_PerturbationsKey__fields_[] = {
                DECLARE_GET_FIELD(t_PerturbationsKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PerturbationsKey__methods_[] = {
                DECLARE_METHOD(t_PerturbationsKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PerturbationsKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PerturbationsKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_PerturbationsKey, process, METH_VARARGS),
                DECLARE_METHOD(t_PerturbationsKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_PerturbationsKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PerturbationsKey)[] = {
                { Py_tp_methods, t_PerturbationsKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_PerturbationsKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PerturbationsKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(PerturbationsKey, t_PerturbationsKey, PerturbationsKey);
              PyObject *t_PerturbationsKey::wrap_Object(const PerturbationsKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_PerturbationsKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_PerturbationsKey *self = (t_PerturbationsKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_PerturbationsKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_PerturbationsKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_PerturbationsKey *self = (t_PerturbationsKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_PerturbationsKey::install(PyObject *module)
              {
                installType(&PY_TYPE(PerturbationsKey), &PY_TYPE_DEF(PerturbationsKey), module, "PerturbationsKey", 0);
              }

              void t_PerturbationsKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "class_", make_descriptor(PerturbationsKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "wrapfn_", make_descriptor(t_PerturbationsKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(PerturbationsKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "ALBEDO_GRID_SIZE", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::ALBEDO_GRID_SIZE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "ALBEDO_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::ALBEDO_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "ATMOSPHERIC_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::ATMOSPHERIC_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "CENTRAL_BODY_ROTATION", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::CENTRAL_BODY_ROTATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "COMMENT", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "EQUATORIAL_RADIUS", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::EQUATORIAL_RADIUS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_F10P7", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_F10P7)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_F10P7_MEAN", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_F10P7_MEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_GEOMAG_AP", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_GEOMAG_AP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_GEOMAG_DST", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_GEOMAG_DST)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_GEOMAG_KP", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_GEOMAG_KP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_M10P7", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_M10P7)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_M10P7_MEAN", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_M10P7_MEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_S10P7", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_S10P7)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_S10P7_MEAN", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_S10P7_MEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_Y10P7", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_Y10P7)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_Y10P7_MEAN", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_Y10P7_MEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "GM", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::GM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "GRAVITY_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::GRAVITY_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "N_BODY_PERTURBATIONS", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::N_BODY_PERTURBATIONS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "OBLATE_FLATTENING", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::OBLATE_FLATTENING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "OCEAN_TIDES_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::OCEAN_TIDES_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "REDUCTION_THEORY", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::REDUCTION_THEORY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SHADOW_BODIES", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SHADOW_BODIES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SHADOW_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SHADOW_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SOLID_TIDES_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SOLID_TIDES_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SRP_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SRP_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SW_DATA_EPOCH", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SW_DATA_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SW_DATA_SOURCE", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SW_DATA_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SW_INTERP_METHOD", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SW_INTERP_METHOD)));
              }

              static PyObject *t_PerturbationsKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PerturbationsKey::initializeClass, 1)))
                  return NULL;
                return t_PerturbationsKey::wrap_Object(PerturbationsKey(((t_PerturbationsKey *) arg)->object.this$));
              }
              static PyObject *t_PerturbationsKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PerturbationsKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_PerturbationsKey_of_(t_PerturbationsKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_PerturbationsKey_process(t_PerturbationsKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_PerturbationsKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                PerturbationsKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::PerturbationsKey::valueOf(a0));
                  return t_PerturbationsKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_PerturbationsKey_values(PyTypeObject *type)
              {
                JArray< PerturbationsKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::PerturbationsKey::values());
                return JArray<jobject>(result.this$).wrap(t_PerturbationsKey::wrap_jobject);
              }
              static PyObject *t_PerturbationsKey_get__parameters_(t_PerturbationsKey *self, void *data)
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
