#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/GaussianCurveFitter$ParameterGuesser.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *GaussianCurveFitter$ParameterGuesser::class$ = NULL;
      jmethodID *GaussianCurveFitter$ParameterGuesser::mids$ = NULL;
      bool GaussianCurveFitter$ParameterGuesser::live$ = false;

      jclass GaussianCurveFitter$ParameterGuesser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/GaussianCurveFitter$ParameterGuesser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f72f53318f80c525] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
          mids$[mid_guess_60c7040667a7dc5c] = env->getMethodID(cls, "guess", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GaussianCurveFitter$ParameterGuesser::GaussianCurveFitter$ParameterGuesser(const ::java::util::Collection & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f72f53318f80c525, a0.this$)) {}

      JArray< jdouble > GaussianCurveFitter$ParameterGuesser::guess() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_guess_60c7040667a7dc5c]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_GaussianCurveFitter$ParameterGuesser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GaussianCurveFitter$ParameterGuesser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GaussianCurveFitter$ParameterGuesser_init_(t_GaussianCurveFitter$ParameterGuesser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GaussianCurveFitter$ParameterGuesser_guess(t_GaussianCurveFitter$ParameterGuesser *self);

      static PyMethodDef t_GaussianCurveFitter$ParameterGuesser__methods_[] = {
        DECLARE_METHOD(t_GaussianCurveFitter$ParameterGuesser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter$ParameterGuesser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter$ParameterGuesser, guess, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GaussianCurveFitter$ParameterGuesser)[] = {
        { Py_tp_methods, t_GaussianCurveFitter$ParameterGuesser__methods_ },
        { Py_tp_init, (void *) t_GaussianCurveFitter$ParameterGuesser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GaussianCurveFitter$ParameterGuesser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GaussianCurveFitter$ParameterGuesser, t_GaussianCurveFitter$ParameterGuesser, GaussianCurveFitter$ParameterGuesser);

      void t_GaussianCurveFitter$ParameterGuesser::install(PyObject *module)
      {
        installType(&PY_TYPE(GaussianCurveFitter$ParameterGuesser), &PY_TYPE_DEF(GaussianCurveFitter$ParameterGuesser), module, "GaussianCurveFitter$ParameterGuesser", 0);
      }

      void t_GaussianCurveFitter$ParameterGuesser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter$ParameterGuesser), "class_", make_descriptor(GaussianCurveFitter$ParameterGuesser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter$ParameterGuesser), "wrapfn_", make_descriptor(t_GaussianCurveFitter$ParameterGuesser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter$ParameterGuesser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GaussianCurveFitter$ParameterGuesser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GaussianCurveFitter$ParameterGuesser::initializeClass, 1)))
          return NULL;
        return t_GaussianCurveFitter$ParameterGuesser::wrap_Object(GaussianCurveFitter$ParameterGuesser(((t_GaussianCurveFitter$ParameterGuesser *) arg)->object.this$));
      }
      static PyObject *t_GaussianCurveFitter$ParameterGuesser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GaussianCurveFitter$ParameterGuesser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GaussianCurveFitter$ParameterGuesser_init_(t_GaussianCurveFitter$ParameterGuesser *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;
        GaussianCurveFitter$ParameterGuesser object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = GaussianCurveFitter$ParameterGuesser(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_GaussianCurveFitter$ParameterGuesser_guess(t_GaussianCurveFitter$ParameterGuesser *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.guess());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3OrbitType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sp3/SP3OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3OrbitType::class$ = NULL;
        jmethodID *SP3OrbitType::mids$ = NULL;
        bool SP3OrbitType::live$ = false;
        SP3OrbitType *SP3OrbitType::BCT = NULL;
        SP3OrbitType *SP3OrbitType::EXT = NULL;
        SP3OrbitType *SP3OrbitType::FIT = NULL;
        SP3OrbitType *SP3OrbitType::HLM = NULL;
        SP3OrbitType *SP3OrbitType::OTHER = NULL;

        jclass SP3OrbitType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3OrbitType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_parseType_ceddf6c6809101e2] = env->getStaticMethodID(cls, "parseType", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3OrbitType;");
            mids$[mid_valueOf_ceddf6c6809101e2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3OrbitType;");
            mids$[mid_values_461df24978cd0c82] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/sp3/SP3OrbitType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BCT = new SP3OrbitType(env->getStaticObjectField(cls, "BCT", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            EXT = new SP3OrbitType(env->getStaticObjectField(cls, "EXT", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            FIT = new SP3OrbitType(env->getStaticObjectField(cls, "FIT", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            HLM = new SP3OrbitType(env->getStaticObjectField(cls, "HLM", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            OTHER = new SP3OrbitType(env->getStaticObjectField(cls, "OTHER", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3OrbitType SP3OrbitType::parseType(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3OrbitType(env->callStaticObjectMethod(cls, mids$[mid_parseType_ceddf6c6809101e2], a0.this$));
        }

        SP3OrbitType SP3OrbitType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3OrbitType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ceddf6c6809101e2], a0.this$));
        }

        JArray< SP3OrbitType > SP3OrbitType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< SP3OrbitType >(env->callStaticObjectMethod(cls, mids$[mid_values_461df24978cd0c82]));
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
      namespace sp3 {
        static PyObject *t_SP3OrbitType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3OrbitType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3OrbitType_of_(t_SP3OrbitType *self, PyObject *args);
        static PyObject *t_SP3OrbitType_parseType(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3OrbitType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_SP3OrbitType_values(PyTypeObject *type);
        static PyObject *t_SP3OrbitType_get__parameters_(t_SP3OrbitType *self, void *data);
        static PyGetSetDef t_SP3OrbitType__fields_[] = {
          DECLARE_GET_FIELD(t_SP3OrbitType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3OrbitType__methods_[] = {
          DECLARE_METHOD(t_SP3OrbitType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3OrbitType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3OrbitType, of_, METH_VARARGS),
          DECLARE_METHOD(t_SP3OrbitType, parseType, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3OrbitType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SP3OrbitType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3OrbitType)[] = {
          { Py_tp_methods, t_SP3OrbitType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SP3OrbitType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3OrbitType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(SP3OrbitType, t_SP3OrbitType, SP3OrbitType);
        PyObject *t_SP3OrbitType::wrap_Object(const SP3OrbitType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3OrbitType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3OrbitType *self = (t_SP3OrbitType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SP3OrbitType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3OrbitType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3OrbitType *self = (t_SP3OrbitType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SP3OrbitType::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3OrbitType), &PY_TYPE_DEF(SP3OrbitType), module, "SP3OrbitType", 0);
        }

        void t_SP3OrbitType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "class_", make_descriptor(SP3OrbitType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "wrapfn_", make_descriptor(t_SP3OrbitType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3OrbitType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "BCT", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::BCT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "EXT", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::EXT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "FIT", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::FIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "HLM", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::HLM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "OTHER", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::OTHER)));
        }

        static PyObject *t_SP3OrbitType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3OrbitType::initializeClass, 1)))
            return NULL;
          return t_SP3OrbitType::wrap_Object(SP3OrbitType(((t_SP3OrbitType *) arg)->object.this$));
        }
        static PyObject *t_SP3OrbitType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3OrbitType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SP3OrbitType_of_(t_SP3OrbitType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SP3OrbitType_parseType(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          SP3OrbitType result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3OrbitType::parseType(a0));
            return t_SP3OrbitType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parseType", arg);
          return NULL;
        }

        static PyObject *t_SP3OrbitType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          SP3OrbitType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3OrbitType::valueOf(a0));
            return t_SP3OrbitType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_SP3OrbitType_values(PyTypeObject *type)
        {
          JArray< SP3OrbitType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::sp3::SP3OrbitType::values());
          return JArray<jobject>(result.this$).wrap(t_SP3OrbitType::wrap_jobject);
        }
        static PyObject *t_SP3OrbitType_get__parameters_(t_SP3OrbitType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Data.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm01Data::class$ = NULL;
              jmethodID *SsrIgm01Data::mids$ = NULL;
              bool SsrIgm01Data::live$ = false;

              jclass SsrIgm01Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getGnssIod_570ce0828f81a2c1] = env->getMethodID(cls, "getGnssIod", "()I");
                  mids$[mid_getOrbitCorrection_ed0d27aa2377afa2] = env->getMethodID(cls, "getOrbitCorrection", "()Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;");
                  mids$[mid_setGnssIod_99803b0791f320ff] = env->getMethodID(cls, "setGnssIod", "(I)V");
                  mids$[mid_setOrbitCorrection_4d608774f859b10b] = env->getMethodID(cls, "setOrbitCorrection", "(Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm01Data::SsrIgm01Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jint SsrIgm01Data::getGnssIod() const
              {
                return env->callIntMethod(this$, mids$[mid_getGnssIod_570ce0828f81a2c1]);
              }

              ::org::orekit::gnss::metric::messages::common::OrbitCorrection SsrIgm01Data::getOrbitCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::OrbitCorrection(env->callObjectMethod(this$, mids$[mid_getOrbitCorrection_ed0d27aa2377afa2]));
              }

              void SsrIgm01Data::setGnssIod(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGnssIod_99803b0791f320ff], a0);
              }

              void SsrIgm01Data::setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCorrection_4d608774f859b10b], a0.this$);
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
              static PyObject *t_SsrIgm01Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm01Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm01Data_init_(t_SsrIgm01Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm01Data_getGnssIod(t_SsrIgm01Data *self);
              static PyObject *t_SsrIgm01Data_getOrbitCorrection(t_SsrIgm01Data *self);
              static PyObject *t_SsrIgm01Data_setGnssIod(t_SsrIgm01Data *self, PyObject *arg);
              static PyObject *t_SsrIgm01Data_setOrbitCorrection(t_SsrIgm01Data *self, PyObject *arg);
              static PyObject *t_SsrIgm01Data_get__gnssIod(t_SsrIgm01Data *self, void *data);
              static int t_SsrIgm01Data_set__gnssIod(t_SsrIgm01Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm01Data_get__orbitCorrection(t_SsrIgm01Data *self, void *data);
              static int t_SsrIgm01Data_set__orbitCorrection(t_SsrIgm01Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm01Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm01Data, gnssIod),
                DECLARE_GETSET_FIELD(t_SsrIgm01Data, orbitCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm01Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm01Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01Data, getGnssIod, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm01Data, getOrbitCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm01Data, setGnssIod, METH_O),
                DECLARE_METHOD(t_SsrIgm01Data, setOrbitCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm01Data)[] = {
                { Py_tp_methods, t_SsrIgm01Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm01Data_init_ },
                { Py_tp_getset, t_SsrIgm01Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm01Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm01Data, t_SsrIgm01Data, SsrIgm01Data);

              void t_SsrIgm01Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm01Data), &PY_TYPE_DEF(SsrIgm01Data), module, "SsrIgm01Data", 0);
              }

              void t_SsrIgm01Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Data), "class_", make_descriptor(SsrIgm01Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Data), "wrapfn_", make_descriptor(t_SsrIgm01Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm01Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm01Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm01Data::wrap_Object(SsrIgm01Data(((t_SsrIgm01Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm01Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm01Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm01Data_init_(t_SsrIgm01Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm01Data object((jobject) NULL);

                INT_CALL(object = SsrIgm01Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm01Data_getGnssIod(t_SsrIgm01Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGnssIod());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm01Data_getOrbitCorrection(t_SsrIgm01Data *self)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(result);
              }

              static PyObject *t_SsrIgm01Data_setGnssIod(t_SsrIgm01Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGnssIod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGnssIod", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm01Data_setOrbitCorrection(t_SsrIgm01Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setOrbitCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbitCorrection", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm01Data_get__gnssIod(t_SsrIgm01Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGnssIod());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm01Data_set__gnssIod(t_SsrIgm01Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGnssIod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gnssIod", arg);
                return -1;
              }

              static PyObject *t_SsrIgm01Data_get__orbitCorrection(t_SsrIgm01Data *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(value);
              }
              static int t_SsrIgm01Data_set__orbitCorrection(t_SsrIgm01Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOrbitCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbitCorrection", arg);
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
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/NullPointerException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *AbstractFieldIntegrator::class$ = NULL;
      jmethodID *AbstractFieldIntegrator::mids$ = NULL;
      bool AbstractFieldIntegrator::live$ = false;

      jclass AbstractFieldIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/AbstractFieldIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addEventDetector_cdac85baa1ddabb0] = env->getMethodID(cls, "addEventDetector", "(Lorg/hipparchus/ode/events/FieldODEEventDetector;)V");
          mids$[mid_addStepEndHandler_9ddb55dbce73d9f2] = env->getMethodID(cls, "addStepEndHandler", "(Lorg/hipparchus/ode/events/FieldODEStepEndHandler;)V");
          mids$[mid_addStepHandler_a947dba38eed8683] = env->getMethodID(cls, "addStepHandler", "(Lorg/hipparchus/ode/sampling/FieldODEStepHandler;)V");
          mids$[mid_clearEventDetectors_0fa09c18fee449d5] = env->getMethodID(cls, "clearEventDetectors", "()V");
          mids$[mid_clearStepEndHandlers_0fa09c18fee449d5] = env->getMethodID(cls, "clearStepEndHandlers", "()V");
          mids$[mid_clearStepHandlers_0fa09c18fee449d5] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_computeDerivatives_895918d31d24de7c] = env->getMethodID(cls, "computeDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCurrentSignedStepsize_eba8e72a22c984ac] = env->getMethodID(cls, "getCurrentSignedStepsize", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getEventDetectors_2afa36052df4765d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/List;");
          mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getMaxEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStepEndHandlers_2afa36052df4765d] = env->getMethodID(cls, "getStepEndHandlers", "()Ljava/util/List;");
          mids$[mid_getStepHandlers_2afa36052df4765d] = env->getMethodID(cls, "getStepHandlers", "()Ljava/util/List;");
          mids$[mid_getStepStart_7194dd3ba3cbc7e8] = env->getMethodID(cls, "getStepStart", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_setMaxEvaluations_99803b0791f320ff] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");
          mids$[mid_sanityChecks_e269d011240a2d04] = env->getMethodID(cls, "sanityChecks", "(Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_initIntegration_d8a6319aba9a7b17] = env->getMethodID(cls, "initIntegration", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_setStepStart_22d6c75b64070b54] = env->getMethodID(cls, "setStepStart", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)V");
          mids$[mid_getStepSize_eba8e72a22c984ac] = env->getMethodID(cls, "getStepSize", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_setIsLastStep_bd04c9335fb9e4cf] = env->getMethodID(cls, "setIsLastStep", "(Z)V");
          mids$[mid_acceptStep_0795f39b52fb1f5e] = env->getMethodID(cls, "acceptStep", "(Lorg/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_isLastStep_b108b35ef48e27bd] = env->getMethodID(cls, "isLastStep", "()Z");
          mids$[mid_resetOccurred_b108b35ef48e27bd] = env->getMethodID(cls, "resetOccurred", "()Z");
          mids$[mid_setStepSize_072c8635f2164db9] = env->getMethodID(cls, "setStepSize", "(Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getEvaluationsCounter_b6dd60d8c3af0cf7] = env->getMethodID(cls, "getEvaluationsCounter", "()Lorg/hipparchus/util/Incrementor;");
          mids$[mid_getEquations_53ef2152c5bf56a9] = env->getMethodID(cls, "getEquations", "()Lorg/hipparchus/ode/FieldExpandableODE;");
          mids$[mid_setStateInitialized_bd04c9335fb9e4cf] = env->getMethodID(cls, "setStateInitialized", "(Z)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractFieldIntegrator::addEventDetector(const ::org::hipparchus::ode::events::FieldODEEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_cdac85baa1ddabb0], a0.this$);
      }

      void AbstractFieldIntegrator::addStepEndHandler(const ::org::hipparchus::ode::events::FieldODEStepEndHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepEndHandler_9ddb55dbce73d9f2], a0.this$);
      }

      void AbstractFieldIntegrator::addStepHandler(const ::org::hipparchus::ode::sampling::FieldODEStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepHandler_a947dba38eed8683], a0.this$);
      }

      void AbstractFieldIntegrator::clearEventDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventDetectors_0fa09c18fee449d5]);
      }

      void AbstractFieldIntegrator::clearStepEndHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepEndHandlers_0fa09c18fee449d5]);
      }

      void AbstractFieldIntegrator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_0fa09c18fee449d5]);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > AbstractFieldIntegrator::computeDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_895918d31d24de7c], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement AbstractFieldIntegrator::getCurrentSignedStepsize() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCurrentSignedStepsize_eba8e72a22c984ac]));
      }

      jint AbstractFieldIntegrator::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_570ce0828f81a2c1]);
      }

      ::java::util::List AbstractFieldIntegrator::getEventDetectors() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEventDetectors_2afa36052df4765d]));
      }

      ::org::hipparchus::Field AbstractFieldIntegrator::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
      }

      jint AbstractFieldIntegrator::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_570ce0828f81a2c1]);
      }

      ::java::lang::String AbstractFieldIntegrator::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      ::java::util::List AbstractFieldIntegrator::getStepEndHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepEndHandlers_2afa36052df4765d]));
      }

      ::java::util::List AbstractFieldIntegrator::getStepHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepHandlers_2afa36052df4765d]));
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldIntegrator::getStepStart() const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getStepStart_7194dd3ba3cbc7e8]));
      }

      void AbstractFieldIntegrator::setMaxEvaluations(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_99803b0791f320ff], a0);
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
      static PyObject *t_AbstractFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_of_(t_AbstractFieldIntegrator *self, PyObject *args);
      static PyObject *t_AbstractFieldIntegrator_addEventDetector(t_AbstractFieldIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_addStepEndHandler(t_AbstractFieldIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_addStepHandler(t_AbstractFieldIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_clearEventDetectors(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_clearStepEndHandlers(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_clearStepHandlers(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_computeDerivatives(t_AbstractFieldIntegrator *self, PyObject *args);
      static PyObject *t_AbstractFieldIntegrator_getCurrentSignedStepsize(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getEvaluations(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getEventDetectors(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getField(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getMaxEvaluations(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getName(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getStepEndHandlers(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getStepHandlers(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getStepStart(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_setMaxEvaluations(t_AbstractFieldIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_get__currentSignedStepsize(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__evaluations(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__eventDetectors(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__field(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__maxEvaluations(t_AbstractFieldIntegrator *self, void *data);
      static int t_AbstractFieldIntegrator_set__maxEvaluations(t_AbstractFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__name(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__stepEndHandlers(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__stepHandlers(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__stepStart(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__parameters_(t_AbstractFieldIntegrator *self, void *data);
      static PyGetSetDef t_AbstractFieldIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, currentSignedStepsize),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, evaluations),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, eventDetectors),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, field),
        DECLARE_GETSET_FIELD(t_AbstractFieldIntegrator, maxEvaluations),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, name),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, stepEndHandlers),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, stepHandlers),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, stepStart),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldIntegrator__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, addEventDetector, METH_O),
        DECLARE_METHOD(t_AbstractFieldIntegrator, addStepEndHandler, METH_O),
        DECLARE_METHOD(t_AbstractFieldIntegrator, addStepHandler, METH_O),
        DECLARE_METHOD(t_AbstractFieldIntegrator, clearEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, clearStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getCurrentSignedStepsize, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getField, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getName, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getStepStart, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, setMaxEvaluations, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldIntegrator)[] = {
        { Py_tp_methods, t_AbstractFieldIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractFieldIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFieldIntegrator, t_AbstractFieldIntegrator, AbstractFieldIntegrator);
      PyObject *t_AbstractFieldIntegrator::wrap_Object(const AbstractFieldIntegrator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldIntegrator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldIntegrator *self = (t_AbstractFieldIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldIntegrator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldIntegrator *self = (t_AbstractFieldIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractFieldIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldIntegrator), &PY_TYPE_DEF(AbstractFieldIntegrator), module, "AbstractFieldIntegrator", 0);
      }

      void t_AbstractFieldIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegrator), "class_", make_descriptor(AbstractFieldIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegrator), "wrapfn_", make_descriptor(t_AbstractFieldIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldIntegrator::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldIntegrator::wrap_Object(AbstractFieldIntegrator(((t_AbstractFieldIntegrator *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldIntegrator_of_(t_AbstractFieldIntegrator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractFieldIntegrator_addEventDetector(t_AbstractFieldIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::FieldODEEventDetector a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldIntegrator_addStepEndHandler(t_AbstractFieldIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::FieldODEStepEndHandler a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEStepEndHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::parameters_))
        {
          OBJ_CALL(self->object.addStepEndHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepEndHandler", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldIntegrator_addStepHandler(t_AbstractFieldIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::FieldODEStepHandler a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStepHandler::parameters_))
        {
          OBJ_CALL(self->object.addStepHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepHandler", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldIntegrator_clearEventDetectors(t_AbstractFieldIntegrator *self)
      {
        OBJ_CALL(self->object.clearEventDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractFieldIntegrator_clearStepEndHandlers(t_AbstractFieldIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepEndHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractFieldIntegrator_clearStepHandlers(t_AbstractFieldIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractFieldIntegrator_computeDerivatives(t_AbstractFieldIntegrator *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldIntegrator_getCurrentSignedStepsize(t_AbstractFieldIntegrator *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCurrentSignedStepsize());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getEvaluations(t_AbstractFieldIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldIntegrator_getEventDetectors(t_AbstractFieldIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getField(t_AbstractFieldIntegrator *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldIntegrator_getMaxEvaluations(t_AbstractFieldIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldIntegrator_getName(t_AbstractFieldIntegrator *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getStepEndHandlers(t_AbstractFieldIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getStepHandlers(t_AbstractFieldIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getStepStart(t_AbstractFieldIntegrator *self)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepStart());
        return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldIntegrator_setMaxEvaluations(t_AbstractFieldIntegrator *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setMaxEvaluations(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxEvaluations", arg);
        return NULL;
      }
      static PyObject *t_AbstractFieldIntegrator_get__parameters_(t_AbstractFieldIntegrator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldIntegrator_get__currentSignedStepsize(t_AbstractFieldIntegrator *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCurrentSignedStepsize());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__evaluations(t_AbstractFieldIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__eventDetectors(t_AbstractFieldIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__field(t_AbstractFieldIntegrator *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__maxEvaluations(t_AbstractFieldIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }
      static int t_AbstractFieldIntegrator_set__maxEvaluations(t_AbstractFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setMaxEvaluations(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
        return -1;
      }

      static PyObject *t_AbstractFieldIntegrator_get__name(t_AbstractFieldIntegrator *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__stepEndHandlers(t_AbstractFieldIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__stepHandlers(t_AbstractFieldIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__stepStart(t_AbstractFieldIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepStart());
        return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticElements.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticElements::class$ = NULL;
        jmethodID *GeoMagneticElements::mids$ = NULL;
        bool GeoMagneticElements::live$ = false;

        jclass GeoMagneticElements::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticElements");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_029ff0cbf68ea054] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_getDeclination_dff5885c2c873297] = env->getMethodID(cls, "getDeclination", "()D");
            mids$[mid_getFieldVector_d52645e0d4c07563] = env->getMethodID(cls, "getFieldVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getHorizontalIntensity_dff5885c2c873297] = env->getMethodID(cls, "getHorizontalIntensity", "()D");
            mids$[mid_getInclination_dff5885c2c873297] = env->getMethodID(cls, "getInclination", "()D");
            mids$[mid_getTotalIntensity_dff5885c2c873297] = env->getMethodID(cls, "getTotalIntensity", "()D");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeoMagneticElements::GeoMagneticElements(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_029ff0cbf68ea054, a0.this$)) {}

        jdouble GeoMagneticElements::getDeclination() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDeclination_dff5885c2c873297]);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D GeoMagneticElements::getFieldVector() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getFieldVector_d52645e0d4c07563]));
        }

        jdouble GeoMagneticElements::getHorizontalIntensity() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHorizontalIntensity_dff5885c2c873297]);
        }

        jdouble GeoMagneticElements::getInclination() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getInclination_dff5885c2c873297]);
        }

        jdouble GeoMagneticElements::getTotalIntensity() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTotalIntensity_dff5885c2c873297]);
        }

        ::java::lang::String GeoMagneticElements::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
        static PyObject *t_GeoMagneticElements_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticElements_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GeoMagneticElements_init_(t_GeoMagneticElements *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GeoMagneticElements_getDeclination(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_getFieldVector(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_getHorizontalIntensity(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_getInclination(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_getTotalIntensity(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_toString(t_GeoMagneticElements *self, PyObject *args);
        static PyObject *t_GeoMagneticElements_get__declination(t_GeoMagneticElements *self, void *data);
        static PyObject *t_GeoMagneticElements_get__fieldVector(t_GeoMagneticElements *self, void *data);
        static PyObject *t_GeoMagneticElements_get__horizontalIntensity(t_GeoMagneticElements *self, void *data);
        static PyObject *t_GeoMagneticElements_get__inclination(t_GeoMagneticElements *self, void *data);
        static PyObject *t_GeoMagneticElements_get__totalIntensity(t_GeoMagneticElements *self, void *data);
        static PyGetSetDef t_GeoMagneticElements__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticElements, declination),
          DECLARE_GET_FIELD(t_GeoMagneticElements, fieldVector),
          DECLARE_GET_FIELD(t_GeoMagneticElements, horizontalIntensity),
          DECLARE_GET_FIELD(t_GeoMagneticElements, inclination),
          DECLARE_GET_FIELD(t_GeoMagneticElements, totalIntensity),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticElements__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticElements, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticElements, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticElements, getDeclination, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, getFieldVector, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, getHorizontalIntensity, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, getInclination, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, getTotalIntensity, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticElements)[] = {
          { Py_tp_methods, t_GeoMagneticElements__methods_ },
          { Py_tp_init, (void *) t_GeoMagneticElements_init_ },
          { Py_tp_getset, t_GeoMagneticElements__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticElements)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticElements, t_GeoMagneticElements, GeoMagneticElements);

        void t_GeoMagneticElements::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticElements), &PY_TYPE_DEF(GeoMagneticElements), module, "GeoMagneticElements", 0);
        }

        void t_GeoMagneticElements::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticElements), "class_", make_descriptor(GeoMagneticElements::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticElements), "wrapfn_", make_descriptor(t_GeoMagneticElements::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticElements), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticElements_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticElements::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticElements::wrap_Object(GeoMagneticElements(((t_GeoMagneticElements *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticElements_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticElements::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GeoMagneticElements_init_(t_GeoMagneticElements *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          GeoMagneticElements object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            INT_CALL(object = GeoMagneticElements(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GeoMagneticElements_getDeclination(t_GeoMagneticElements *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDeclination());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticElements_getFieldVector(t_GeoMagneticElements *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getFieldVector());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_GeoMagneticElements_getHorizontalIntensity(t_GeoMagneticElements *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHorizontalIntensity());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticElements_getInclination(t_GeoMagneticElements *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getInclination());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticElements_getTotalIntensity(t_GeoMagneticElements *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTotalIntensity());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticElements_toString(t_GeoMagneticElements *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(GeoMagneticElements), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_GeoMagneticElements_get__declination(t_GeoMagneticElements *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDeclination());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeoMagneticElements_get__fieldVector(t_GeoMagneticElements *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getFieldVector());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_GeoMagneticElements_get__horizontalIntensity(t_GeoMagneticElements *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHorizontalIntensity());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeoMagneticElements_get__inclination(t_GeoMagneticElements *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getInclination());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeoMagneticElements_get__totalIntensity(t_GeoMagneticElements *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTotalIntensity());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldRecordAndContinue.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "java/util/List.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/handlers/FieldRecordAndContinue$Event.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldRecordAndContinue::class$ = NULL;
          jmethodID *FieldRecordAndContinue::mids$ = NULL;
          bool FieldRecordAndContinue::live$ = false;

          jclass FieldRecordAndContinue::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldRecordAndContinue");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_de3e021e7266b71e] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_eventOccurred_fc49a7ff6cb062a2] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_getEvents_2afa36052df4765d] = env->getMethodID(cls, "getEvents", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldRecordAndContinue::FieldRecordAndContinue() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          FieldRecordAndContinue::FieldRecordAndContinue(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de3e021e7266b71e, a0.this$)) {}

          void FieldRecordAndContinue::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
          }

          ::org::hipparchus::ode::events::Action FieldRecordAndContinue::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_fc49a7ff6cb062a2], a0.this$, a1.this$, a2));
          }

          ::java::util::List FieldRecordAndContinue::getEvents() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEvents_2afa36052df4765d]));
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
          static PyObject *t_FieldRecordAndContinue_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRecordAndContinue_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRecordAndContinue_of_(t_FieldRecordAndContinue *self, PyObject *args);
          static int t_FieldRecordAndContinue_init_(t_FieldRecordAndContinue *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldRecordAndContinue_clear(t_FieldRecordAndContinue *self);
          static PyObject *t_FieldRecordAndContinue_eventOccurred(t_FieldRecordAndContinue *self, PyObject *args);
          static PyObject *t_FieldRecordAndContinue_getEvents(t_FieldRecordAndContinue *self);
          static PyObject *t_FieldRecordAndContinue_get__events(t_FieldRecordAndContinue *self, void *data);
          static PyObject *t_FieldRecordAndContinue_get__parameters_(t_FieldRecordAndContinue *self, void *data);
          static PyGetSetDef t_FieldRecordAndContinue__fields_[] = {
            DECLARE_GET_FIELD(t_FieldRecordAndContinue, events),
            DECLARE_GET_FIELD(t_FieldRecordAndContinue, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldRecordAndContinue__methods_[] = {
            DECLARE_METHOD(t_FieldRecordAndContinue, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRecordAndContinue, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRecordAndContinue, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue, clear, METH_NOARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue, getEvents, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldRecordAndContinue)[] = {
            { Py_tp_methods, t_FieldRecordAndContinue__methods_ },
            { Py_tp_init, (void *) t_FieldRecordAndContinue_init_ },
            { Py_tp_getset, t_FieldRecordAndContinue__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldRecordAndContinue)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldRecordAndContinue, t_FieldRecordAndContinue, FieldRecordAndContinue);
          PyObject *t_FieldRecordAndContinue::wrap_Object(const FieldRecordAndContinue& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRecordAndContinue::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRecordAndContinue *self = (t_FieldRecordAndContinue *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldRecordAndContinue::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRecordAndContinue::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRecordAndContinue *self = (t_FieldRecordAndContinue *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldRecordAndContinue::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldRecordAndContinue), &PY_TYPE_DEF(FieldRecordAndContinue), module, "FieldRecordAndContinue", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue), "Event", make_descriptor(&PY_TYPE_DEF(FieldRecordAndContinue$Event)));
          }

          void t_FieldRecordAndContinue::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue), "class_", make_descriptor(FieldRecordAndContinue::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue), "wrapfn_", make_descriptor(t_FieldRecordAndContinue::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldRecordAndContinue_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldRecordAndContinue::initializeClass, 1)))
              return NULL;
            return t_FieldRecordAndContinue::wrap_Object(FieldRecordAndContinue(((t_FieldRecordAndContinue *) arg)->object.this$));
          }
          static PyObject *t_FieldRecordAndContinue_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldRecordAndContinue::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldRecordAndContinue_of_(t_FieldRecordAndContinue *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldRecordAndContinue_init_(t_FieldRecordAndContinue *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                FieldRecordAndContinue object((jobject) NULL);

                INT_CALL(object = FieldRecordAndContinue());
                self->object = object;
                break;
              }
             case 1:
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                FieldRecordAndContinue object((jobject) NULL);

                if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = FieldRecordAndContinue(a0));
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

          static PyObject *t_FieldRecordAndContinue_clear(t_FieldRecordAndContinue *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_FieldRecordAndContinue_eventOccurred(t_FieldRecordAndContinue *self, PyObject *args)
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

          static PyObject *t_FieldRecordAndContinue_getEvents(t_FieldRecordAndContinue *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getEvents());
            return ::java::util::t_List::wrap_Object(result);
          }
          static PyObject *t_FieldRecordAndContinue_get__parameters_(t_FieldRecordAndContinue *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldRecordAndContinue_get__events(t_FieldRecordAndContinue *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getEvents());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/PythonCelestialBodyLoader.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonCelestialBodyLoader::class$ = NULL;
      jmethodID *PythonCelestialBodyLoader::mids$ = NULL;
      bool PythonCelestialBodyLoader::live$ = false;

      jclass PythonCelestialBodyLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonCelestialBodyLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_loadCelestialBody_68e48076ef831536] = env->getMethodID(cls, "loadCelestialBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonCelestialBodyLoader::PythonCelestialBodyLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonCelestialBodyLoader::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonCelestialBodyLoader::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonCelestialBodyLoader::pythonExtension(jlong a0) const
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
    namespace bodies {
      static PyObject *t_PythonCelestialBodyLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonCelestialBodyLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonCelestialBodyLoader_init_(t_PythonCelestialBodyLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonCelestialBodyLoader_finalize(t_PythonCelestialBodyLoader *self);
      static PyObject *t_PythonCelestialBodyLoader_pythonExtension(t_PythonCelestialBodyLoader *self, PyObject *args);
      static jobject JNICALL t_PythonCelestialBodyLoader_loadCelestialBody0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonCelestialBodyLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonCelestialBodyLoader_get__self(t_PythonCelestialBodyLoader *self, void *data);
      static PyGetSetDef t_PythonCelestialBodyLoader__fields_[] = {
        DECLARE_GET_FIELD(t_PythonCelestialBodyLoader, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonCelestialBodyLoader__methods_[] = {
        DECLARE_METHOD(t_PythonCelestialBodyLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBodyLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBodyLoader, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonCelestialBodyLoader, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonCelestialBodyLoader)[] = {
        { Py_tp_methods, t_PythonCelestialBodyLoader__methods_ },
        { Py_tp_init, (void *) t_PythonCelestialBodyLoader_init_ },
        { Py_tp_getset, t_PythonCelestialBodyLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonCelestialBodyLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonCelestialBodyLoader, t_PythonCelestialBodyLoader, PythonCelestialBodyLoader);

      void t_PythonCelestialBodyLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonCelestialBodyLoader), &PY_TYPE_DEF(PythonCelestialBodyLoader), module, "PythonCelestialBodyLoader", 1);
      }

      void t_PythonCelestialBodyLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodyLoader), "class_", make_descriptor(PythonCelestialBodyLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodyLoader), "wrapfn_", make_descriptor(t_PythonCelestialBodyLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodyLoader), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonCelestialBodyLoader::initializeClass);
        JNINativeMethod methods[] = {
          { "loadCelestialBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodyLoader_loadCelestialBody0 },
          { "pythonDecRef", "()V", (void *) t_PythonCelestialBodyLoader_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonCelestialBodyLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonCelestialBodyLoader::initializeClass, 1)))
          return NULL;
        return t_PythonCelestialBodyLoader::wrap_Object(PythonCelestialBodyLoader(((t_PythonCelestialBodyLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonCelestialBodyLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonCelestialBodyLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonCelestialBodyLoader_init_(t_PythonCelestialBodyLoader *self, PyObject *args, PyObject *kwds)
      {
        PythonCelestialBodyLoader object((jobject) NULL);

        INT_CALL(object = PythonCelestialBodyLoader());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonCelestialBodyLoader_finalize(t_PythonCelestialBodyLoader *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonCelestialBodyLoader_pythonExtension(t_PythonCelestialBodyLoader *self, PyObject *args)
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

      static jobject JNICALL t_PythonCelestialBodyLoader_loadCelestialBody0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodyLoader::mids$[PythonCelestialBodyLoader::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "loadCelestialBody", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("loadCelestialBody", result);
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

      static void JNICALL t_PythonCelestialBodyLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodyLoader::mids$[PythonCelestialBodyLoader::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonCelestialBodyLoader::mids$[PythonCelestialBodyLoader::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonCelestialBodyLoader_get__self(t_PythonCelestialBodyLoader *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/BOBYQAOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *BOBYQAOptimizer::class$ = NULL;
            jmethodID *BOBYQAOptimizer::mids$ = NULL;
            bool BOBYQAOptimizer::live$ = false;
            jdouble BOBYQAOptimizer::DEFAULT_INITIAL_RADIUS = (jdouble) 0;
            jdouble BOBYQAOptimizer::DEFAULT_STOPPING_RADIUS = (jdouble) 0;
            jint BOBYQAOptimizer::MINIMUM_PROBLEM_DIMENSION = (jint) 0;

            jclass BOBYQAOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/BOBYQAOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_init$_07bf81310115068c] = env->getMethodID(cls, "<init>", "(IDD)V");
                mids$[mid_doOptimize_4ae915e35f441d39] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_INITIAL_RADIUS = env->getStaticDoubleField(cls, "DEFAULT_INITIAL_RADIUS");
                DEFAULT_STOPPING_RADIUS = env->getStaticDoubleField(cls, "DEFAULT_STOPPING_RADIUS");
                MINIMUM_PROBLEM_DIMENSION = env->getStaticIntField(cls, "MINIMUM_PROBLEM_DIMENSION");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BOBYQAOptimizer::BOBYQAOptimizer(jint a0) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

            BOBYQAOptimizer::BOBYQAOptimizer(jint a0, jdouble a1, jdouble a2) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_07bf81310115068c, a0, a1, a2)) {}
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
        namespace scalar {
          namespace noderiv {
            static PyObject *t_BOBYQAOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BOBYQAOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BOBYQAOptimizer_of_(t_BOBYQAOptimizer *self, PyObject *args);
            static int t_BOBYQAOptimizer_init_(t_BOBYQAOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_BOBYQAOptimizer_get__parameters_(t_BOBYQAOptimizer *self, void *data);
            static PyGetSetDef t_BOBYQAOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_BOBYQAOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BOBYQAOptimizer__methods_[] = {
              DECLARE_METHOD(t_BOBYQAOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BOBYQAOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BOBYQAOptimizer, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BOBYQAOptimizer)[] = {
              { Py_tp_methods, t_BOBYQAOptimizer__methods_ },
              { Py_tp_init, (void *) t_BOBYQAOptimizer_init_ },
              { Py_tp_getset, t_BOBYQAOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BOBYQAOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(BOBYQAOptimizer, t_BOBYQAOptimizer, BOBYQAOptimizer);
            PyObject *t_BOBYQAOptimizer::wrap_Object(const BOBYQAOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_BOBYQAOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_BOBYQAOptimizer *self = (t_BOBYQAOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_BOBYQAOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_BOBYQAOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_BOBYQAOptimizer *self = (t_BOBYQAOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_BOBYQAOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(BOBYQAOptimizer), &PY_TYPE_DEF(BOBYQAOptimizer), module, "BOBYQAOptimizer", 0);
            }

            void t_BOBYQAOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "class_", make_descriptor(BOBYQAOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "wrapfn_", make_descriptor(t_BOBYQAOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "boxfn_", make_descriptor(boxObject));
              env->getClass(BOBYQAOptimizer::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "DEFAULT_INITIAL_RADIUS", make_descriptor(BOBYQAOptimizer::DEFAULT_INITIAL_RADIUS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "DEFAULT_STOPPING_RADIUS", make_descriptor(BOBYQAOptimizer::DEFAULT_STOPPING_RADIUS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "MINIMUM_PROBLEM_DIMENSION", make_descriptor(BOBYQAOptimizer::MINIMUM_PROBLEM_DIMENSION));
            }

            static PyObject *t_BOBYQAOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BOBYQAOptimizer::initializeClass, 1)))
                return NULL;
              return t_BOBYQAOptimizer::wrap_Object(BOBYQAOptimizer(((t_BOBYQAOptimizer *) arg)->object.this$));
            }
            static PyObject *t_BOBYQAOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BOBYQAOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_BOBYQAOptimizer_of_(t_BOBYQAOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_BOBYQAOptimizer_init_(t_BOBYQAOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jint a0;
                  BOBYQAOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "I", &a0))
                  {
                    INT_CALL(object = BOBYQAOptimizer(a0));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  BOBYQAOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "IDD", &a0, &a1, &a2))
                  {
                    INT_CALL(object = BOBYQAOptimizer(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
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
            static PyObject *t_BOBYQAOptimizer_get__parameters_(t_BOBYQAOptimizer *self, void *data)
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
#include "java/util/Date.h"
#include "java/util/Date.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Date::class$ = NULL;
    jmethodID *Date::mids$ = NULL;
    bool Date::live$ = false;

    jclass Date::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Date");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_3a8e7649f31fdb20] = env->getMethodID(cls, "<init>", "(J)V");
        mids$[mid_init$_8336200ef3dde36b] = env->getMethodID(cls, "<init>", "(III)V");
        mids$[mid_init$_602d537927d23d46] = env->getMethodID(cls, "<init>", "(IIIII)V");
        mids$[mid_init$_5aa4d40be6f39408] = env->getMethodID(cls, "<init>", "(IIIIII)V");
        mids$[mid_UTC_8b560538e4d540bd] = env->getStaticMethodID(cls, "UTC", "(IIIIII)J");
        mids$[mid_after_f90360441aeddba6] = env->getMethodID(cls, "after", "(Ljava/util/Date;)Z");
        mids$[mid_before_f90360441aeddba6] = env->getMethodID(cls, "before", "(Ljava/util/Date;)Z");
        mids$[mid_clone_4d26fd885228c716] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_compareTo_25678526ebc7785e] = env->getMethodID(cls, "compareTo", "(Ljava/util/Date;)I");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getDate_570ce0828f81a2c1] = env->getMethodID(cls, "getDate", "()I");
        mids$[mid_getDay_570ce0828f81a2c1] = env->getMethodID(cls, "getDay", "()I");
        mids$[mid_getHours_570ce0828f81a2c1] = env->getMethodID(cls, "getHours", "()I");
        mids$[mid_getMinutes_570ce0828f81a2c1] = env->getMethodID(cls, "getMinutes", "()I");
        mids$[mid_getMonth_570ce0828f81a2c1] = env->getMethodID(cls, "getMonth", "()I");
        mids$[mid_getSeconds_570ce0828f81a2c1] = env->getMethodID(cls, "getSeconds", "()I");
        mids$[mid_getTime_492808a339bfa35f] = env->getMethodID(cls, "getTime", "()J");
        mids$[mid_getTimezoneOffset_570ce0828f81a2c1] = env->getMethodID(cls, "getTimezoneOffset", "()I");
        mids$[mid_getYear_570ce0828f81a2c1] = env->getMethodID(cls, "getYear", "()I");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_parse_e3831db48e197f9e] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)J");
        mids$[mid_setDate_99803b0791f320ff] = env->getMethodID(cls, "setDate", "(I)V");
        mids$[mid_setHours_99803b0791f320ff] = env->getMethodID(cls, "setHours", "(I)V");
        mids$[mid_setMinutes_99803b0791f320ff] = env->getMethodID(cls, "setMinutes", "(I)V");
        mids$[mid_setMonth_99803b0791f320ff] = env->getMethodID(cls, "setMonth", "(I)V");
        mids$[mid_setSeconds_99803b0791f320ff] = env->getMethodID(cls, "setSeconds", "(I)V");
        mids$[mid_setTime_3a8e7649f31fdb20] = env->getMethodID(cls, "setTime", "(J)V");
        mids$[mid_setYear_99803b0791f320ff] = env->getMethodID(cls, "setYear", "(I)V");
        mids$[mid_toGMTString_11b109bd155ca898] = env->getMethodID(cls, "toGMTString", "()Ljava/lang/String;");
        mids$[mid_toLocaleString_11b109bd155ca898] = env->getMethodID(cls, "toLocaleString", "()Ljava/lang/String;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Date::Date() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    Date::Date(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    Date::Date(jlong a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3a8e7649f31fdb20, a0)) {}

    Date::Date(jint a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8336200ef3dde36b, a0, a1, a2)) {}

    Date::Date(jint a0, jint a1, jint a2, jint a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_602d537927d23d46, a0, a1, a2, a3, a4)) {}

    Date::Date(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5aa4d40be6f39408, a0, a1, a2, a3, a4, a5)) {}

    jlong Date::UTC(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_UTC_8b560538e4d540bd], a0, a1, a2, a3, a4, a5);
    }

    jboolean Date::after(const Date & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_after_f90360441aeddba6], a0.this$);
    }

    jboolean Date::before(const Date & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_before_f90360441aeddba6], a0.this$);
    }

    ::java::lang::Object Date::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_4d26fd885228c716]));
    }

    jint Date::compareTo(const Date & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_25678526ebc7785e], a0.this$);
    }

    jboolean Date::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    jint Date::getDate() const
    {
      return env->callIntMethod(this$, mids$[mid_getDate_570ce0828f81a2c1]);
    }

    jint Date::getDay() const
    {
      return env->callIntMethod(this$, mids$[mid_getDay_570ce0828f81a2c1]);
    }

    jint Date::getHours() const
    {
      return env->callIntMethod(this$, mids$[mid_getHours_570ce0828f81a2c1]);
    }

    jint Date::getMinutes() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinutes_570ce0828f81a2c1]);
    }

    jint Date::getMonth() const
    {
      return env->callIntMethod(this$, mids$[mid_getMonth_570ce0828f81a2c1]);
    }

    jint Date::getSeconds() const
    {
      return env->callIntMethod(this$, mids$[mid_getSeconds_570ce0828f81a2c1]);
    }

    jlong Date::getTime() const
    {
      return env->callLongMethod(this$, mids$[mid_getTime_492808a339bfa35f]);
    }

    jint Date::getTimezoneOffset() const
    {
      return env->callIntMethod(this$, mids$[mid_getTimezoneOffset_570ce0828f81a2c1]);
    }

    jint Date::getYear() const
    {
      return env->callIntMethod(this$, mids$[mid_getYear_570ce0828f81a2c1]);
    }

    jint Date::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jlong Date::parse(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parse_e3831db48e197f9e], a0.this$);
    }

    void Date::setDate(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDate_99803b0791f320ff], a0);
    }

    void Date::setHours(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setHours_99803b0791f320ff], a0);
    }

    void Date::setMinutes(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinutes_99803b0791f320ff], a0);
    }

    void Date::setMonth(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMonth_99803b0791f320ff], a0);
    }

    void Date::setSeconds(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setSeconds_99803b0791f320ff], a0);
    }

    void Date::setTime(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setTime_3a8e7649f31fdb20], a0);
    }

    void Date::setYear(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setYear_99803b0791f320ff], a0);
    }

    ::java::lang::String Date::toGMTString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toGMTString_11b109bd155ca898]));
    }

    ::java::lang::String Date::toLocaleString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toLocaleString_11b109bd155ca898]));
    }

    ::java::lang::String Date::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Date_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Date_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Date_init_(t_Date *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Date_UTC(PyTypeObject *type, PyObject *args);
    static PyObject *t_Date_after(t_Date *self, PyObject *arg);
    static PyObject *t_Date_before(t_Date *self, PyObject *arg);
    static PyObject *t_Date_clone(t_Date *self);
    static PyObject *t_Date_compareTo(t_Date *self, PyObject *arg);
    static PyObject *t_Date_equals(t_Date *self, PyObject *args);
    static PyObject *t_Date_getDate(t_Date *self);
    static PyObject *t_Date_getDay(t_Date *self);
    static PyObject *t_Date_getHours(t_Date *self);
    static PyObject *t_Date_getMinutes(t_Date *self);
    static PyObject *t_Date_getMonth(t_Date *self);
    static PyObject *t_Date_getSeconds(t_Date *self);
    static PyObject *t_Date_getTime(t_Date *self);
    static PyObject *t_Date_getTimezoneOffset(t_Date *self);
    static PyObject *t_Date_getYear(t_Date *self);
    static PyObject *t_Date_hashCode(t_Date *self, PyObject *args);
    static PyObject *t_Date_parse(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Date_setDate(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setHours(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setMinutes(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setMonth(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setSeconds(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setTime(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setYear(t_Date *self, PyObject *arg);
    static PyObject *t_Date_toGMTString(t_Date *self);
    static PyObject *t_Date_toLocaleString(t_Date *self);
    static PyObject *t_Date_toString(t_Date *self, PyObject *args);
    static PyObject *t_Date_get__date(t_Date *self, void *data);
    static int t_Date_set__date(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__day(t_Date *self, void *data);
    static PyObject *t_Date_get__hours(t_Date *self, void *data);
    static int t_Date_set__hours(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__minutes(t_Date *self, void *data);
    static int t_Date_set__minutes(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__month(t_Date *self, void *data);
    static int t_Date_set__month(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__seconds(t_Date *self, void *data);
    static int t_Date_set__seconds(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__time(t_Date *self, void *data);
    static int t_Date_set__time(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__timezoneOffset(t_Date *self, void *data);
    static PyObject *t_Date_get__year(t_Date *self, void *data);
    static int t_Date_set__year(t_Date *self, PyObject *arg, void *data);
    static PyGetSetDef t_Date__fields_[] = {
      DECLARE_GETSET_FIELD(t_Date, date),
      DECLARE_GET_FIELD(t_Date, day),
      DECLARE_GETSET_FIELD(t_Date, hours),
      DECLARE_GETSET_FIELD(t_Date, minutes),
      DECLARE_GETSET_FIELD(t_Date, month),
      DECLARE_GETSET_FIELD(t_Date, seconds),
      DECLARE_GETSET_FIELD(t_Date, time),
      DECLARE_GET_FIELD(t_Date, timezoneOffset),
      DECLARE_GETSET_FIELD(t_Date, year),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Date__methods_[] = {
      DECLARE_METHOD(t_Date, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Date, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Date, UTC, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Date, after, METH_O),
      DECLARE_METHOD(t_Date, before, METH_O),
      DECLARE_METHOD(t_Date, clone, METH_NOARGS),
      DECLARE_METHOD(t_Date, compareTo, METH_O),
      DECLARE_METHOD(t_Date, equals, METH_VARARGS),
      DECLARE_METHOD(t_Date, getDate, METH_NOARGS),
      DECLARE_METHOD(t_Date, getDay, METH_NOARGS),
      DECLARE_METHOD(t_Date, getHours, METH_NOARGS),
      DECLARE_METHOD(t_Date, getMinutes, METH_NOARGS),
      DECLARE_METHOD(t_Date, getMonth, METH_NOARGS),
      DECLARE_METHOD(t_Date, getSeconds, METH_NOARGS),
      DECLARE_METHOD(t_Date, getTime, METH_NOARGS),
      DECLARE_METHOD(t_Date, getTimezoneOffset, METH_NOARGS),
      DECLARE_METHOD(t_Date, getYear, METH_NOARGS),
      DECLARE_METHOD(t_Date, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Date, parse, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Date, setDate, METH_O),
      DECLARE_METHOD(t_Date, setHours, METH_O),
      DECLARE_METHOD(t_Date, setMinutes, METH_O),
      DECLARE_METHOD(t_Date, setMonth, METH_O),
      DECLARE_METHOD(t_Date, setSeconds, METH_O),
      DECLARE_METHOD(t_Date, setTime, METH_O),
      DECLARE_METHOD(t_Date, setYear, METH_O),
      DECLARE_METHOD(t_Date, toGMTString, METH_NOARGS),
      DECLARE_METHOD(t_Date, toLocaleString, METH_NOARGS),
      DECLARE_METHOD(t_Date, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Date)[] = {
      { Py_tp_methods, t_Date__methods_ },
      { Py_tp_init, (void *) t_Date_init_ },
      { Py_tp_getset, t_Date__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Date)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Date, t_Date, Date);

    void t_Date::install(PyObject *module)
    {
      installType(&PY_TYPE(Date), &PY_TYPE_DEF(Date), module, "Date", 0);
    }

    void t_Date::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Date), "class_", make_descriptor(Date::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Date), "wrapfn_", make_descriptor(t_Date::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Date), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Date_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Date::initializeClass, 1)))
        return NULL;
      return t_Date::wrap_Object(Date(((t_Date *) arg)->object.this$));
    }
    static PyObject *t_Date_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Date::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Date_init_(t_Date *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Date object((jobject) NULL);

          INT_CALL(object = Date());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Date object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Date(a0));
            self->object = object;
            break;
          }
        }
        {
          jlong a0;
          Date object((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            INT_CALL(object = Date(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          jint a0;
          jint a1;
          jint a2;
          Date object((jobject) NULL);

          if (!parseArgs(args, "III", &a0, &a1, &a2))
          {
            INT_CALL(object = Date(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        goto err;
       case 5:
        {
          jint a0;
          jint a1;
          jint a2;
          jint a3;
          jint a4;
          Date object((jobject) NULL);

          if (!parseArgs(args, "IIIII", &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = Date(a0, a1, a2, a3, a4));
            self->object = object;
            break;
          }
        }
        goto err;
       case 6:
        {
          jint a0;
          jint a1;
          jint a2;
          jint a3;
          jint a4;
          jint a5;
          Date object((jobject) NULL);

          if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = Date(a0, a1, a2, a3, a4, a5));
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

    static PyObject *t_Date_UTC(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint a2;
      jint a3;
      jint a4;
      jint a5;
      jlong result;

      if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
      {
        OBJ_CALL(result = ::java::util::Date::UTC(a0, a1, a2, a3, a4, a5));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "UTC", args);
      return NULL;
    }

    static PyObject *t_Date_after(t_Date *self, PyObject *arg)
    {
      Date a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", Date::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.after(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "after", arg);
      return NULL;
    }

    static PyObject *t_Date_before(t_Date *self, PyObject *arg)
    {
      Date a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", Date::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.before(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "before", arg);
      return NULL;
    }

    static PyObject *t_Date_clone(t_Date *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Date_compareTo(t_Date *self, PyObject *arg)
    {
      Date a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "k", Date::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Date_equals(t_Date *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Date), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Date_getDate(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getDate());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getDay(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getDay());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getHours(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getHours());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getMinutes(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMinutes());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getMonth(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMonth());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getSeconds(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getSeconds());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getTime(t_Date *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getTime());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Date_getTimezoneOffset(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getTimezoneOffset());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getYear(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getYear());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_hashCode(t_Date *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Date), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Date_parse(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jlong result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::util::Date::parse(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "parse", arg);
      return NULL;
    }

    static PyObject *t_Date_setDate(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setDate(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDate", arg);
      return NULL;
    }

    static PyObject *t_Date_setHours(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setHours(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setHours", arg);
      return NULL;
    }

    static PyObject *t_Date_setMinutes(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMinutes(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMinutes", arg);
      return NULL;
    }

    static PyObject *t_Date_setMonth(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMonth(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMonth", arg);
      return NULL;
    }

    static PyObject *t_Date_setSeconds(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setSeconds(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setSeconds", arg);
      return NULL;
    }

    static PyObject *t_Date_setTime(t_Date *self, PyObject *arg)
    {
      jlong a0;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(self->object.setTime(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setTime", arg);
      return NULL;
    }

    static PyObject *t_Date_setYear(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setYear(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setYear", arg);
      return NULL;
    }

    static PyObject *t_Date_toGMTString(t_Date *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toGMTString());
      return j2p(result);
    }

    static PyObject *t_Date_toLocaleString(t_Date *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toLocaleString());
      return j2p(result);
    }

    static PyObject *t_Date_toString(t_Date *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Date), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Date_get__date(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getDate());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__date(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setDate(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "date", arg);
      return -1;
    }

    static PyObject *t_Date_get__day(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getDay());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Date_get__hours(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getHours());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__hours(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setHours(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "hours", arg);
      return -1;
    }

    static PyObject *t_Date_get__minutes(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinutes());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__minutes(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinutes(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minutes", arg);
      return -1;
    }

    static PyObject *t_Date_get__month(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMonth());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__month(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMonth(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "month", arg);
      return -1;
    }

    static PyObject *t_Date_get__seconds(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getSeconds());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__seconds(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setSeconds(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "seconds", arg);
      return -1;
    }

    static PyObject *t_Date_get__time(t_Date *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getTime());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }
    static int t_Date_set__time(t_Date *self, PyObject *arg, void *data)
    {
      {
        jlong value;
        if (!parseArg(arg, "J", &value))
        {
          INT_CALL(self->object.setTime(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "time", arg);
      return -1;
    }

    static PyObject *t_Date_get__timezoneOffset(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getTimezoneOffset());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Date_get__year(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getYear());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__year(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setYear(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "year", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmQuaternion::class$ = NULL;
              jmethodID *ApmQuaternion::mids$ = NULL;
              bool ApmQuaternion::live$ = false;

              jclass ApmQuaternion::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getEndpoints_35bd4909c56b6915] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getQuaternion_18aa64800eb51ca4] = env->getMethodID(cls, "getQuaternion", "()Lorg/hipparchus/complex/Quaternion;");
                  mids$[mid_getQuaternionDot_18aa64800eb51ca4] = env->getMethodID(cls, "getQuaternionDot", "()Lorg/hipparchus/complex/Quaternion;");
                  mids$[mid_hasRates_b108b35ef48e27bd] = env->getMethodID(cls, "hasRates", "()Z");
                  mids$[mid_setQ_bb79ca80d85d0a66] = env->getMethodID(cls, "setQ", "(ID)V");
                  mids$[mid_setQDot_bb79ca80d85d0a66] = env->getMethodID(cls, "setQDot", "(ID)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ApmQuaternion::ApmQuaternion() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints ApmQuaternion::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_35bd4909c56b6915]));
              }

              ::org::hipparchus::complex::Quaternion ApmQuaternion::getQuaternion() const
              {
                return ::org::hipparchus::complex::Quaternion(env->callObjectMethod(this$, mids$[mid_getQuaternion_18aa64800eb51ca4]));
              }

              ::org::hipparchus::complex::Quaternion ApmQuaternion::getQuaternionDot() const
              {
                return ::org::hipparchus::complex::Quaternion(env->callObjectMethod(this$, mids$[mid_getQuaternionDot_18aa64800eb51ca4]));
              }

              jboolean ApmQuaternion::hasRates() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasRates_b108b35ef48e27bd]);
              }

              void ApmQuaternion::setQ(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setQ_bb79ca80d85d0a66], a0, a1);
              }

              void ApmQuaternion::setQDot(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setQDot_bb79ca80d85d0a66], a0, a1);
              }

              void ApmQuaternion::validate(jdouble a0) const
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
          namespace adm {
            namespace apm {
              static PyObject *t_ApmQuaternion_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmQuaternion_instance_(PyTypeObject *type, PyObject *arg);
              static int t_ApmQuaternion_init_(t_ApmQuaternion *self, PyObject *args, PyObject *kwds);
              static PyObject *t_ApmQuaternion_getEndpoints(t_ApmQuaternion *self);
              static PyObject *t_ApmQuaternion_getQuaternion(t_ApmQuaternion *self);
              static PyObject *t_ApmQuaternion_getQuaternionDot(t_ApmQuaternion *self);
              static PyObject *t_ApmQuaternion_hasRates(t_ApmQuaternion *self);
              static PyObject *t_ApmQuaternion_setQ(t_ApmQuaternion *self, PyObject *args);
              static PyObject *t_ApmQuaternion_setQDot(t_ApmQuaternion *self, PyObject *args);
              static PyObject *t_ApmQuaternion_validate(t_ApmQuaternion *self, PyObject *args);
              static PyObject *t_ApmQuaternion_get__endpoints(t_ApmQuaternion *self, void *data);
              static PyObject *t_ApmQuaternion_get__quaternion(t_ApmQuaternion *self, void *data);
              static PyObject *t_ApmQuaternion_get__quaternionDot(t_ApmQuaternion *self, void *data);
              static PyGetSetDef t_ApmQuaternion__fields_[] = {
                DECLARE_GET_FIELD(t_ApmQuaternion, endpoints),
                DECLARE_GET_FIELD(t_ApmQuaternion, quaternion),
                DECLARE_GET_FIELD(t_ApmQuaternion, quaternionDot),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmQuaternion__methods_[] = {
                DECLARE_METHOD(t_ApmQuaternion, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternion, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternion, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_ApmQuaternion, getQuaternion, METH_NOARGS),
                DECLARE_METHOD(t_ApmQuaternion, getQuaternionDot, METH_NOARGS),
                DECLARE_METHOD(t_ApmQuaternion, hasRates, METH_NOARGS),
                DECLARE_METHOD(t_ApmQuaternion, setQ, METH_VARARGS),
                DECLARE_METHOD(t_ApmQuaternion, setQDot, METH_VARARGS),
                DECLARE_METHOD(t_ApmQuaternion, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmQuaternion)[] = {
                { Py_tp_methods, t_ApmQuaternion__methods_ },
                { Py_tp_init, (void *) t_ApmQuaternion_init_ },
                { Py_tp_getset, t_ApmQuaternion__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmQuaternion)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(ApmQuaternion, t_ApmQuaternion, ApmQuaternion);

              void t_ApmQuaternion::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmQuaternion), &PY_TYPE_DEF(ApmQuaternion), module, "ApmQuaternion", 0);
              }

              void t_ApmQuaternion::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternion), "class_", make_descriptor(ApmQuaternion::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternion), "wrapfn_", make_descriptor(t_ApmQuaternion::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternion), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_ApmQuaternion_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmQuaternion::initializeClass, 1)))
                  return NULL;
                return t_ApmQuaternion::wrap_Object(ApmQuaternion(((t_ApmQuaternion *) arg)->object.this$));
              }
              static PyObject *t_ApmQuaternion_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmQuaternion::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_ApmQuaternion_init_(t_ApmQuaternion *self, PyObject *args, PyObject *kwds)
              {
                ApmQuaternion object((jobject) NULL);

                INT_CALL(object = ApmQuaternion());
                self->object = object;

                return 0;
              }

              static PyObject *t_ApmQuaternion_getEndpoints(t_ApmQuaternion *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_ApmQuaternion_getQuaternion(t_ApmQuaternion *self)
              {
                ::org::hipparchus::complex::Quaternion result((jobject) NULL);
                OBJ_CALL(result = self->object.getQuaternion());
                return ::org::hipparchus::complex::t_Quaternion::wrap_Object(result);
              }

              static PyObject *t_ApmQuaternion_getQuaternionDot(t_ApmQuaternion *self)
              {
                ::org::hipparchus::complex::Quaternion result((jobject) NULL);
                OBJ_CALL(result = self->object.getQuaternionDot());
                return ::org::hipparchus::complex::t_Quaternion::wrap_Object(result);
              }

              static PyObject *t_ApmQuaternion_hasRates(t_ApmQuaternion *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasRates());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_ApmQuaternion_setQ(t_ApmQuaternion *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setQ(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQ", args);
                return NULL;
              }

              static PyObject *t_ApmQuaternion_setQDot(t_ApmQuaternion *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setQDot(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQDot", args);
                return NULL;
              }

              static PyObject *t_ApmQuaternion_validate(t_ApmQuaternion *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(ApmQuaternion), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_ApmQuaternion_get__endpoints(t_ApmQuaternion *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_ApmQuaternion_get__quaternion(t_ApmQuaternion *self, void *data)
              {
                ::org::hipparchus::complex::Quaternion value((jobject) NULL);
                OBJ_CALL(value = self->object.getQuaternion());
                return ::org::hipparchus::complex::t_Quaternion::wrap_Object(value);
              }

              static PyObject *t_ApmQuaternion_get__quaternionDot(t_ApmQuaternion *self, void *data)
              {
                ::org::hipparchus::complex::Quaternion value((jobject) NULL);
                OBJ_CALL(value = self->object.getQuaternionDot());
                return ::org::hipparchus::complex::t_Quaternion::wrap_Object(value);
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
#include "org/hipparchus/optim/SimplePointChecker.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *SimplePointChecker::class$ = NULL;
      jmethodID *SimplePointChecker::mids$ = NULL;
      bool SimplePointChecker::live$ = false;

      jclass SimplePointChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/SimplePointChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_init$_01fb2c777e5def32] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_converged_0be2ff4627a3adb6] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/util/Pair;Lorg/hipparchus/util/Pair;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimplePointChecker::SimplePointChecker(jdouble a0, jdouble a1) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

      SimplePointChecker::SimplePointChecker(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_01fb2c777e5def32, a0, a1, a2)) {}

      jboolean SimplePointChecker::converged(jint a0, const ::org::hipparchus::util::Pair & a1, const ::org::hipparchus::util::Pair & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_0be2ff4627a3adb6], a0, a1.this$, a2.this$);
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
      static PyObject *t_SimplePointChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimplePointChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimplePointChecker_of_(t_SimplePointChecker *self, PyObject *args);
      static int t_SimplePointChecker_init_(t_SimplePointChecker *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimplePointChecker_converged(t_SimplePointChecker *self, PyObject *args);
      static PyObject *t_SimplePointChecker_get__parameters_(t_SimplePointChecker *self, void *data);
      static PyGetSetDef t_SimplePointChecker__fields_[] = {
        DECLARE_GET_FIELD(t_SimplePointChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimplePointChecker__methods_[] = {
        DECLARE_METHOD(t_SimplePointChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimplePointChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimplePointChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimplePointChecker, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimplePointChecker)[] = {
        { Py_tp_methods, t_SimplePointChecker__methods_ },
        { Py_tp_init, (void *) t_SimplePointChecker_init_ },
        { Py_tp_getset, t_SimplePointChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimplePointChecker)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::AbstractConvergenceChecker),
        NULL
      };

      DEFINE_TYPE(SimplePointChecker, t_SimplePointChecker, SimplePointChecker);
      PyObject *t_SimplePointChecker::wrap_Object(const SimplePointChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimplePointChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimplePointChecker *self = (t_SimplePointChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimplePointChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimplePointChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimplePointChecker *self = (t_SimplePointChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimplePointChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(SimplePointChecker), &PY_TYPE_DEF(SimplePointChecker), module, "SimplePointChecker", 0);
      }

      void t_SimplePointChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimplePointChecker), "class_", make_descriptor(SimplePointChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimplePointChecker), "wrapfn_", make_descriptor(t_SimplePointChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimplePointChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimplePointChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimplePointChecker::initializeClass, 1)))
          return NULL;
        return t_SimplePointChecker::wrap_Object(SimplePointChecker(((t_SimplePointChecker *) arg)->object.this$));
      }
      static PyObject *t_SimplePointChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimplePointChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimplePointChecker_of_(t_SimplePointChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SimplePointChecker_init_(t_SimplePointChecker *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            SimplePointChecker object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = SimplePointChecker(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            SimplePointChecker object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = SimplePointChecker(a0, a1, a2));
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

      static PyObject *t_SimplePointChecker_converged(t_SimplePointChecker *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::util::Pair a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::util::Pair a2((jobject) NULL);
        PyTypeObject **p2;
        jboolean result;

        if (!parseArgs(args, "IKK", ::org::hipparchus::util::Pair::initializeClass, ::org::hipparchus::util::Pair::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_Pair::parameters_, &a2, &p2, ::org::hipparchus::util::t_Pair::parameters_))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SimplePointChecker), (PyObject *) self, "converged", args, 2);
      }
      static PyObject *t_SimplePointChecker_get__parameters_(t_SimplePointChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AbstractFieldTimeInterpolator$InterpolationData.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/utils/ImmutableFieldTimeStampedCache.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractFieldTimeInterpolator$InterpolationData::class$ = NULL;
      jmethodID *AbstractFieldTimeInterpolator$InterpolationData::mids$ = NULL;
      bool AbstractFieldTimeInterpolator$InterpolationData::live$ = false;

      jclass AbstractFieldTimeInterpolator$InterpolationData::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractFieldTimeInterpolator$InterpolationData");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCachedSamples_821d9d6a73dea7a9] = env->getMethodID(cls, "getCachedSamples", "()Lorg/orekit/utils/ImmutableFieldTimeStampedCache;");
          mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getInterpolationDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getInterpolationDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getNeighborList_2afa36052df4765d] = env->getMethodID(cls, "getNeighborList", "()Ljava/util/List;");
          mids$[mid_getOne_eba8e72a22c984ac] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getZero_eba8e72a22c984ac] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCentralDate_c75237029429ec51] = env->getMethodID(cls, "getCentralDate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/time/FieldAbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::ImmutableFieldTimeStampedCache AbstractFieldTimeInterpolator$InterpolationData::getCachedSamples() const
      {
        return ::org::orekit::utils::ImmutableFieldTimeStampedCache(env->callObjectMethod(this$, mids$[mid_getCachedSamples_821d9d6a73dea7a9]));
      }

      ::org::hipparchus::Field AbstractFieldTimeInterpolator$InterpolationData::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
      }

      ::org::orekit::time::FieldAbsoluteDate AbstractFieldTimeInterpolator$InterpolationData::getInterpolationDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getInterpolationDate_51da00d5b8a3b5df]));
      }

      ::java::util::List AbstractFieldTimeInterpolator$InterpolationData::getNeighborList() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNeighborList_2afa36052df4765d]));
      }

      ::org::hipparchus::CalculusFieldElement AbstractFieldTimeInterpolator$InterpolationData::getOne() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOne_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement AbstractFieldTimeInterpolator$InterpolationData::getZero() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getZero_eba8e72a22c984ac]));
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
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_of_(t_AbstractFieldTimeInterpolator$InterpolationData *self, PyObject *args);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getCachedSamples(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getField(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getInterpolationDate(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getNeighborList(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getOne(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getZero(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__cachedSamples(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__field(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__interpolationDate(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__neighborList(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__one(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__zero(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__parameters_(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyGetSetDef t_AbstractFieldTimeInterpolator$InterpolationData__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, cachedSamples),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, field),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, interpolationDate),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, neighborList),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, one),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, zero),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldTimeInterpolator$InterpolationData__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getCachedSamples, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getField, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getInterpolationDate, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getNeighborList, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getOne, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getZero, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldTimeInterpolator$InterpolationData)[] = {
        { Py_tp_methods, t_AbstractFieldTimeInterpolator$InterpolationData__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractFieldTimeInterpolator$InterpolationData__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldTimeInterpolator$InterpolationData)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFieldTimeInterpolator$InterpolationData, t_AbstractFieldTimeInterpolator$InterpolationData, AbstractFieldTimeInterpolator$InterpolationData);
      PyObject *t_AbstractFieldTimeInterpolator$InterpolationData::wrap_Object(const AbstractFieldTimeInterpolator$InterpolationData& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_AbstractFieldTimeInterpolator$InterpolationData::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldTimeInterpolator$InterpolationData *self = (t_AbstractFieldTimeInterpolator$InterpolationData *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_AbstractFieldTimeInterpolator$InterpolationData::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_AbstractFieldTimeInterpolator$InterpolationData::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldTimeInterpolator$InterpolationData *self = (t_AbstractFieldTimeInterpolator$InterpolationData *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_AbstractFieldTimeInterpolator$InterpolationData::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData), &PY_TYPE_DEF(AbstractFieldTimeInterpolator$InterpolationData), module, "AbstractFieldTimeInterpolator$InterpolationData", 0);
      }

      void t_AbstractFieldTimeInterpolator$InterpolationData::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData), "class_", make_descriptor(AbstractFieldTimeInterpolator$InterpolationData::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData), "wrapfn_", make_descriptor(t_AbstractFieldTimeInterpolator$InterpolationData::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldTimeInterpolator$InterpolationData::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldTimeInterpolator$InterpolationData::wrap_Object(AbstractFieldTimeInterpolator$InterpolationData(((t_AbstractFieldTimeInterpolator$InterpolationData *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldTimeInterpolator$InterpolationData::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_of_(t_AbstractFieldTimeInterpolator$InterpolationData *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getCachedSamples(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::orekit::utils::ImmutableFieldTimeStampedCache result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedSamples());
        return ::org::orekit::utils::t_ImmutableFieldTimeStampedCache::wrap_Object(result, self->parameters[0], self->parameters[1]);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getField(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[1]);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getInterpolationDate(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getInterpolationDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[1]);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getNeighborList(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getNeighborList());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getOne(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getZero(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__parameters_(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__cachedSamples(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::orekit::utils::ImmutableFieldTimeStampedCache value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedSamples());
        return ::org::orekit::utils::t_ImmutableFieldTimeStampedCache::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__field(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__interpolationDate(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getInterpolationDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__neighborList(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeighborList());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__one(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__zero(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *ObservationType::class$ = NULL;
            jmethodID *ObservationType::mids$ = NULL;
            bool ObservationType::live$ = false;
            ObservationType *ObservationType::ANGLE_1 = NULL;
            ObservationType *ObservationType::ANGLE_2 = NULL;
            ObservationType *ObservationType::CARRIER_POWER = NULL;
            ObservationType *ObservationType::CLOCK_BIAS = NULL;
            ObservationType *ObservationType::CLOCK_DRIFT = NULL;
            ObservationType *ObservationType::DOPPLER_COUNT = NULL;
            ObservationType *ObservationType::DOPPLER_INSTANTANEOUS = NULL;
            ObservationType *ObservationType::DOPPLER_INTEGRATED = NULL;
            ObservationType *ObservationType::DOR = NULL;
            ObservationType *ObservationType::MAG = NULL;
            ObservationType *ObservationType::PC_N0 = NULL;
            ObservationType *ObservationType::PRESSURE = NULL;
            ObservationType *ObservationType::PR_N0 = NULL;
            ObservationType *ObservationType::RANGE = NULL;
            ObservationType *ObservationType::RCS = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_1 = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_2 = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_3 = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_4 = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_5 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_1 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_2 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_3 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_4 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_5 = NULL;
            ObservationType *ObservationType::RHUMIDITY = NULL;
            ObservationType *ObservationType::STEC = NULL;
            ObservationType *ObservationType::TEMPERATURE = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_1 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_2 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_3 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_4 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_5 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_1 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_2 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_3 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_4 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_5 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_1 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_2 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_3 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_4 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_5 = NULL;
            ObservationType *ObservationType::TROPO_DRY = NULL;
            ObservationType *ObservationType::TROPO_WET = NULL;
            ObservationType *ObservationType::VLBI_DELAY = NULL;

            jclass ObservationType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/ObservationType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_e72a71cd30355630] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/files/ccsds/ndm/tdm/ObservationsBlock;)Z");
                mids$[mid_rawToSI_f6cf436268177345] = env->getMethodID(cls, "rawToSI", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_siToRaw_f6cf436268177345] = env->getMethodID(cls, "siToRaw", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_valueOf_1479529000a26cf6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;");
                mids$[mid_values_c187ad6fd87ef334] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ANGLE_1 = new ObservationType(env->getStaticObjectField(cls, "ANGLE_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                ANGLE_2 = new ObservationType(env->getStaticObjectField(cls, "ANGLE_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                CARRIER_POWER = new ObservationType(env->getStaticObjectField(cls, "CARRIER_POWER", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                CLOCK_BIAS = new ObservationType(env->getStaticObjectField(cls, "CLOCK_BIAS", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                CLOCK_DRIFT = new ObservationType(env->getStaticObjectField(cls, "CLOCK_DRIFT", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                DOPPLER_COUNT = new ObservationType(env->getStaticObjectField(cls, "DOPPLER_COUNT", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                DOPPLER_INSTANTANEOUS = new ObservationType(env->getStaticObjectField(cls, "DOPPLER_INSTANTANEOUS", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                DOPPLER_INTEGRATED = new ObservationType(env->getStaticObjectField(cls, "DOPPLER_INTEGRATED", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                DOR = new ObservationType(env->getStaticObjectField(cls, "DOR", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                MAG = new ObservationType(env->getStaticObjectField(cls, "MAG", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                PC_N0 = new ObservationType(env->getStaticObjectField(cls, "PC_N0", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                PRESSURE = new ObservationType(env->getStaticObjectField(cls, "PRESSURE", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                PR_N0 = new ObservationType(env->getStaticObjectField(cls, "PR_N0", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RANGE = new ObservationType(env->getStaticObjectField(cls, "RANGE", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RCS = new ObservationType(env->getStaticObjectField(cls, "RCS", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_1 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_2 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_3 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_4 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_5 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_1 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_2 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_3 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_4 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_5 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RHUMIDITY = new ObservationType(env->getStaticObjectField(cls, "RHUMIDITY", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                STEC = new ObservationType(env->getStaticObjectField(cls, "STEC", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TEMPERATURE = new ObservationType(env->getStaticObjectField(cls, "TEMPERATURE", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_1 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_2 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_3 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_4 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_5 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_1 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_2 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_3 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_4 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_5 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_1 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_2 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_3 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_4 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_5 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TROPO_DRY = new ObservationType(env->getStaticObjectField(cls, "TROPO_DRY", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TROPO_WET = new ObservationType(env->getStaticObjectField(cls, "TROPO_WET", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                VLBI_DELAY = new ObservationType(env->getStaticObjectField(cls, "VLBI_DELAY", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean ObservationType::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a2, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a3, const ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock & a4) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_e72a71cd30355630], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$);
            }

            jdouble ObservationType::rawToSI(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) const
            {
              return env->callDoubleMethod(this$, mids$[mid_rawToSI_f6cf436268177345], a0.this$, a1.this$, a2.this$, a3);
            }

            jdouble ObservationType::siToRaw(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) const
            {
              return env->callDoubleMethod(this$, mids$[mid_siToRaw_f6cf436268177345], a0.this$, a1.this$, a2.this$, a3);
            }

            ObservationType ObservationType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ObservationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1479529000a26cf6], a0.this$));
            }

            JArray< ObservationType > ObservationType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ObservationType >(env->callStaticObjectMethod(cls, mids$[mid_values_c187ad6fd87ef334]));
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
          namespace tdm {
            static PyObject *t_ObservationType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ObservationType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ObservationType_of_(t_ObservationType *self, PyObject *args);
            static PyObject *t_ObservationType_process(t_ObservationType *self, PyObject *args);
            static PyObject *t_ObservationType_rawToSI(t_ObservationType *self, PyObject *args);
            static PyObject *t_ObservationType_siToRaw(t_ObservationType *self, PyObject *args);
            static PyObject *t_ObservationType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ObservationType_values(PyTypeObject *type);
            static PyObject *t_ObservationType_get__parameters_(t_ObservationType *self, void *data);
            static PyGetSetDef t_ObservationType__fields_[] = {
              DECLARE_GET_FIELD(t_ObservationType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ObservationType__methods_[] = {
              DECLARE_METHOD(t_ObservationType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ObservationType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ObservationType, of_, METH_VARARGS),
              DECLARE_METHOD(t_ObservationType, process, METH_VARARGS),
              DECLARE_METHOD(t_ObservationType, rawToSI, METH_VARARGS),
              DECLARE_METHOD(t_ObservationType, siToRaw, METH_VARARGS),
              DECLARE_METHOD(t_ObservationType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ObservationType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ObservationType)[] = {
              { Py_tp_methods, t_ObservationType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ObservationType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ObservationType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ObservationType, t_ObservationType, ObservationType);
            PyObject *t_ObservationType::wrap_Object(const ObservationType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ObservationType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ObservationType *self = (t_ObservationType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ObservationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ObservationType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ObservationType *self = (t_ObservationType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ObservationType::install(PyObject *module)
            {
              installType(&PY_TYPE(ObservationType), &PY_TYPE_DEF(ObservationType), module, "ObservationType", 0);
            }

            void t_ObservationType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "class_", make_descriptor(ObservationType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "wrapfn_", make_descriptor(t_ObservationType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "boxfn_", make_descriptor(boxObject));
              env->getClass(ObservationType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "ANGLE_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::ANGLE_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "ANGLE_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::ANGLE_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CARRIER_POWER", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CARRIER_POWER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CLOCK_BIAS", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CLOCK_BIAS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CLOCK_DRIFT", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CLOCK_DRIFT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DOPPLER_COUNT", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DOPPLER_COUNT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DOPPLER_INSTANTANEOUS", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DOPPLER_INSTANTANEOUS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DOPPLER_INTEGRATED", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DOPPLER_INTEGRATED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DOR", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "MAG", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::MAG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "PC_N0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::PC_N0)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "PRESSURE", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::PRESSURE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "PR_N0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::PR_N0)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RANGE", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RANGE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RCS", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RCS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RHUMIDITY", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RHUMIDITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "STEC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::STEC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TEMPERATURE", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TEMPERATURE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TROPO_DRY", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TROPO_DRY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TROPO_WET", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TROPO_WET)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "VLBI_DELAY", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::VLBI_DELAY)));
            }

            static PyObject *t_ObservationType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ObservationType::initializeClass, 1)))
                return NULL;
              return t_ObservationType::wrap_Object(ObservationType(((t_ObservationType *) arg)->object.this$));
            }
            static PyObject *t_ObservationType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ObservationType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ObservationType_of_(t_ObservationType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ObservationType_process(t_ObservationType *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a2((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a3((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock a4((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkkkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2, a3, a4));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_ObservationType_rawToSI(t_ObservationType *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "kkkD", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.rawToSI(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "rawToSI", args);
              return NULL;
            }

            static PyObject *t_ObservationType_siToRaw(t_ObservationType *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "kkkD", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.siToRaw(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "siToRaw", args);
              return NULL;
            }

            static PyObject *t_ObservationType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ObservationType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::ObservationType::valueOf(a0));
                return t_ObservationType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ObservationType_values(PyTypeObject *type)
            {
              JArray< ObservationType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::ObservationType::values());
              return JArray<jobject>(result.this$).wrap(t_ObservationType::wrap_jobject);
            }
            static PyObject *t_ObservationType_get__parameters_(t_ObservationType *self, void *data)
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
#include "java/text/DecimalFormat.h"
#include "java/lang/Number.h"
#include "java/lang/StringBuffer.h"
#include "java/text/ParsePosition.h"
#include "java/text/DecimalFormatSymbols.h"
#include "java/text/FieldPosition.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/util/Currency.h"
#include "java/lang/String.h"
#include "java/text/AttributedCharacterIterator.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *DecimalFormat::class$ = NULL;
    jmethodID *DecimalFormat::mids$ = NULL;
    bool DecimalFormat::live$ = false;

    jclass DecimalFormat::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/DecimalFormat");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_d8855ca43cc20c62] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/text/DecimalFormatSymbols;)V");
        mids$[mid_applyLocalizedPattern_d0bc48d5b00dc40c] = env->getMethodID(cls, "applyLocalizedPattern", "(Ljava/lang/String;)V");
        mids$[mid_applyPattern_d0bc48d5b00dc40c] = env->getMethodID(cls, "applyPattern", "(Ljava/lang/String;)V");
        mids$[mid_clone_4d26fd885228c716] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_format_71cdbf949acd3c79] = env->getMethodID(cls, "format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_format_f5c3717ad7292c63] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_format_1ad97cb6c82be27f] = env->getMethodID(cls, "format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_formatToCharacterIterator_9456d3ba5fac0c0f] = env->getMethodID(cls, "formatToCharacterIterator", "(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;");
        mids$[mid_getCurrency_7ca0ce948a4de82c] = env->getMethodID(cls, "getCurrency", "()Ljava/util/Currency;");
        mids$[mid_getDecimalFormatSymbols_140bef9b20a8cdf4] = env->getMethodID(cls, "getDecimalFormatSymbols", "()Ljava/text/DecimalFormatSymbols;");
        mids$[mid_getGroupingSize_570ce0828f81a2c1] = env->getMethodID(cls, "getGroupingSize", "()I");
        mids$[mid_getMaximumFractionDigits_570ce0828f81a2c1] = env->getMethodID(cls, "getMaximumFractionDigits", "()I");
        mids$[mid_getMaximumIntegerDigits_570ce0828f81a2c1] = env->getMethodID(cls, "getMaximumIntegerDigits", "()I");
        mids$[mid_getMinimumFractionDigits_570ce0828f81a2c1] = env->getMethodID(cls, "getMinimumFractionDigits", "()I");
        mids$[mid_getMinimumIntegerDigits_570ce0828f81a2c1] = env->getMethodID(cls, "getMinimumIntegerDigits", "()I");
        mids$[mid_getMultiplier_570ce0828f81a2c1] = env->getMethodID(cls, "getMultiplier", "()I");
        mids$[mid_getNegativePrefix_11b109bd155ca898] = env->getMethodID(cls, "getNegativePrefix", "()Ljava/lang/String;");
        mids$[mid_getNegativeSuffix_11b109bd155ca898] = env->getMethodID(cls, "getNegativeSuffix", "()Ljava/lang/String;");
        mids$[mid_getPositivePrefix_11b109bd155ca898] = env->getMethodID(cls, "getPositivePrefix", "()Ljava/lang/String;");
        mids$[mid_getPositiveSuffix_11b109bd155ca898] = env->getMethodID(cls, "getPositiveSuffix", "()Ljava/lang/String;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isDecimalSeparatorAlwaysShown_b108b35ef48e27bd] = env->getMethodID(cls, "isDecimalSeparatorAlwaysShown", "()Z");
        mids$[mid_isParseBigDecimal_b108b35ef48e27bd] = env->getMethodID(cls, "isParseBigDecimal", "()Z");
        mids$[mid_parse_0f2d9a00e2ec1df8] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;");
        mids$[mid_setCurrency_7f42074111826307] = env->getMethodID(cls, "setCurrency", "(Ljava/util/Currency;)V");
        mids$[mid_setDecimalFormatSymbols_81f137070597544b] = env->getMethodID(cls, "setDecimalFormatSymbols", "(Ljava/text/DecimalFormatSymbols;)V");
        mids$[mid_setDecimalSeparatorAlwaysShown_bd04c9335fb9e4cf] = env->getMethodID(cls, "setDecimalSeparatorAlwaysShown", "(Z)V");
        mids$[mid_setGroupingSize_99803b0791f320ff] = env->getMethodID(cls, "setGroupingSize", "(I)V");
        mids$[mid_setGroupingUsed_bd04c9335fb9e4cf] = env->getMethodID(cls, "setGroupingUsed", "(Z)V");
        mids$[mid_setMaximumFractionDigits_99803b0791f320ff] = env->getMethodID(cls, "setMaximumFractionDigits", "(I)V");
        mids$[mid_setMaximumIntegerDigits_99803b0791f320ff] = env->getMethodID(cls, "setMaximumIntegerDigits", "(I)V");
        mids$[mid_setMinimumFractionDigits_99803b0791f320ff] = env->getMethodID(cls, "setMinimumFractionDigits", "(I)V");
        mids$[mid_setMinimumIntegerDigits_99803b0791f320ff] = env->getMethodID(cls, "setMinimumIntegerDigits", "(I)V");
        mids$[mid_setMultiplier_99803b0791f320ff] = env->getMethodID(cls, "setMultiplier", "(I)V");
        mids$[mid_setNegativePrefix_d0bc48d5b00dc40c] = env->getMethodID(cls, "setNegativePrefix", "(Ljava/lang/String;)V");
        mids$[mid_setNegativeSuffix_d0bc48d5b00dc40c] = env->getMethodID(cls, "setNegativeSuffix", "(Ljava/lang/String;)V");
        mids$[mid_setParseBigDecimal_bd04c9335fb9e4cf] = env->getMethodID(cls, "setParseBigDecimal", "(Z)V");
        mids$[mid_setPositivePrefix_d0bc48d5b00dc40c] = env->getMethodID(cls, "setPositivePrefix", "(Ljava/lang/String;)V");
        mids$[mid_setPositiveSuffix_d0bc48d5b00dc40c] = env->getMethodID(cls, "setPositiveSuffix", "(Ljava/lang/String;)V");
        mids$[mid_toLocalizedPattern_11b109bd155ca898] = env->getMethodID(cls, "toLocalizedPattern", "()Ljava/lang/String;");
        mids$[mid_toPattern_11b109bd155ca898] = env->getMethodID(cls, "toPattern", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    DecimalFormat::DecimalFormat() : ::java::text::NumberFormat(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    DecimalFormat::DecimalFormat(const ::java::lang::String & a0) : ::java::text::NumberFormat(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    DecimalFormat::DecimalFormat(const ::java::lang::String & a0, const ::java::text::DecimalFormatSymbols & a1) : ::java::text::NumberFormat(env->newObject(initializeClass, &mids$, mid_init$_d8855ca43cc20c62, a0.this$, a1.this$)) {}

    void DecimalFormat::applyLocalizedPattern(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_applyLocalizedPattern_d0bc48d5b00dc40c], a0.this$);
    }

    void DecimalFormat::applyPattern(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_applyPattern_d0bc48d5b00dc40c], a0.this$);
    }

    ::java::lang::Object DecimalFormat::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_4d26fd885228c716]));
    }

    jboolean DecimalFormat::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::StringBuffer DecimalFormat::format(jdouble a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_71cdbf949acd3c79], a0, a1.this$, a2.this$));
    }

    ::java::lang::StringBuffer DecimalFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_f5c3717ad7292c63], a0.this$, a1.this$, a2.this$));
    }

    ::java::lang::StringBuffer DecimalFormat::format(jlong a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_1ad97cb6c82be27f], a0, a1.this$, a2.this$));
    }

    ::java::text::AttributedCharacterIterator DecimalFormat::formatToCharacterIterator(const ::java::lang::Object & a0) const
    {
      return ::java::text::AttributedCharacterIterator(env->callObjectMethod(this$, mids$[mid_formatToCharacterIterator_9456d3ba5fac0c0f], a0.this$));
    }

    ::java::util::Currency DecimalFormat::getCurrency() const
    {
      return ::java::util::Currency(env->callObjectMethod(this$, mids$[mid_getCurrency_7ca0ce948a4de82c]));
    }

    ::java::text::DecimalFormatSymbols DecimalFormat::getDecimalFormatSymbols() const
    {
      return ::java::text::DecimalFormatSymbols(env->callObjectMethod(this$, mids$[mid_getDecimalFormatSymbols_140bef9b20a8cdf4]));
    }

    jint DecimalFormat::getGroupingSize() const
    {
      return env->callIntMethod(this$, mids$[mid_getGroupingSize_570ce0828f81a2c1]);
    }

    jint DecimalFormat::getMaximumFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaximumFractionDigits_570ce0828f81a2c1]);
    }

    jint DecimalFormat::getMaximumIntegerDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaximumIntegerDigits_570ce0828f81a2c1]);
    }

    jint DecimalFormat::getMinimumFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinimumFractionDigits_570ce0828f81a2c1]);
    }

    jint DecimalFormat::getMinimumIntegerDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinimumIntegerDigits_570ce0828f81a2c1]);
    }

    jint DecimalFormat::getMultiplier() const
    {
      return env->callIntMethod(this$, mids$[mid_getMultiplier_570ce0828f81a2c1]);
    }

    ::java::lang::String DecimalFormat::getNegativePrefix() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNegativePrefix_11b109bd155ca898]));
    }

    ::java::lang::String DecimalFormat::getNegativeSuffix() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNegativeSuffix_11b109bd155ca898]));
    }

    ::java::lang::String DecimalFormat::getPositivePrefix() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPositivePrefix_11b109bd155ca898]));
    }

    ::java::lang::String DecimalFormat::getPositiveSuffix() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPositiveSuffix_11b109bd155ca898]));
    }

    jint DecimalFormat::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jboolean DecimalFormat::isDecimalSeparatorAlwaysShown() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDecimalSeparatorAlwaysShown_b108b35ef48e27bd]);
    }

    jboolean DecimalFormat::isParseBigDecimal() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isParseBigDecimal_b108b35ef48e27bd]);
    }

    ::java::lang::Number DecimalFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
    {
      return ::java::lang::Number(env->callObjectMethod(this$, mids$[mid_parse_0f2d9a00e2ec1df8], a0.this$, a1.this$));
    }

    void DecimalFormat::setCurrency(const ::java::util::Currency & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setCurrency_7f42074111826307], a0.this$);
    }

    void DecimalFormat::setDecimalFormatSymbols(const ::java::text::DecimalFormatSymbols & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDecimalFormatSymbols_81f137070597544b], a0.this$);
    }

    void DecimalFormat::setDecimalSeparatorAlwaysShown(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDecimalSeparatorAlwaysShown_bd04c9335fb9e4cf], a0);
    }

    void DecimalFormat::setGroupingSize(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setGroupingSize_99803b0791f320ff], a0);
    }

    void DecimalFormat::setGroupingUsed(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setGroupingUsed_bd04c9335fb9e4cf], a0);
    }

    void DecimalFormat::setMaximumFractionDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaximumFractionDigits_99803b0791f320ff], a0);
    }

    void DecimalFormat::setMaximumIntegerDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaximumIntegerDigits_99803b0791f320ff], a0);
    }

    void DecimalFormat::setMinimumFractionDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinimumFractionDigits_99803b0791f320ff], a0);
    }

    void DecimalFormat::setMinimumIntegerDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinimumIntegerDigits_99803b0791f320ff], a0);
    }

    void DecimalFormat::setMultiplier(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMultiplier_99803b0791f320ff], a0);
    }

    void DecimalFormat::setNegativePrefix(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setNegativePrefix_d0bc48d5b00dc40c], a0.this$);
    }

    void DecimalFormat::setNegativeSuffix(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setNegativeSuffix_d0bc48d5b00dc40c], a0.this$);
    }

    void DecimalFormat::setParseBigDecimal(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setParseBigDecimal_bd04c9335fb9e4cf], a0);
    }

    void DecimalFormat::setPositivePrefix(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPositivePrefix_d0bc48d5b00dc40c], a0.this$);
    }

    void DecimalFormat::setPositiveSuffix(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPositiveSuffix_d0bc48d5b00dc40c], a0.this$);
    }

    ::java::lang::String DecimalFormat::toLocalizedPattern() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toLocalizedPattern_11b109bd155ca898]));
    }

    ::java::lang::String DecimalFormat::toPattern() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toPattern_11b109bd155ca898]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_DecimalFormat_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_DecimalFormat_instance_(PyTypeObject *type, PyObject *arg);
    static int t_DecimalFormat_init_(t_DecimalFormat *self, PyObject *args, PyObject *kwds);
    static PyObject *t_DecimalFormat_applyLocalizedPattern(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_applyPattern(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_clone(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_equals(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_format(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_formatToCharacterIterator(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getCurrency(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getDecimalFormatSymbols(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getGroupingSize(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getMaximumFractionDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getMaximumIntegerDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getMinimumFractionDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getMinimumIntegerDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getMultiplier(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getNegativePrefix(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getNegativeSuffix(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getPositivePrefix(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getPositiveSuffix(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_hashCode(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_isDecimalSeparatorAlwaysShown(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_isParseBigDecimal(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_parse(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setCurrency(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setDecimalFormatSymbols(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setDecimalSeparatorAlwaysShown(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setGroupingSize(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setGroupingUsed(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMaximumFractionDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMaximumIntegerDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMinimumFractionDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMinimumIntegerDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMultiplier(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setNegativePrefix(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setNegativeSuffix(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setParseBigDecimal(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setPositivePrefix(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setPositiveSuffix(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_toLocalizedPattern(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_toPattern(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_get__currency(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__currency(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__decimalFormatSymbols(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__decimalFormatSymbols(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__decimalSeparatorAlwaysShown(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__decimalSeparatorAlwaysShown(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__groupingSize(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__groupingSize(t_DecimalFormat *self, PyObject *arg, void *data);
    static int t_DecimalFormat_set__groupingUsed(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__maximumFractionDigits(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__maximumFractionDigits(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__maximumIntegerDigits(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__maximumIntegerDigits(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__minimumFractionDigits(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__minimumFractionDigits(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__minimumIntegerDigits(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__minimumIntegerDigits(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__multiplier(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__multiplier(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__negativePrefix(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__negativePrefix(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__negativeSuffix(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__negativeSuffix(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__parseBigDecimal(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__parseBigDecimal(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__positivePrefix(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__positivePrefix(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__positiveSuffix(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__positiveSuffix(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyGetSetDef t_DecimalFormat__fields_[] = {
      DECLARE_GETSET_FIELD(t_DecimalFormat, currency),
      DECLARE_GETSET_FIELD(t_DecimalFormat, decimalFormatSymbols),
      DECLARE_GETSET_FIELD(t_DecimalFormat, decimalSeparatorAlwaysShown),
      DECLARE_GETSET_FIELD(t_DecimalFormat, groupingSize),
      DECLARE_SET_FIELD(t_DecimalFormat, groupingUsed),
      DECLARE_GETSET_FIELD(t_DecimalFormat, maximumFractionDigits),
      DECLARE_GETSET_FIELD(t_DecimalFormat, maximumIntegerDigits),
      DECLARE_GETSET_FIELD(t_DecimalFormat, minimumFractionDigits),
      DECLARE_GETSET_FIELD(t_DecimalFormat, minimumIntegerDigits),
      DECLARE_GETSET_FIELD(t_DecimalFormat, multiplier),
      DECLARE_GETSET_FIELD(t_DecimalFormat, negativePrefix),
      DECLARE_GETSET_FIELD(t_DecimalFormat, negativeSuffix),
      DECLARE_GETSET_FIELD(t_DecimalFormat, parseBigDecimal),
      DECLARE_GETSET_FIELD(t_DecimalFormat, positivePrefix),
      DECLARE_GETSET_FIELD(t_DecimalFormat, positiveSuffix),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_DecimalFormat__methods_[] = {
      DECLARE_METHOD(t_DecimalFormat, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormat, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormat, applyLocalizedPattern, METH_O),
      DECLARE_METHOD(t_DecimalFormat, applyPattern, METH_O),
      DECLARE_METHOD(t_DecimalFormat, clone, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, equals, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, format, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, formatToCharacterIterator, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getCurrency, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getDecimalFormatSymbols, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getGroupingSize, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getMaximumFractionDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getMaximumIntegerDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getMinimumFractionDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getMinimumIntegerDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getMultiplier, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getNegativePrefix, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getNegativeSuffix, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getPositivePrefix, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getPositiveSuffix, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, isDecimalSeparatorAlwaysShown, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, isParseBigDecimal, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, parse, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setCurrency, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setDecimalFormatSymbols, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setDecimalSeparatorAlwaysShown, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setGroupingSize, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setGroupingUsed, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMaximumFractionDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMaximumIntegerDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMinimumFractionDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMinimumIntegerDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMultiplier, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setNegativePrefix, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setNegativeSuffix, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setParseBigDecimal, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setPositivePrefix, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setPositiveSuffix, METH_O),
      DECLARE_METHOD(t_DecimalFormat, toLocalizedPattern, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, toPattern, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(DecimalFormat)[] = {
      { Py_tp_methods, t_DecimalFormat__methods_ },
      { Py_tp_init, (void *) t_DecimalFormat_init_ },
      { Py_tp_getset, t_DecimalFormat__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(DecimalFormat)[] = {
      &PY_TYPE_DEF(::java::text::NumberFormat),
      NULL
    };

    DEFINE_TYPE(DecimalFormat, t_DecimalFormat, DecimalFormat);

    void t_DecimalFormat::install(PyObject *module)
    {
      installType(&PY_TYPE(DecimalFormat), &PY_TYPE_DEF(DecimalFormat), module, "DecimalFormat", 0);
    }

    void t_DecimalFormat::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormat), "class_", make_descriptor(DecimalFormat::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormat), "wrapfn_", make_descriptor(t_DecimalFormat::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormat), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_DecimalFormat_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, DecimalFormat::initializeClass, 1)))
        return NULL;
      return t_DecimalFormat::wrap_Object(DecimalFormat(((t_DecimalFormat *) arg)->object.this$));
    }
    static PyObject *t_DecimalFormat_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, DecimalFormat::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_DecimalFormat_init_(t_DecimalFormat *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          DecimalFormat object((jobject) NULL);

          INT_CALL(object = DecimalFormat());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          DecimalFormat object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = DecimalFormat(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::text::DecimalFormatSymbols a1((jobject) NULL);
          DecimalFormat object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::text::DecimalFormatSymbols::initializeClass, &a0, &a1))
          {
            INT_CALL(object = DecimalFormat(a0, a1));
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

    static PyObject *t_DecimalFormat_applyLocalizedPattern(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.applyLocalizedPattern(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "applyLocalizedPattern", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_applyPattern(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.applyPattern(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "applyPattern", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_clone(t_DecimalFormat *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.clone());
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "clone", args, 2);
    }

    static PyObject *t_DecimalFormat_equals(t_DecimalFormat *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_DecimalFormat_format(t_DecimalFormat *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 3:
        {
          jdouble a0;
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Dkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "okk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jlong a0;
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Jkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "format", args, 2);
    }

    static PyObject *t_DecimalFormat_formatToCharacterIterator(t_DecimalFormat *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::text::AttributedCharacterIterator result((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.formatToCharacterIterator(a0));
        return ::java::text::t_AttributedCharacterIterator::wrap_Object(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "formatToCharacterIterator", args, 2);
    }

    static PyObject *t_DecimalFormat_getCurrency(t_DecimalFormat *self, PyObject *args)
    {
      ::java::util::Currency result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getCurrency());
        return ::java::util::t_Currency::wrap_Object(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getCurrency", args, 2);
    }

    static PyObject *t_DecimalFormat_getDecimalFormatSymbols(t_DecimalFormat *self)
    {
      ::java::text::DecimalFormatSymbols result((jobject) NULL);
      OBJ_CALL(result = self->object.getDecimalFormatSymbols());
      return ::java::text::t_DecimalFormatSymbols::wrap_Object(result);
    }

    static PyObject *t_DecimalFormat_getGroupingSize(t_DecimalFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getGroupingSize());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_DecimalFormat_getMaximumFractionDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getMaximumFractionDigits());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getMaximumFractionDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_getMaximumIntegerDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getMaximumIntegerDigits());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getMaximumIntegerDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_getMinimumFractionDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getMinimumFractionDigits());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getMinimumFractionDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_getMinimumIntegerDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getMinimumIntegerDigits());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getMinimumIntegerDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_getMultiplier(t_DecimalFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMultiplier());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_DecimalFormat_getNegativePrefix(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getNegativePrefix());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_getNegativeSuffix(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getNegativeSuffix());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_getPositivePrefix(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPositivePrefix());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_getPositiveSuffix(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPositiveSuffix());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_hashCode(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_DecimalFormat_isDecimalSeparatorAlwaysShown(t_DecimalFormat *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isDecimalSeparatorAlwaysShown());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_DecimalFormat_isParseBigDecimal(t_DecimalFormat *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isParseBigDecimal());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_DecimalFormat_parse(t_DecimalFormat *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::text::ParsePosition a1((jobject) NULL);
      ::java::lang::Number result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.parse(a0, a1));
        return ::java::lang::t_Number::wrap_Object(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "parse", args, 2);
    }

    static PyObject *t_DecimalFormat_setCurrency(t_DecimalFormat *self, PyObject *args)
    {
      ::java::util::Currency a0((jobject) NULL);

      if (!parseArgs(args, "k", ::java::util::Currency::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setCurrency(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setCurrency", args, 2);
    }

    static PyObject *t_DecimalFormat_setDecimalFormatSymbols(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::text::DecimalFormatSymbols a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::text::DecimalFormatSymbols::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setDecimalFormatSymbols(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDecimalFormatSymbols", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setDecimalSeparatorAlwaysShown(t_DecimalFormat *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setDecimalSeparatorAlwaysShown(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDecimalSeparatorAlwaysShown", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setGroupingSize(t_DecimalFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setGroupingSize(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setGroupingSize", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setGroupingUsed(t_DecimalFormat *self, PyObject *args)
    {
      jboolean a0;

      if (!parseArgs(args, "Z", &a0))
      {
        OBJ_CALL(self->object.setGroupingUsed(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setGroupingUsed", args, 2);
    }

    static PyObject *t_DecimalFormat_setMaximumFractionDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setMaximumFractionDigits(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setMaximumFractionDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_setMaximumIntegerDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setMaximumIntegerDigits(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setMaximumIntegerDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_setMinimumFractionDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setMinimumFractionDigits(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setMinimumFractionDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_setMinimumIntegerDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setMinimumIntegerDigits(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setMinimumIntegerDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_setMultiplier(t_DecimalFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMultiplier(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMultiplier", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setNegativePrefix(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setNegativePrefix(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setNegativePrefix", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setNegativeSuffix(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setNegativeSuffix(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setNegativeSuffix", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setParseBigDecimal(t_DecimalFormat *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setParseBigDecimal(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setParseBigDecimal", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setPositivePrefix(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setPositivePrefix(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPositivePrefix", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setPositiveSuffix(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setPositiveSuffix(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPositiveSuffix", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_toLocalizedPattern(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toLocalizedPattern());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_toPattern(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toPattern());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_get__currency(t_DecimalFormat *self, void *data)
    {
      ::java::util::Currency value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(value);
    }
    static int t_DecimalFormat_set__currency(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::util::Currency value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &value))
        {
          INT_CALL(self->object.setCurrency(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "currency", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__decimalFormatSymbols(t_DecimalFormat *self, void *data)
    {
      ::java::text::DecimalFormatSymbols value((jobject) NULL);
      OBJ_CALL(value = self->object.getDecimalFormatSymbols());
      return ::java::text::t_DecimalFormatSymbols::wrap_Object(value);
    }
    static int t_DecimalFormat_set__decimalFormatSymbols(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::text::DecimalFormatSymbols value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::text::DecimalFormatSymbols::initializeClass, &value))
        {
          INT_CALL(self->object.setDecimalFormatSymbols(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "decimalFormatSymbols", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__decimalSeparatorAlwaysShown(t_DecimalFormat *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isDecimalSeparatorAlwaysShown());
      Py_RETURN_BOOL(value);
    }
    static int t_DecimalFormat_set__decimalSeparatorAlwaysShown(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setDecimalSeparatorAlwaysShown(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "decimalSeparatorAlwaysShown", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__groupingSize(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getGroupingSize());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__groupingSize(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setGroupingSize(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "groupingSize", arg);
      return -1;
    }

    static int t_DecimalFormat_set__groupingUsed(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setGroupingUsed(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "groupingUsed", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__maximumFractionDigits(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMaximumFractionDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__maximumFractionDigits(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMaximumFractionDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "maximumFractionDigits", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__maximumIntegerDigits(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMaximumIntegerDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__maximumIntegerDigits(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMaximumIntegerDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "maximumIntegerDigits", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__minimumFractionDigits(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinimumFractionDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__minimumFractionDigits(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinimumFractionDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minimumFractionDigits", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__minimumIntegerDigits(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinimumIntegerDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__minimumIntegerDigits(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinimumIntegerDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minimumIntegerDigits", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__multiplier(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMultiplier());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__multiplier(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMultiplier(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "multiplier", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__negativePrefix(t_DecimalFormat *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getNegativePrefix());
      return j2p(value);
    }
    static int t_DecimalFormat_set__negativePrefix(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setNegativePrefix(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "negativePrefix", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__negativeSuffix(t_DecimalFormat *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getNegativeSuffix());
      return j2p(value);
    }
    static int t_DecimalFormat_set__negativeSuffix(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setNegativeSuffix(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "negativeSuffix", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__parseBigDecimal(t_DecimalFormat *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isParseBigDecimal());
      Py_RETURN_BOOL(value);
    }
    static int t_DecimalFormat_set__parseBigDecimal(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setParseBigDecimal(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "parseBigDecimal", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__positivePrefix(t_DecimalFormat *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPositivePrefix());
      return j2p(value);
    }
    static int t_DecimalFormat_set__positivePrefix(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setPositivePrefix(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "positivePrefix", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__positiveSuffix(t_DecimalFormat *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPositiveSuffix());
      return j2p(value);
    }
    static int t_DecimalFormat_set__positiveSuffix(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setPositiveSuffix(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "positiveSuffix", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldKeplerianAnomalyUtility.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldKeplerianAnomalyUtility::class$ = NULL;
      jmethodID *FieldKeplerianAnomalyUtility::mids$ = NULL;
      bool FieldKeplerianAnomalyUtility::live$ = false;

      jclass FieldKeplerianAnomalyUtility::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldKeplerianAnomalyUtility");

          mids$ = new jmethodID[max_mid];
          mids$[mid_ellipticEccentricToMean_6746cc1cd9210d54] = env->getStaticMethodID(cls, "ellipticEccentricToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticEccentricToTrue_6746cc1cd9210d54] = env->getStaticMethodID(cls, "ellipticEccentricToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticMeanToEccentric_6746cc1cd9210d54] = env->getStaticMethodID(cls, "ellipticMeanToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticMeanToTrue_6746cc1cd9210d54] = env->getStaticMethodID(cls, "ellipticMeanToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticTrueToEccentric_6746cc1cd9210d54] = env->getStaticMethodID(cls, "ellipticTrueToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticTrueToMean_6746cc1cd9210d54] = env->getStaticMethodID(cls, "ellipticTrueToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicEccentricToMean_6746cc1cd9210d54] = env->getStaticMethodID(cls, "hyperbolicEccentricToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicEccentricToTrue_6746cc1cd9210d54] = env->getStaticMethodID(cls, "hyperbolicEccentricToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicMeanToEccentric_6746cc1cd9210d54] = env->getStaticMethodID(cls, "hyperbolicMeanToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicMeanToTrue_6746cc1cd9210d54] = env->getStaticMethodID(cls, "hyperbolicMeanToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicTrueToEccentric_6746cc1cd9210d54] = env->getStaticMethodID(cls, "hyperbolicTrueToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicTrueToMean_6746cc1cd9210d54] = env->getStaticMethodID(cls, "hyperbolicTrueToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticEccentricToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticEccentricToMean_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticEccentricToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticEccentricToTrue_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticMeanToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticMeanToEccentric_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticMeanToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticMeanToTrue_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticTrueToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticTrueToEccentric_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticTrueToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticTrueToMean_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicEccentricToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicEccentricToMean_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicEccentricToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicEccentricToTrue_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicMeanToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicMeanToEccentric_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicMeanToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicMeanToTrue_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicTrueToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicTrueToEccentric_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicTrueToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicTrueToMean_6746cc1cd9210d54], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_FieldKeplerianAnomalyUtility_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldKeplerianAnomalyUtility_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticEccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticEccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticMeanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticMeanToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticTrueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticTrueToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicEccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicEccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicMeanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicMeanToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicTrueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicTrueToMean(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_FieldKeplerianAnomalyUtility__methods_[] = {
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticEccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticEccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticMeanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticMeanToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticTrueToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticTrueToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicEccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicEccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicMeanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicMeanToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicTrueToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicTrueToMean, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldKeplerianAnomalyUtility)[] = {
        { Py_tp_methods, t_FieldKeplerianAnomalyUtility__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldKeplerianAnomalyUtility)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldKeplerianAnomalyUtility, t_FieldKeplerianAnomalyUtility, FieldKeplerianAnomalyUtility);

      void t_FieldKeplerianAnomalyUtility::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldKeplerianAnomalyUtility), &PY_TYPE_DEF(FieldKeplerianAnomalyUtility), module, "FieldKeplerianAnomalyUtility", 0);
      }

      void t_FieldKeplerianAnomalyUtility::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianAnomalyUtility), "class_", make_descriptor(FieldKeplerianAnomalyUtility::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianAnomalyUtility), "wrapfn_", make_descriptor(t_FieldKeplerianAnomalyUtility::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianAnomalyUtility), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldKeplerianAnomalyUtility::initializeClass, 1)))
          return NULL;
        return t_FieldKeplerianAnomalyUtility::wrap_Object(FieldKeplerianAnomalyUtility(((t_FieldKeplerianAnomalyUtility *) arg)->object.this$));
      }
      static PyObject *t_FieldKeplerianAnomalyUtility_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldKeplerianAnomalyUtility::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticEccentricToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticEccentricToMean(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticEccentricToMean", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticEccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticEccentricToTrue(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticEccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticMeanToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticMeanToEccentric(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticMeanToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticMeanToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticMeanToTrue(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticMeanToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticTrueToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticTrueToEccentric(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticTrueToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticTrueToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticTrueToMean(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticTrueToMean", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicEccentricToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicEccentricToMean(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicEccentricToMean", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicEccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicEccentricToTrue(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicEccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicMeanToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicMeanToEccentric(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicMeanToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicMeanToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicMeanToTrue(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicMeanToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicTrueToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicTrueToEccentric(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicTrueToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicTrueToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicTrueToMean(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicTrueToMean", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParameters.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalParametersKey::class$ = NULL;
            jmethodID *AdditionalParametersKey::mids$ = NULL;
            bool AdditionalParametersKey::live$ = false;
            AdditionalParametersKey *AdditionalParametersKey::APOAPSIS_ALTITUDE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_ALONG_OEB_INT = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_ALONG_OEB_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_ALONG_OEB_MIN = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_DRG = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_PC = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_PC_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_PC_MIN = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_SRP = NULL;
            AdditionalParametersKey *AdditionalParametersKey::CD_AREA_OVER_MASS = NULL;
            AdditionalParametersKey *AdditionalParametersKey::COMMENT = NULL;
            AdditionalParametersKey *AdditionalParametersKey::COV_CONFIDENCE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::COV_CONFIDENCE_METHOD = NULL;
            AdditionalParametersKey *AdditionalParametersKey::CR_AREA_OVER_MASS = NULL;
            AdditionalParametersKey *AdditionalParametersKey::HBR = NULL;
            AdditionalParametersKey *AdditionalParametersKey::INCLINATION = NULL;
            AdditionalParametersKey *AdditionalParametersKey::MASS = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_INT = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_MIN = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_PARENT_FRAME = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_PARENT_FRAME_EPOCH = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_Q1 = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_Q2 = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_Q3 = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_QC = NULL;
            AdditionalParametersKey *AdditionalParametersKey::PERIAPSIS_ALTITUDE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::RCS = NULL;
            AdditionalParametersKey *AdditionalParametersKey::RCS_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::RCS_MIN = NULL;
            AdditionalParametersKey *AdditionalParametersKey::REFLECTANCE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::SEDR = NULL;
            AdditionalParametersKey *AdditionalParametersKey::THRUST_ACCELERATION = NULL;
            AdditionalParametersKey *AdditionalParametersKey::VM_ABSOLUTE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::VM_APPARENT = NULL;
            AdditionalParametersKey *AdditionalParametersKey::VM_APPARENT_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::VM_APPARENT_MIN = NULL;

            jclass AdditionalParametersKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_09b7f0115d6b12b9] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;)Z");
                mids$[mid_valueOf_f32bcbc2d591ad53] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;");
                mids$[mid_values_a6324c8893c479eb] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                APOAPSIS_ALTITUDE = new AdditionalParametersKey(env->getStaticObjectField(cls, "APOAPSIS_ALTITUDE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_ALONG_OEB_INT = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_INT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_ALONG_OEB_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_ALONG_OEB_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_DRG = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_PC = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_PC", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_PC_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_PC_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_PC_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_PC_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_SRP = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                CD_AREA_OVER_MASS = new AdditionalParametersKey(env->getStaticObjectField(cls, "CD_AREA_OVER_MASS", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                COMMENT = new AdditionalParametersKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                COV_CONFIDENCE = new AdditionalParametersKey(env->getStaticObjectField(cls, "COV_CONFIDENCE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                COV_CONFIDENCE_METHOD = new AdditionalParametersKey(env->getStaticObjectField(cls, "COV_CONFIDENCE_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                CR_AREA_OVER_MASS = new AdditionalParametersKey(env->getStaticObjectField(cls, "CR_AREA_OVER_MASS", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                HBR = new AdditionalParametersKey(env->getStaticObjectField(cls, "HBR", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                INCLINATION = new AdditionalParametersKey(env->getStaticObjectField(cls, "INCLINATION", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                MASS = new AdditionalParametersKey(env->getStaticObjectField(cls, "MASS", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_INT = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_INT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_PARENT_FRAME = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_PARENT_FRAME", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_PARENT_FRAME_EPOCH = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_PARENT_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_Q1 = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_Q1", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_Q2 = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_Q2", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_Q3 = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_Q3", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_QC = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_QC", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                PERIAPSIS_ALTITUDE = new AdditionalParametersKey(env->getStaticObjectField(cls, "PERIAPSIS_ALTITUDE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                RCS = new AdditionalParametersKey(env->getStaticObjectField(cls, "RCS", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                RCS_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "RCS_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                RCS_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "RCS_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                REFLECTANCE = new AdditionalParametersKey(env->getStaticObjectField(cls, "REFLECTANCE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                SEDR = new AdditionalParametersKey(env->getStaticObjectField(cls, "SEDR", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                THRUST_ACCELERATION = new AdditionalParametersKey(env->getStaticObjectField(cls, "THRUST_ACCELERATION", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                VM_ABSOLUTE = new AdditionalParametersKey(env->getStaticObjectField(cls, "VM_ABSOLUTE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                VM_APPARENT = new AdditionalParametersKey(env->getStaticObjectField(cls, "VM_APPARENT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                VM_APPARENT_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "VM_APPARENT_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                VM_APPARENT_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "VM_APPARENT_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AdditionalParametersKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_09b7f0115d6b12b9], a0.this$, a1.this$, a2.this$);
            }

            AdditionalParametersKey AdditionalParametersKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AdditionalParametersKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f32bcbc2d591ad53], a0.this$));
            }

            JArray< AdditionalParametersKey > AdditionalParametersKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AdditionalParametersKey >(env->callStaticObjectMethod(cls, mids$[mid_values_a6324c8893c479eb]));
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
            static PyObject *t_AdditionalParametersKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalParametersKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalParametersKey_of_(t_AdditionalParametersKey *self, PyObject *args);
            static PyObject *t_AdditionalParametersKey_process(t_AdditionalParametersKey *self, PyObject *args);
            static PyObject *t_AdditionalParametersKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AdditionalParametersKey_values(PyTypeObject *type);
            static PyObject *t_AdditionalParametersKey_get__parameters_(t_AdditionalParametersKey *self, void *data);
            static PyGetSetDef t_AdditionalParametersKey__fields_[] = {
              DECLARE_GET_FIELD(t_AdditionalParametersKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdditionalParametersKey__methods_[] = {
              DECLARE_METHOD(t_AdditionalParametersKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParametersKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParametersKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdditionalParametersKey, process, METH_VARARGS),
              DECLARE_METHOD(t_AdditionalParametersKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParametersKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalParametersKey)[] = {
              { Py_tp_methods, t_AdditionalParametersKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdditionalParametersKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalParametersKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AdditionalParametersKey, t_AdditionalParametersKey, AdditionalParametersKey);
            PyObject *t_AdditionalParametersKey::wrap_Object(const AdditionalParametersKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdditionalParametersKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdditionalParametersKey *self = (t_AdditionalParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AdditionalParametersKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdditionalParametersKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdditionalParametersKey *self = (t_AdditionalParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AdditionalParametersKey::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalParametersKey), &PY_TYPE_DEF(AdditionalParametersKey), module, "AdditionalParametersKey", 0);
            }

            void t_AdditionalParametersKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "class_", make_descriptor(AdditionalParametersKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "wrapfn_", make_descriptor(t_AdditionalParametersKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(AdditionalParametersKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "APOAPSIS_ALTITUDE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::APOAPSIS_ALTITUDE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_ALONG_OEB_INT", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_ALONG_OEB_INT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_ALONG_OEB_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_ALONG_OEB_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_ALONG_OEB_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_ALONG_OEB_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_DRG", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_PC", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_PC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_PC_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_PC_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_PC_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_PC_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_SRP", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "CD_AREA_OVER_MASS", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::CD_AREA_OVER_MASS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "COMMENT", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "COV_CONFIDENCE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::COV_CONFIDENCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "COV_CONFIDENCE_METHOD", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::COV_CONFIDENCE_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "CR_AREA_OVER_MASS", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::CR_AREA_OVER_MASS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "HBR", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::HBR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "INCLINATION", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::INCLINATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "MASS", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::MASS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_INT", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_INT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_PARENT_FRAME", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_PARENT_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_PARENT_FRAME_EPOCH", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_PARENT_FRAME_EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_Q1", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_Q1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_Q2", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_Q2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_Q3", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_Q3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_QC", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_QC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "PERIAPSIS_ALTITUDE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::PERIAPSIS_ALTITUDE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "RCS", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::RCS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "RCS_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::RCS_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "RCS_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::RCS_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "REFLECTANCE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::REFLECTANCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "SEDR", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::SEDR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "THRUST_ACCELERATION", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::THRUST_ACCELERATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "VM_ABSOLUTE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::VM_ABSOLUTE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "VM_APPARENT", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::VM_APPARENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "VM_APPARENT_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::VM_APPARENT_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "VM_APPARENT_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::VM_APPARENT_MIN)));
            }

            static PyObject *t_AdditionalParametersKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalParametersKey::initializeClass, 1)))
                return NULL;
              return t_AdditionalParametersKey::wrap_Object(AdditionalParametersKey(((t_AdditionalParametersKey *) arg)->object.this$));
            }
            static PyObject *t_AdditionalParametersKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalParametersKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdditionalParametersKey_of_(t_AdditionalParametersKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdditionalParametersKey_process(t_AdditionalParametersKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_AdditionalParametersKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AdditionalParametersKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AdditionalParametersKey::valueOf(a0));
                return t_AdditionalParametersKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AdditionalParametersKey_values(PyTypeObject *type)
            {
              JArray< AdditionalParametersKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AdditionalParametersKey::values());
              return JArray<jobject>(result.this$).wrap(t_AdditionalParametersKey::wrap_jobject);
            }
            static PyObject *t_AdditionalParametersKey_get__parameters_(t_AdditionalParametersKey *self, void *data)
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
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/EquationsMapper.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/SecondaryODE.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ExpandableODE::class$ = NULL;
      jmethodID *ExpandableODE::mids$ = NULL;
      bool ExpandableODE::live$ = false;

      jclass ExpandableODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ExpandableODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0b79d008bdba5ce0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/OrdinaryDifferentialEquation;)V");
          mids$[mid_addSecondaryEquations_231f49c6b5a21e64] = env->getMethodID(cls, "addSecondaryEquations", "(Lorg/hipparchus/ode/SecondaryODE;)I");
          mids$[mid_computeDerivatives_125ce48de7dbfde5] = env->getMethodID(cls, "computeDerivatives", "(D[D)[D");
          mids$[mid_getMapper_b352b1a7f73df8de] = env->getMethodID(cls, "getMapper", "()Lorg/hipparchus/ode/EquationsMapper;");
          mids$[mid_getPrimary_af746d446210838e] = env->getMethodID(cls, "getPrimary", "()Lorg/hipparchus/ode/OrdinaryDifferentialEquation;");
          mids$[mid_init_9a885fd893969c04] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEState;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ExpandableODE::ExpandableODE(const ::org::hipparchus::ode::OrdinaryDifferentialEquation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0b79d008bdba5ce0, a0.this$)) {}

      jint ExpandableODE::addSecondaryEquations(const ::org::hipparchus::ode::SecondaryODE & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_addSecondaryEquations_231f49c6b5a21e64], a0.this$);
      }

      JArray< jdouble > ExpandableODE::computeDerivatives(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_125ce48de7dbfde5], a0, a1.this$));
      }

      ::org::hipparchus::ode::EquationsMapper ExpandableODE::getMapper() const
      {
        return ::org::hipparchus::ode::EquationsMapper(env->callObjectMethod(this$, mids$[mid_getMapper_b352b1a7f73df8de]));
      }

      ::org::hipparchus::ode::OrdinaryDifferentialEquation ExpandableODE::getPrimary() const
      {
        return ::org::hipparchus::ode::OrdinaryDifferentialEquation(env->callObjectMethod(this$, mids$[mid_getPrimary_af746d446210838e]));
      }

      void ExpandableODE::init(const ::org::hipparchus::ode::ODEState & a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_9a885fd893969c04], a0.this$, a1);
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
      static PyObject *t_ExpandableODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExpandableODE_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ExpandableODE_init_(t_ExpandableODE *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ExpandableODE_addSecondaryEquations(t_ExpandableODE *self, PyObject *arg);
      static PyObject *t_ExpandableODE_computeDerivatives(t_ExpandableODE *self, PyObject *args);
      static PyObject *t_ExpandableODE_getMapper(t_ExpandableODE *self);
      static PyObject *t_ExpandableODE_getPrimary(t_ExpandableODE *self);
      static PyObject *t_ExpandableODE_init(t_ExpandableODE *self, PyObject *args);
      static PyObject *t_ExpandableODE_get__mapper(t_ExpandableODE *self, void *data);
      static PyObject *t_ExpandableODE_get__primary(t_ExpandableODE *self, void *data);
      static PyGetSetDef t_ExpandableODE__fields_[] = {
        DECLARE_GET_FIELD(t_ExpandableODE, mapper),
        DECLARE_GET_FIELD(t_ExpandableODE, primary),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ExpandableODE__methods_[] = {
        DECLARE_METHOD(t_ExpandableODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExpandableODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExpandableODE, addSecondaryEquations, METH_O),
        DECLARE_METHOD(t_ExpandableODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_ExpandableODE, getMapper, METH_NOARGS),
        DECLARE_METHOD(t_ExpandableODE, getPrimary, METH_NOARGS),
        DECLARE_METHOD(t_ExpandableODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ExpandableODE)[] = {
        { Py_tp_methods, t_ExpandableODE__methods_ },
        { Py_tp_init, (void *) t_ExpandableODE_init_ },
        { Py_tp_getset, t_ExpandableODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ExpandableODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ExpandableODE, t_ExpandableODE, ExpandableODE);

      void t_ExpandableODE::install(PyObject *module)
      {
        installType(&PY_TYPE(ExpandableODE), &PY_TYPE_DEF(ExpandableODE), module, "ExpandableODE", 0);
      }

      void t_ExpandableODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExpandableODE), "class_", make_descriptor(ExpandableODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExpandableODE), "wrapfn_", make_descriptor(t_ExpandableODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExpandableODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ExpandableODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ExpandableODE::initializeClass, 1)))
          return NULL;
        return t_ExpandableODE::wrap_Object(ExpandableODE(((t_ExpandableODE *) arg)->object.this$));
      }
      static PyObject *t_ExpandableODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ExpandableODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ExpandableODE_init_(t_ExpandableODE *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::ode::OrdinaryDifferentialEquation a0((jobject) NULL);
        ExpandableODE object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::ode::OrdinaryDifferentialEquation::initializeClass, &a0))
        {
          INT_CALL(object = ExpandableODE(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ExpandableODE_addSecondaryEquations(t_ExpandableODE *self, PyObject *arg)
      {
        ::org::hipparchus::ode::SecondaryODE a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", ::org::hipparchus::ode::SecondaryODE::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.addSecondaryEquations(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "addSecondaryEquations", arg);
        return NULL;
      }

      static PyObject *t_ExpandableODE_computeDerivatives(t_ExpandableODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_ExpandableODE_getMapper(t_ExpandableODE *self)
      {
        ::org::hipparchus::ode::EquationsMapper result((jobject) NULL);
        OBJ_CALL(result = self->object.getMapper());
        return ::org::hipparchus::ode::t_EquationsMapper::wrap_Object(result);
      }

      static PyObject *t_ExpandableODE_getPrimary(t_ExpandableODE *self)
      {
        ::org::hipparchus::ode::OrdinaryDifferentialEquation result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimary());
        return ::org::hipparchus::ode::t_OrdinaryDifferentialEquation::wrap_Object(result);
      }

      static PyObject *t_ExpandableODE_init(t_ExpandableODE *self, PyObject *args)
      {
        ::org::hipparchus::ode::ODEState a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.init(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_ExpandableODE_get__mapper(t_ExpandableODE *self, void *data)
      {
        ::org::hipparchus::ode::EquationsMapper value((jobject) NULL);
        OBJ_CALL(value = self->object.getMapper());
        return ::org::hipparchus::ode::t_EquationsMapper::wrap_Object(value);
      }

      static PyObject *t_ExpandableODE_get__primary(t_ExpandableODE *self, void *data)
      {
        ::org::hipparchus::ode::OrdinaryDifferentialEquation value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimary());
        return ::org::hipparchus::ode::t_OrdinaryDifferentialEquation::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Floor.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Floor::class$ = NULL;
        jmethodID *Floor::mids$ = NULL;
        bool Floor::live$ = false;

        jclass Floor::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Floor");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Floor::Floor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Floor::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Floor::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Floor_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Floor_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Floor_init_(t_Floor *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Floor_value(t_Floor *self, PyObject *args);

        static PyMethodDef t_Floor__methods_[] = {
          DECLARE_METHOD(t_Floor, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Floor, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Floor, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Floor)[] = {
          { Py_tp_methods, t_Floor__methods_ },
          { Py_tp_init, (void *) t_Floor_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Floor)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Floor, t_Floor, Floor);

        void t_Floor::install(PyObject *module)
        {
          installType(&PY_TYPE(Floor), &PY_TYPE_DEF(Floor), module, "Floor", 0);
        }

        void t_Floor::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Floor), "class_", make_descriptor(Floor::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Floor), "wrapfn_", make_descriptor(t_Floor::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Floor), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Floor_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Floor::initializeClass, 1)))
            return NULL;
          return t_Floor::wrap_Object(Floor(((t_Floor *) arg)->object.this$));
        }
        static PyObject *t_Floor_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Floor::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Floor_init_(t_Floor *self, PyObject *args, PyObject *kwds)
        {
          Floor object((jobject) NULL);

          INT_CALL(object = Floor());
          self->object = object;

          return 0;
        }

        static PyObject *t_Floor_value(t_Floor *self, PyObject *args)
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
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIOffsetsLoader$Parser::class$ = NULL;
      jmethodID *UTCTAIOffsetsLoader$Parser::mids$ = NULL;
      bool UTCTAIOffsetsLoader$Parser::live$ = false;

      jclass UTCTAIOffsetsLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIOffsetsLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_parse_19eef1cf230063a6] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List UTCTAIOffsetsLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_19eef1cf230063a6], a0.this$, a1.this$));
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
      static PyObject *t_UTCTAIOffsetsLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffsetsLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffsetsLoader$Parser_parse(t_UTCTAIOffsetsLoader$Parser *self, PyObject *args);

      static PyMethodDef t_UTCTAIOffsetsLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_UTCTAIOffsetsLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffsetsLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffsetsLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIOffsetsLoader$Parser)[] = {
        { Py_tp_methods, t_UTCTAIOffsetsLoader$Parser__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIOffsetsLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCTAIOffsetsLoader$Parser, t_UTCTAIOffsetsLoader$Parser, UTCTAIOffsetsLoader$Parser);

      void t_UTCTAIOffsetsLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIOffsetsLoader$Parser), &PY_TYPE_DEF(UTCTAIOffsetsLoader$Parser), module, "UTCTAIOffsetsLoader$Parser", 0);
      }

      void t_UTCTAIOffsetsLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader$Parser), "class_", make_descriptor(UTCTAIOffsetsLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader$Parser), "wrapfn_", make_descriptor(t_UTCTAIOffsetsLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIOffsetsLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIOffsetsLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_UTCTAIOffsetsLoader$Parser::wrap_Object(UTCTAIOffsetsLoader$Parser(((t_UTCTAIOffsetsLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIOffsetsLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIOffsetsLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UTCTAIOffsetsLoader$Parser_parse(t_UTCTAIOffsetsLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Metadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Segment::class$ = NULL;
          jmethodID *Segment::mids$ = NULL;
          bool Segment::live$ = false;

          jclass Segment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Segment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4f1a1c287bdbbe29] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/Metadata;Lorg/orekit/files/ccsds/section/Data;)V");
              mids$[mid_getData_faa774fba39c031d] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/section/Data;");
              mids$[mid_getMetadata_5dd238ab11f51a1b] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/section/Metadata;");
              mids$[mid_setMetadata_2742811a85d54d6a] = env->getMethodID(cls, "setMetadata", "(Lorg/orekit/files/ccsds/section/Metadata;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Segment::Segment(const ::org::orekit::files::ccsds::section::Metadata & a0, const ::org::orekit::files::ccsds::section::Data & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4f1a1c287bdbbe29, a0.this$, a1.this$)) {}

          ::org::orekit::files::ccsds::section::Data Segment::getData() const
          {
            return ::org::orekit::files::ccsds::section::Data(env->callObjectMethod(this$, mids$[mid_getData_faa774fba39c031d]));
          }

          ::org::orekit::files::ccsds::section::Metadata Segment::getMetadata() const
          {
            return ::org::orekit::files::ccsds::section::Metadata(env->callObjectMethod(this$, mids$[mid_getMetadata_5dd238ab11f51a1b]));
          }

          void Segment::setMetadata(const ::org::orekit::files::ccsds::section::Metadata & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMetadata_2742811a85d54d6a], a0.this$);
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
          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Segment_of_(t_Segment *self, PyObject *args);
          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Segment_getData(t_Segment *self);
          static PyObject *t_Segment_getMetadata(t_Segment *self);
          static PyObject *t_Segment_setMetadata(t_Segment *self, PyObject *arg);
          static PyObject *t_Segment_get__data(t_Segment *self, void *data);
          static PyObject *t_Segment_get__metadata(t_Segment *self, void *data);
          static int t_Segment_set__metadata(t_Segment *self, PyObject *arg, void *data);
          static PyObject *t_Segment_get__parameters_(t_Segment *self, void *data);
          static PyGetSetDef t_Segment__fields_[] = {
            DECLARE_GET_FIELD(t_Segment, data),
            DECLARE_GETSET_FIELD(t_Segment, metadata),
            DECLARE_GET_FIELD(t_Segment, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Segment__methods_[] = {
            DECLARE_METHOD(t_Segment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, of_, METH_VARARGS),
            DECLARE_METHOD(t_Segment, getData, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getMetadata, METH_NOARGS),
            DECLARE_METHOD(t_Segment, setMetadata, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Segment)[] = {
            { Py_tp_methods, t_Segment__methods_ },
            { Py_tp_init, (void *) t_Segment_init_ },
            { Py_tp_getset, t_Segment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Segment)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Segment, t_Segment, Segment);
          PyObject *t_Segment::wrap_Object(const Segment& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Segment::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Segment *self = (t_Segment *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_Segment::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Segment::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Segment *self = (t_Segment *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_Segment::install(PyObject *module)
          {
            installType(&PY_TYPE(Segment), &PY_TYPE_DEF(Segment), module, "Segment", 0);
          }

          void t_Segment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "class_", make_descriptor(Segment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "wrapfn_", make_descriptor(t_Segment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Segment::initializeClass, 1)))
              return NULL;
            return t_Segment::wrap_Object(Segment(((t_Segment *) arg)->object.this$));
          }
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Segment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Segment_of_(t_Segment *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::section::Metadata a0((jobject) NULL);
            ::org::orekit::files::ccsds::section::Data a1((jobject) NULL);
            Segment object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::section::Metadata::initializeClass, ::org::orekit::files::ccsds::section::Data::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Segment(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Segment_getData(t_Segment *self)
          {
            ::org::orekit::files::ccsds::section::Data result((jobject) NULL);
            OBJ_CALL(result = self->object.getData());
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::orekit::files::ccsds::section::t_Data::wrap_Object(result);
          }

          static PyObject *t_Segment_getMetadata(t_Segment *self)
          {
            ::org::orekit::files::ccsds::section::Metadata result((jobject) NULL);
            OBJ_CALL(result = self->object.getMetadata());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::ccsds::section::t_Metadata::wrap_Object(result);
          }

          static PyObject *t_Segment_setMetadata(t_Segment *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::section::Metadata a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::section::Metadata::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setMetadata(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMetadata", arg);
            return NULL;
          }
          static PyObject *t_Segment_get__parameters_(t_Segment *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Segment_get__data(t_Segment *self, void *data)
          {
            ::org::orekit::files::ccsds::section::Data value((jobject) NULL);
            OBJ_CALL(value = self->object.getData());
            return ::org::orekit::files::ccsds::section::t_Data::wrap_Object(value);
          }

          static PyObject *t_Segment_get__metadata(t_Segment *self, void *data)
          {
            ::org::orekit::files::ccsds::section::Metadata value((jobject) NULL);
            OBJ_CALL(value = self->object.getMetadata());
            return ::org::orekit::files::ccsds::section::t_Metadata::wrap_Object(value);
          }
          static int t_Segment_set__metadata(t_Segment *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::ccsds::section::Metadata value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::section::Metadata::initializeClass, &value))
              {
                INT_CALL(self->object.setMetadata(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "metadata", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsMoultonIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsMoultonIntegrator::class$ = NULL;
        jmethodID *AdamsMoultonIntegrator::mids$ = NULL;
        bool AdamsMoultonIntegrator::live$ = false;

        jclass AdamsMoultonIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsMoultonIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f51d9b95a9d2d5a5] = env->getMethodID(cls, "<init>", "(IDD[D[D)V");
            mids$[mid_init$_383392bb694f45fb] = env->getMethodID(cls, "<init>", "(IDDDD)V");
            mids$[mid_errorEstimation_292da48f87a5db99] = env->getMethodID(cls, "errorEstimation", "([DD[D[DLorg/hipparchus/linear/RealMatrix;)D");
            mids$[mid_finalizeStep_07f673992ff5deaf] = env->getMethodID(cls, "finalizeStep", "(D[D[DLorg/hipparchus/linear/Array2DRowRealMatrix;ZLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsMoultonIntegrator::AdamsMoultonIntegrator(jint a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(env->newObject(initializeClass, &mids$, mid_init$_f51d9b95a9d2d5a5, a0, a1, a2, a3.this$, a4.this$)) {}

        AdamsMoultonIntegrator::AdamsMoultonIntegrator(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(env->newObject(initializeClass, &mids$, mid_init$_383392bb694f45fb, a0, a1, a2, a3, a4)) {}
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
      namespace nonstiff {
        static PyObject *t_AdamsMoultonIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsMoultonIntegrator_init_(t_AdamsMoultonIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_AdamsMoultonIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsMoultonIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsMoultonIntegrator)[] = {
          { Py_tp_methods, t_AdamsMoultonIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsMoultonIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsMoultonIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdamsIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsMoultonIntegrator, t_AdamsMoultonIntegrator, AdamsMoultonIntegrator);

        void t_AdamsMoultonIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsMoultonIntegrator), &PY_TYPE_DEF(AdamsMoultonIntegrator), module, "AdamsMoultonIntegrator", 0);
        }

        void t_AdamsMoultonIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegrator), "class_", make_descriptor(AdamsMoultonIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegrator), "wrapfn_", make_descriptor(t_AdamsMoultonIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsMoultonIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsMoultonIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsMoultonIntegrator::wrap_Object(AdamsMoultonIntegrator(((t_AdamsMoultonIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsMoultonIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsMoultonIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsMoultonIntegrator_init_(t_AdamsMoultonIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              AdamsMoultonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDD[D[D", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdamsMoultonIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              AdamsMoultonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDDDD", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdamsMoultonIntegrator(a0, a1, a2, a3, a4));
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/AngularAzElBuilder.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *AngularAzElBuilder::class$ = NULL;
          jmethodID *AngularAzElBuilder::mids$ = NULL;
          bool AngularAzElBuilder::live$ = false;

          jclass AngularAzElBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/AngularAzElBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bde81e75abb0ff5f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_77690dd682a12885] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/AngularAzEl;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularAzElBuilder::AngularAzElBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_bde81e75abb0ff5f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::org::orekit::estimation::measurements::AngularAzEl AngularAzElBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::AngularAzEl(env->callObjectMethod(this$, mids$[mid_build_77690dd682a12885], a0.this$, a1.this$));
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
          static PyObject *t_AngularAzElBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularAzElBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularAzElBuilder_of_(t_AngularAzElBuilder *self, PyObject *args);
          static int t_AngularAzElBuilder_init_(t_AngularAzElBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularAzElBuilder_build(t_AngularAzElBuilder *self, PyObject *args);
          static PyObject *t_AngularAzElBuilder_get__parameters_(t_AngularAzElBuilder *self, void *data);
          static PyGetSetDef t_AngularAzElBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_AngularAzElBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularAzElBuilder__methods_[] = {
            DECLARE_METHOD(t_AngularAzElBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularAzElBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularAzElBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_AngularAzElBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularAzElBuilder)[] = {
            { Py_tp_methods, t_AngularAzElBuilder__methods_ },
            { Py_tp_init, (void *) t_AngularAzElBuilder_init_ },
            { Py_tp_getset, t_AngularAzElBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularAzElBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(AngularAzElBuilder, t_AngularAzElBuilder, AngularAzElBuilder);
          PyObject *t_AngularAzElBuilder::wrap_Object(const AngularAzElBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AngularAzElBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AngularAzElBuilder *self = (t_AngularAzElBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AngularAzElBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AngularAzElBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AngularAzElBuilder *self = (t_AngularAzElBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AngularAzElBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularAzElBuilder), &PY_TYPE_DEF(AngularAzElBuilder), module, "AngularAzElBuilder", 0);
          }

          void t_AngularAzElBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzElBuilder), "class_", make_descriptor(AngularAzElBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzElBuilder), "wrapfn_", make_descriptor(t_AngularAzElBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzElBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularAzElBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularAzElBuilder::initializeClass, 1)))
              return NULL;
            return t_AngularAzElBuilder::wrap_Object(AngularAzElBuilder(((t_AngularAzElBuilder *) arg)->object.this$));
          }
          static PyObject *t_AngularAzElBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularAzElBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AngularAzElBuilder_of_(t_AngularAzElBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_AngularAzElBuilder_init_(t_AngularAzElBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
            AngularAzElBuilder object((jobject) NULL);

            if (!parseArgs(args, "kk[D[Dk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AngularAzElBuilder(a0, a1, a2, a3, a4));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(AngularAzEl);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularAzElBuilder_build(t_AngularAzElBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::AngularAzEl result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_AngularAzEl::wrap_Object(result);
            }

            return callSuper(PY_TYPE(AngularAzElBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_AngularAzElBuilder_get__parameters_(t_AngularAzElBuilder *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesRangeModifier.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockInterSatellitesRangeModifier::class$ = NULL;
          jmethodID *RelativisticClockInterSatellitesRangeModifier::mids$ = NULL;
          bool RelativisticClockInterSatellitesRangeModifier::live$ = false;

          jclass RelativisticClockInterSatellitesRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockInterSatellitesRangeModifier::RelativisticClockInterSatellitesRangeModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::java::util::List RelativisticClockInterSatellitesRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void RelativisticClockInterSatellitesRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
        namespace modifiers {
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockInterSatellitesRangeModifier_init_(t_RelativisticClockInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_getParametersDrivers(t_RelativisticClockInterSatellitesRangeModifier *self);
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_modifyWithoutDerivatives(t_RelativisticClockInterSatellitesRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_get__parametersDrivers(t_RelativisticClockInterSatellitesRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockInterSatellitesRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockInterSatellitesRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockInterSatellitesRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockInterSatellitesRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockInterSatellitesRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticClockInterSatellitesRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockInterSatellitesRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticClockInterSatellitesRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockInterSatellitesRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockInterSatellitesRangeModifier, t_RelativisticClockInterSatellitesRangeModifier, RelativisticClockInterSatellitesRangeModifier);

          void t_RelativisticClockInterSatellitesRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockInterSatellitesRangeModifier), &PY_TYPE_DEF(RelativisticClockInterSatellitesRangeModifier), module, "RelativisticClockInterSatellitesRangeModifier", 0);
          }

          void t_RelativisticClockInterSatellitesRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesRangeModifier), "class_", make_descriptor(RelativisticClockInterSatellitesRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesRangeModifier), "wrapfn_", make_descriptor(t_RelativisticClockInterSatellitesRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockInterSatellitesRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockInterSatellitesRangeModifier::wrap_Object(RelativisticClockInterSatellitesRangeModifier(((t_RelativisticClockInterSatellitesRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockInterSatellitesRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockInterSatellitesRangeModifier_init_(t_RelativisticClockInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockInterSatellitesRangeModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockInterSatellitesRangeModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_getParametersDrivers(t_RelativisticClockInterSatellitesRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_modifyWithoutDerivatives(t_RelativisticClockInterSatellitesRangeModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_get__parametersDrivers(t_RelativisticClockInterSatellitesRangeModifier *self, void *data)
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
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/time/OffsetModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIOffsetsLoader::class$ = NULL;
      jmethodID *UTCTAIOffsetsLoader::mids$ = NULL;
      bool UTCTAIOffsetsLoader::live$ = false;

      jclass UTCTAIOffsetsLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIOffsetsLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_loadOffsets_2afa36052df4765d] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List UTCTAIOffsetsLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_2afa36052df4765d]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_UTCTAIOffsetsLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffsetsLoader_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffsetsLoader_loadOffsets(t_UTCTAIOffsetsLoader *self);

      static PyMethodDef t_UTCTAIOffsetsLoader__methods_[] = {
        DECLARE_METHOD(t_UTCTAIOffsetsLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffsetsLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffsetsLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIOffsetsLoader)[] = {
        { Py_tp_methods, t_UTCTAIOffsetsLoader__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIOffsetsLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCTAIOffsetsLoader, t_UTCTAIOffsetsLoader, UTCTAIOffsetsLoader);

      void t_UTCTAIOffsetsLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIOffsetsLoader), &PY_TYPE_DEF(UTCTAIOffsetsLoader), module, "UTCTAIOffsetsLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader), "Parser", make_descriptor(&PY_TYPE_DEF(UTCTAIOffsetsLoader$Parser)));
      }

      void t_UTCTAIOffsetsLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader), "class_", make_descriptor(UTCTAIOffsetsLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader), "wrapfn_", make_descriptor(t_UTCTAIOffsetsLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIOffsetsLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIOffsetsLoader::initializeClass, 1)))
          return NULL;
        return t_UTCTAIOffsetsLoader::wrap_Object(UTCTAIOffsetsLoader(((t_UTCTAIOffsetsLoader *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIOffsetsLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIOffsetsLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UTCTAIOffsetsLoader_loadOffsets(t_UTCTAIOffsetsLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$SoftwareConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$SoftwareConfiguration::mids$ = NULL;
        bool CRDConfiguration$SoftwareConfiguration::live$ = false;

        jclass CRDConfiguration$SoftwareConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getProcessingSoftwareVersions_692f4257baa8d3c3] = env->getMethodID(cls, "getProcessingSoftwareVersions", "()[Ljava/lang/String;");
            mids$[mid_getProcessingSoftwares_692f4257baa8d3c3] = env->getMethodID(cls, "getProcessingSoftwares", "()[Ljava/lang/String;");
            mids$[mid_getSoftwareId_11b109bd155ca898] = env->getMethodID(cls, "getSoftwareId", "()Ljava/lang/String;");
            mids$[mid_getTrackingSoftwareVersions_692f4257baa8d3c3] = env->getMethodID(cls, "getTrackingSoftwareVersions", "()[Ljava/lang/String;");
            mids$[mid_getTrackingSoftwares_692f4257baa8d3c3] = env->getMethodID(cls, "getTrackingSoftwares", "()[Ljava/lang/String;");
            mids$[mid_setProcessingSoftwareVersions_b8ac5bb33398c2cf] = env->getMethodID(cls, "setProcessingSoftwareVersions", "([Ljava/lang/String;)V");
            mids$[mid_setProcessingSoftwares_b8ac5bb33398c2cf] = env->getMethodID(cls, "setProcessingSoftwares", "([Ljava/lang/String;)V");
            mids$[mid_setSoftwareId_d0bc48d5b00dc40c] = env->getMethodID(cls, "setSoftwareId", "(Ljava/lang/String;)V");
            mids$[mid_setTrackingSoftwareVersions_b8ac5bb33398c2cf] = env->getMethodID(cls, "setTrackingSoftwareVersions", "([Ljava/lang/String;)V");
            mids$[mid_setTrackingSoftwares_b8ac5bb33398c2cf] = env->getMethodID(cls, "setTrackingSoftwares", "([Ljava/lang/String;)V");
            mids$[mid_toCrdString_11b109bd155ca898] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$SoftwareConfiguration::CRDConfiguration$SoftwareConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        JArray< ::java::lang::String > CRDConfiguration$SoftwareConfiguration::getProcessingSoftwareVersions() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getProcessingSoftwareVersions_692f4257baa8d3c3]));
        }

        JArray< ::java::lang::String > CRDConfiguration$SoftwareConfiguration::getProcessingSoftwares() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getProcessingSoftwares_692f4257baa8d3c3]));
        }

        ::java::lang::String CRDConfiguration$SoftwareConfiguration::getSoftwareId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSoftwareId_11b109bd155ca898]));
        }

        JArray< ::java::lang::String > CRDConfiguration$SoftwareConfiguration::getTrackingSoftwareVersions() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getTrackingSoftwareVersions_692f4257baa8d3c3]));
        }

        JArray< ::java::lang::String > CRDConfiguration$SoftwareConfiguration::getTrackingSoftwares() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getTrackingSoftwares_692f4257baa8d3c3]));
        }

        void CRDConfiguration$SoftwareConfiguration::setProcessingSoftwareVersions(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProcessingSoftwareVersions_b8ac5bb33398c2cf], a0.this$);
        }

        void CRDConfiguration$SoftwareConfiguration::setProcessingSoftwares(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProcessingSoftwares_b8ac5bb33398c2cf], a0.this$);
        }

        void CRDConfiguration$SoftwareConfiguration::setSoftwareId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSoftwareId_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$SoftwareConfiguration::setTrackingSoftwareVersions(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTrackingSoftwareVersions_b8ac5bb33398c2cf], a0.this$);
        }

        void CRDConfiguration$SoftwareConfiguration::setTrackingSoftwares(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTrackingSoftwares_b8ac5bb33398c2cf], a0.this$);
        }

        ::java::lang::String CRDConfiguration$SoftwareConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$SoftwareConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$SoftwareConfiguration_init_(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getProcessingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getProcessingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getSoftwareId(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getTrackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getTrackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setProcessingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setProcessingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setSoftwareId(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setTrackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setTrackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_toCrdString(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_toString(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__processingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__processingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__processingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__processingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__softwareId(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__softwareId(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__trackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__trackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__trackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__trackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$SoftwareConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, processingSoftwareVersions),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, processingSoftwares),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, softwareId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, trackingSoftwareVersions),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, trackingSoftwares),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$SoftwareConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getProcessingSoftwareVersions, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getProcessingSoftwares, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getSoftwareId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getTrackingSoftwareVersions, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getTrackingSoftwares, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setProcessingSoftwareVersions, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setProcessingSoftwares, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setSoftwareId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setTrackingSoftwareVersions, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setTrackingSoftwares, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$SoftwareConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$SoftwareConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$SoftwareConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$SoftwareConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$SoftwareConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$SoftwareConfiguration, t_CRDConfiguration$SoftwareConfiguration, CRDConfiguration$SoftwareConfiguration);

        void t_CRDConfiguration$SoftwareConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$SoftwareConfiguration), &PY_TYPE_DEF(CRDConfiguration$SoftwareConfiguration), module, "CRDConfiguration$SoftwareConfiguration", 0);
        }

        void t_CRDConfiguration$SoftwareConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SoftwareConfiguration), "class_", make_descriptor(CRDConfiguration$SoftwareConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SoftwareConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$SoftwareConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SoftwareConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$SoftwareConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$SoftwareConfiguration::wrap_Object(CRDConfiguration$SoftwareConfiguration(((t_CRDConfiguration$SoftwareConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$SoftwareConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$SoftwareConfiguration_init_(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$SoftwareConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$SoftwareConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getProcessingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getProcessingSoftwareVersions());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getProcessingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getProcessingSoftwares());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getSoftwareId(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSoftwareId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getTrackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getTrackingSoftwareVersions());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getTrackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getTrackingSoftwares());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setProcessingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setProcessingSoftwareVersions(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProcessingSoftwareVersions", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setProcessingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setProcessingSoftwares(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProcessingSoftwares", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setSoftwareId(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSoftwareId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSoftwareId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setTrackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setTrackingSoftwareVersions(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTrackingSoftwareVersions", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setTrackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setTrackingSoftwares(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTrackingSoftwares", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_toCrdString(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$SoftwareConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_toString(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$SoftwareConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__processingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getProcessingSoftwareVersions());
          return JArray<jstring>(value.this$).wrap();
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__processingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setProcessingSoftwareVersions(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "processingSoftwareVersions", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__processingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getProcessingSoftwares());
          return JArray<jstring>(value.this$).wrap();
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__processingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setProcessingSoftwares(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "processingSoftwares", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__softwareId(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSoftwareId());
          return j2p(value);
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__softwareId(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSoftwareId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "softwareId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__trackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTrackingSoftwareVersions());
          return JArray<jstring>(value.this$).wrap();
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__trackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setTrackingSoftwareVersions(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "trackingSoftwareVersions", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__trackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTrackingSoftwares());
          return JArray<jstring>(value.this$).wrap();
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__trackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setTrackingSoftwares(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "trackingSoftwares", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AbstractSingleFrequencyCombination.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractSingleFrequencyCombination::class$ = NULL;
          jmethodID *AbstractSingleFrequencyCombination::mids$ = NULL;
          bool AbstractSingleFrequencyCombination::live$ = false;

          jclass AbstractSingleFrequencyCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractSingleFrequencyCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_combine_38fa214a925f8e7a] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_combine_5803930ce6c7d9f1] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationData;");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getCombinedValue_86ffecc08a63eff0] = env->getMethodID(cls, "getCombinedValue", "(DD)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet AbstractSingleFrequencyCombination::combine(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet(env->callObjectMethod(this$, mids$[mid_combine_38fa214a925f8e7a], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationData AbstractSingleFrequencyCombination::combine(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationData(env->callObjectMethod(this$, mids$[mid_combine_5803930ce6c7d9f1], a0.this$, a1.this$));
          }

          ::java::lang::String AbstractSingleFrequencyCombination::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
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
        namespace gnss {
          static PyObject *t_AbstractSingleFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractSingleFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractSingleFrequencyCombination_combine(t_AbstractSingleFrequencyCombination *self, PyObject *args);
          static PyObject *t_AbstractSingleFrequencyCombination_getName(t_AbstractSingleFrequencyCombination *self);
          static PyObject *t_AbstractSingleFrequencyCombination_get__name(t_AbstractSingleFrequencyCombination *self, void *data);
          static PyGetSetDef t_AbstractSingleFrequencyCombination__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractSingleFrequencyCombination, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractSingleFrequencyCombination__methods_[] = {
            DECLARE_METHOD(t_AbstractSingleFrequencyCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractSingleFrequencyCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractSingleFrequencyCombination, combine, METH_VARARGS),
            DECLARE_METHOD(t_AbstractSingleFrequencyCombination, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractSingleFrequencyCombination)[] = {
            { Py_tp_methods, t_AbstractSingleFrequencyCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractSingleFrequencyCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractSingleFrequencyCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractSingleFrequencyCombination, t_AbstractSingleFrequencyCombination, AbstractSingleFrequencyCombination);

          void t_AbstractSingleFrequencyCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractSingleFrequencyCombination), &PY_TYPE_DEF(AbstractSingleFrequencyCombination), module, "AbstractSingleFrequencyCombination", 0);
          }

          void t_AbstractSingleFrequencyCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSingleFrequencyCombination), "class_", make_descriptor(AbstractSingleFrequencyCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSingleFrequencyCombination), "wrapfn_", make_descriptor(t_AbstractSingleFrequencyCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSingleFrequencyCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractSingleFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractSingleFrequencyCombination::initializeClass, 1)))
              return NULL;
            return t_AbstractSingleFrequencyCombination::wrap_Object(AbstractSingleFrequencyCombination(((t_AbstractSingleFrequencyCombination *) arg)->object.this$));
          }
          static PyObject *t_AbstractSingleFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractSingleFrequencyCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractSingleFrequencyCombination_combine(t_AbstractSingleFrequencyCombination *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);
                ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.combine(a0));
                  return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationDataSet::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
                ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
                ::org::orekit::estimation::measurements::gnss::CombinedObservationData result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.combine(a0, a1));
                  return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationData::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "combine", args);
            return NULL;
          }

          static PyObject *t_AbstractSingleFrequencyCombination_getName(t_AbstractSingleFrequencyCombination *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_AbstractSingleFrequencyCombination_get__name(t_AbstractSingleFrequencyCombination *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVectorWriter.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *StateVectorWriter::class$ = NULL;
            jmethodID *StateVectorWriter::mids$ = NULL;
            bool StateVectorWriter::live$ = false;

            jclass StateVectorWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/StateVectorWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_efcfd9fdf03af9a9] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/ccsds/ndm/odm/StateVector;Lorg/orekit/files/ccsds/definitions/TimeConverter;)V");
                mids$[mid_writeContent_6d745cf7b26e9f5d] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            StateVectorWriter::StateVectorWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::ccsds::ndm::odm::StateVector & a2, const ::org::orekit::files::ccsds::definitions::TimeConverter & a3) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_efcfd9fdf03af9a9, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
            static PyObject *t_StateVectorWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_StateVectorWriter_init_(t_StateVectorWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_StateVectorWriter__methods_[] = {
              DECLARE_METHOD(t_StateVectorWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVectorWriter)[] = {
              { Py_tp_methods, t_StateVectorWriter__methods_ },
              { Py_tp_init, (void *) t_StateVectorWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVectorWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(StateVectorWriter, t_StateVectorWriter, StateVectorWriter);

            void t_StateVectorWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVectorWriter), &PY_TYPE_DEF(StateVectorWriter), module, "StateVectorWriter", 0);
            }

            void t_StateVectorWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "class_", make_descriptor(StateVectorWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "wrapfn_", make_descriptor(t_StateVectorWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_StateVectorWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVectorWriter::initializeClass, 1)))
                return NULL;
              return t_StateVectorWriter::wrap_Object(StateVectorWriter(((t_StateVectorWriter *) arg)->object.this$));
            }
            static PyObject *t_StateVectorWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVectorWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_StateVectorWriter_init_(t_StateVectorWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::StateVector a2((jobject) NULL);
              ::org::orekit::files::ccsds::definitions::TimeConverter a3((jobject) NULL);
              StateVectorWriter object((jobject) NULL);

              if (!parseArgs(args, "sskk", ::org::orekit::files::ccsds::ndm::odm::StateVector::initializeClass, ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = StateVectorWriter(a0, a1, a2, a3));
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
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmHeader::class$ = NULL;
            jmethodID *AdmHeader::mids$ = NULL;
            bool AdmHeader::live$ = false;

            jclass AdmHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdmHeader::AdmHeader() : ::org::orekit::files::ccsds::section::Header(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
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
            static PyObject *t_AdmHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdmHeader_init_(t_AdmHeader *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_AdmHeader__methods_[] = {
              DECLARE_METHOD(t_AdmHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmHeader, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmHeader)[] = {
              { Py_tp_methods, t_AdmHeader__methods_ },
              { Py_tp_init, (void *) t_AdmHeader_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmHeader)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Header),
              NULL
            };

            DEFINE_TYPE(AdmHeader, t_AdmHeader, AdmHeader);

            void t_AdmHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmHeader), &PY_TYPE_DEF(AdmHeader), module, "AdmHeader", 0);
            }

            void t_AdmHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmHeader), "class_", make_descriptor(AdmHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmHeader), "wrapfn_", make_descriptor(t_AdmHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdmHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmHeader::initializeClass, 1)))
                return NULL;
              return t_AdmHeader::wrap_Object(AdmHeader(((t_AdmHeader *) arg)->object.this$));
            }
            static PyObject *t_AdmHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdmHeader_init_(t_AdmHeader *self, PyObject *args, PyObject *kwds)
            {
              AdmHeader object((jobject) NULL);

              INT_CALL(object = AdmHeader());
              self->object = object;

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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyDynamicContext.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTThirdBodyDynamicContext::class$ = NULL;
            jmethodID *DSSTThirdBodyDynamicContext::mids$ = NULL;
            bool DSSTThirdBodyDynamicContext::live$ = false;

            jclass DSSTThirdBodyDynamicContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyDynamicContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_9d38b0d93ab4e317] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/bodies/CelestialBody;[D)V");
                mids$[mid_getA_dff5885c2c873297] = env->getMethodID(cls, "getA", "()D");
                mids$[mid_getAlpha_dff5885c2c873297] = env->getMethodID(cls, "getAlpha", "()D");
                mids$[mid_getBB_dff5885c2c873297] = env->getMethodID(cls, "getBB", "()D");
                mids$[mid_getBBB_dff5885c2c873297] = env->getMethodID(cls, "getBBB", "()D");
                mids$[mid_getBeta_dff5885c2c873297] = env->getMethodID(cls, "getBeta", "()D");
                mids$[mid_getBoA_dff5885c2c873297] = env->getMethodID(cls, "getBoA", "()D");
                mids$[mid_getBoABpo_dff5885c2c873297] = env->getMethodID(cls, "getBoABpo", "()D");
                mids$[mid_getGamma_dff5885c2c873297] = env->getMethodID(cls, "getGamma", "()D");
                mids$[mid_getHXXX_dff5885c2c873297] = env->getMethodID(cls, "getHXXX", "()D");
                mids$[mid_getKXXX_dff5885c2c873297] = env->getMethodID(cls, "getKXXX", "()D");
                mids$[mid_getM2aoA_dff5885c2c873297] = env->getMethodID(cls, "getM2aoA", "()D");
                mids$[mid_getMCo2AB_dff5885c2c873297] = env->getMethodID(cls, "getMCo2AB", "()D");
                mids$[mid_getMeanMotion_dff5885c2c873297] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMuoR3_dff5885c2c873297] = env->getMethodID(cls, "getMuoR3", "()D");
                mids$[mid_getOoAB_dff5885c2c873297] = env->getMethodID(cls, "getOoAB", "()D");
                mids$[mid_getR3_dff5885c2c873297] = env->getMethodID(cls, "getR3", "()D");
                mids$[mid_getX_dff5885c2c873297] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXX_dff5885c2c873297] = env->getMethodID(cls, "getXX", "()D");
                mids$[mid_getb_dff5885c2c873297] = env->getMethodID(cls, "getb", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTThirdBodyDynamicContext::DSSTThirdBodyDynamicContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::bodies::CelestialBody & a1, const JArray< jdouble > & a2) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_9d38b0d93ab4e317, a0.this$, a1.this$, a2.this$)) {}

            jdouble DSSTThirdBodyDynamicContext::getA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getA_dff5885c2c873297]);
            }

            jdouble DSSTThirdBodyDynamicContext::getAlpha() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAlpha_dff5885c2c873297]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBB_dff5885c2c873297]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBBB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBBB_dff5885c2c873297]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBeta() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBeta_dff5885c2c873297]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoA_dff5885c2c873297]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBoABpo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoABpo_dff5885c2c873297]);
            }

            jdouble DSSTThirdBodyDynamicContext::getGamma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGamma_dff5885c2c873297]);
            }

            jdouble DSSTThirdBodyDynamicContext::getHXXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHXXX_dff5885c2c873297]);
            }

            jdouble DSSTThirdBodyDynamicContext::getKXXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getKXXX_dff5885c2c873297]);
            }

            jdouble DSSTThirdBodyDynamicContext::getM2aoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getM2aoA_dff5885c2c873297]);
            }

            jdouble DSSTThirdBodyDynamicContext::getMCo2AB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMCo2AB_dff5885c2c873297]);
            }

            jdouble DSSTThirdBodyDynamicContext::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_dff5885c2c873297]);
            }

            jdouble DSSTThirdBodyDynamicContext::getMuoR3() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMuoR3_dff5885c2c873297]);
            }

            jdouble DSSTThirdBodyDynamicContext::getOoAB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoAB_dff5885c2c873297]);
            }

            jdouble DSSTThirdBodyDynamicContext::getR3() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getR3_dff5885c2c873297]);
            }

            jdouble DSSTThirdBodyDynamicContext::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_dff5885c2c873297]);
            }

            jdouble DSSTThirdBodyDynamicContext::getXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXX_dff5885c2c873297]);
            }

            jdouble DSSTThirdBodyDynamicContext::getb() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getb_dff5885c2c873297]);
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
          namespace forces {
            static PyObject *t_DSSTThirdBodyDynamicContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTThirdBodyDynamicContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTThirdBodyDynamicContext_init_(t_DSSTThirdBodyDynamicContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTThirdBodyDynamicContext_getA(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getAlpha(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBB(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBBB(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBeta(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBoA(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBoABpo(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getGamma(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getHXXX(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getKXXX(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getM2aoA(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getMCo2AB(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getMeanMotion(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getMuoR3(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getOoAB(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getR3(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getX(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getXX(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getb(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__a(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__alpha(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__b(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__bB(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__bBB(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__beta(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__boA(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__boABpo(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__gamma(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__hXXX(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__kXXX(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__m2aoA(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__mCo2AB(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__meanMotion(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__muoR3(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__ooAB(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__r3(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__x(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__xX(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyGetSetDef t_DSSTThirdBodyDynamicContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, a),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, alpha),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, b),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, bB),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, bBB),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, beta),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, boA),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, boABpo),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, gamma),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, hXXX),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, kXXX),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, m2aoA),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, mCo2AB),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, meanMotion),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, muoR3),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, ooAB),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, r3),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, x),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, xX),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTThirdBodyDynamicContext__methods_[] = {
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getAlpha, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBBB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBeta, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getGamma, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getHXXX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getKXXX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getM2aoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getMCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getMuoR3, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getR3, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getXX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getb, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTThirdBodyDynamicContext)[] = {
              { Py_tp_methods, t_DSSTThirdBodyDynamicContext__methods_ },
              { Py_tp_init, (void *) t_DSSTThirdBodyDynamicContext_init_ },
              { Py_tp_getset, t_DSSTThirdBodyDynamicContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTThirdBodyDynamicContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTThirdBodyDynamicContext, t_DSSTThirdBodyDynamicContext, DSSTThirdBodyDynamicContext);

            void t_DSSTThirdBodyDynamicContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTThirdBodyDynamicContext), &PY_TYPE_DEF(DSSTThirdBodyDynamicContext), module, "DSSTThirdBodyDynamicContext", 0);
            }

            void t_DSSTThirdBodyDynamicContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyDynamicContext), "class_", make_descriptor(DSSTThirdBodyDynamicContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyDynamicContext), "wrapfn_", make_descriptor(t_DSSTThirdBodyDynamicContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyDynamicContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTThirdBodyDynamicContext::initializeClass, 1)))
                return NULL;
              return t_DSSTThirdBodyDynamicContext::wrap_Object(DSSTThirdBodyDynamicContext(((t_DSSTThirdBodyDynamicContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTThirdBodyDynamicContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTThirdBodyDynamicContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTThirdBodyDynamicContext_init_(t_DSSTThirdBodyDynamicContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              DSSTThirdBodyDynamicContext object((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = DSSTThirdBodyDynamicContext(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getA(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getAlpha(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAlpha());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBB(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBBB(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBBB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBeta(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBeta());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBoA(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBoABpo(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoABpo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getGamma(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGamma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getHXXX(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getHXXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getKXXX(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getKXXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getM2aoA(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM2aoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getMCo2AB(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMCo2AB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getMeanMotion(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getMuoR3(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMuoR3());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getOoAB(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoAB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getR3(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getR3());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getX(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getXX(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getb(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getb());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__a(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__alpha(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAlpha());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__b(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getb());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__bB(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__bBB(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBBB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__beta(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBeta());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__boA(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__boABpo(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoABpo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__gamma(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGamma());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__hXXX(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getHXXX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__kXXX(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getKXXX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__m2aoA(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getM2aoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__mCo2AB(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMCo2AB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__meanMotion(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__muoR3(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMuoR3());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__ooAB(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoAB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__r3(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getR3());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__x(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__xX(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXX());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
