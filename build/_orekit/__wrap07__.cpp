#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/OrekitStepNormalizer.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *OrekitStepNormalizer::class$ = NULL;
        jmethodID *OrekitStepNormalizer::mids$ = NULL;
        bool OrekitStepNormalizer::live$ = false;

        jclass OrekitStepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/OrekitStepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6e0fc70b103d8967] = env->getMethodID(cls, "<init>", "(DLorg/orekit/propagation/sampling/OrekitFixedStepHandler;)V");
            mids$[mid_finish_280c3390961e0a50] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getFixedStepHandler_a92bd23f1397a8a9] = env->getMethodID(cls, "getFixedStepHandler", "()Lorg/orekit/propagation/sampling/OrekitFixedStepHandler;");
            mids$[mid_getFixedTimeStep_b74f83833fdad017] = env->getMethodID(cls, "getFixedTimeStep", "()D");
            mids$[mid_handleStep_13c351c10f00bcd7] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitStepNormalizer::OrekitStepNormalizer(jdouble a0, const ::org::orekit::propagation::sampling::OrekitFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6e0fc70b103d8967, a0, a1.this$)) {}

        void OrekitStepNormalizer::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_280c3390961e0a50], a0.this$);
        }

        ::org::orekit::propagation::sampling::OrekitFixedStepHandler OrekitStepNormalizer::getFixedStepHandler() const
        {
          return ::org::orekit::propagation::sampling::OrekitFixedStepHandler(env->callObjectMethod(this$, mids$[mid_getFixedStepHandler_a92bd23f1397a8a9]));
        }

        jdouble OrekitStepNormalizer::getFixedTimeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFixedTimeStep_b74f83833fdad017]);
        }

        void OrekitStepNormalizer::handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_13c351c10f00bcd7], a0.this$);
        }

        void OrekitStepNormalizer::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
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
      namespace sampling {
        static PyObject *t_OrekitStepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitStepNormalizer_init_(t_OrekitStepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitStepNormalizer_finish(t_OrekitStepNormalizer *self, PyObject *arg);
        static PyObject *t_OrekitStepNormalizer_getFixedStepHandler(t_OrekitStepNormalizer *self);
        static PyObject *t_OrekitStepNormalizer_getFixedTimeStep(t_OrekitStepNormalizer *self);
        static PyObject *t_OrekitStepNormalizer_handleStep(t_OrekitStepNormalizer *self, PyObject *arg);
        static PyObject *t_OrekitStepNormalizer_init(t_OrekitStepNormalizer *self, PyObject *args);
        static PyObject *t_OrekitStepNormalizer_get__fixedStepHandler(t_OrekitStepNormalizer *self, void *data);
        static PyObject *t_OrekitStepNormalizer_get__fixedTimeStep(t_OrekitStepNormalizer *self, void *data);
        static PyGetSetDef t_OrekitStepNormalizer__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitStepNormalizer, fixedStepHandler),
          DECLARE_GET_FIELD(t_OrekitStepNormalizer, fixedTimeStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitStepNormalizer__methods_[] = {
          DECLARE_METHOD(t_OrekitStepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_OrekitStepNormalizer, getFixedStepHandler, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepNormalizer, getFixedTimeStep, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_OrekitStepNormalizer, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitStepNormalizer)[] = {
          { Py_tp_methods, t_OrekitStepNormalizer__methods_ },
          { Py_tp_init, (void *) t_OrekitStepNormalizer_init_ },
          { Py_tp_getset, t_OrekitStepNormalizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitStepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitStepNormalizer, t_OrekitStepNormalizer, OrekitStepNormalizer);

        void t_OrekitStepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitStepNormalizer), &PY_TYPE_DEF(OrekitStepNormalizer), module, "OrekitStepNormalizer", 0);
        }

        void t_OrekitStepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepNormalizer), "class_", make_descriptor(OrekitStepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepNormalizer), "wrapfn_", make_descriptor(t_OrekitStepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitStepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitStepNormalizer::initializeClass, 1)))
            return NULL;
          return t_OrekitStepNormalizer::wrap_Object(OrekitStepNormalizer(((t_OrekitStepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_OrekitStepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitStepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitStepNormalizer_init_(t_OrekitStepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::propagation::sampling::OrekitFixedStepHandler a1((jobject) NULL);
          OrekitStepNormalizer object((jobject) NULL);

          if (!parseArgs(args, "Dk", ::org::orekit::propagation::sampling::OrekitFixedStepHandler::initializeClass, &a0, &a1))
          {
            INT_CALL(object = OrekitStepNormalizer(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitStepNormalizer_finish(t_OrekitStepNormalizer *self, PyObject *arg)
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

        static PyObject *t_OrekitStepNormalizer_getFixedStepHandler(t_OrekitStepNormalizer *self)
        {
          ::org::orekit::propagation::sampling::OrekitFixedStepHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_OrekitFixedStepHandler::wrap_Object(result);
        }

        static PyObject *t_OrekitStepNormalizer_getFixedTimeStep(t_OrekitStepNormalizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFixedTimeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OrekitStepNormalizer_handleStep(t_OrekitStepNormalizer *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_OrekitStepNormalizer_init(t_OrekitStepNormalizer *self, PyObject *args)
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

        static PyObject *t_OrekitStepNormalizer_get__fixedStepHandler(t_OrekitStepNormalizer *self, void *data)
        {
          ::org::orekit::propagation::sampling::OrekitFixedStepHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_OrekitFixedStepHandler::wrap_Object(value);
        }

        static PyObject *t_OrekitStepNormalizer_get__fixedTimeStep(t_OrekitStepNormalizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFixedTimeStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/NdmParser.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/ndm/ParserBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/Ndm.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *NdmParser::class$ = NULL;
          jmethodID *NdmParser::mids$ = NULL;
          bool NdmParser::live$ = false;

          jclass NdmParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/NdmParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addComment_cde6b28e15c96b75] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)Z");
              mids$[mid_build_df9b0d97a1cea4f2] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/Ndm;");
              mids$[mid_getSpecialXmlElementsBuilders_810bed48fafb0b9a] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
              mids$[mid_reset_28163d47221b3cf7] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean NdmParser::addComment(const ::java::lang::String & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_addComment_cde6b28e15c96b75], a0.this$);
          }

          ::org::orekit::files::ccsds::ndm::Ndm NdmParser::build() const
          {
            return ::org::orekit::files::ccsds::ndm::Ndm(env->callObjectMethod(this$, mids$[mid_build_df9b0d97a1cea4f2]));
          }

          ::java::util::Map NdmParser::getSpecialXmlElementsBuilders() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_810bed48fafb0b9a]));
          }

          void NdmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_28163d47221b3cf7], a0.this$);
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
          static PyObject *t_NdmParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmParser_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmParser_of_(t_NdmParser *self, PyObject *args);
          static PyObject *t_NdmParser_addComment(t_NdmParser *self, PyObject *arg);
          static PyObject *t_NdmParser_build(t_NdmParser *self, PyObject *args);
          static PyObject *t_NdmParser_getSpecialXmlElementsBuilders(t_NdmParser *self, PyObject *args);
          static PyObject *t_NdmParser_reset(t_NdmParser *self, PyObject *args);
          static PyObject *t_NdmParser_get__specialXmlElementsBuilders(t_NdmParser *self, void *data);
          static PyObject *t_NdmParser_get__parameters_(t_NdmParser *self, void *data);
          static PyGetSetDef t_NdmParser__fields_[] = {
            DECLARE_GET_FIELD(t_NdmParser, specialXmlElementsBuilders),
            DECLARE_GET_FIELD(t_NdmParser, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NdmParser__methods_[] = {
            DECLARE_METHOD(t_NdmParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmParser, of_, METH_VARARGS),
            DECLARE_METHOD(t_NdmParser, addComment, METH_O),
            DECLARE_METHOD(t_NdmParser, build, METH_VARARGS),
            DECLARE_METHOD(t_NdmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
            DECLARE_METHOD(t_NdmParser, reset, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NdmParser)[] = {
            { Py_tp_methods, t_NdmParser__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NdmParser__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NdmParser)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser),
            NULL
          };

          DEFINE_TYPE(NdmParser, t_NdmParser, NdmParser);
          PyObject *t_NdmParser::wrap_Object(const NdmParser& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NdmParser::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NdmParser *self = (t_NdmParser *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_NdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NdmParser::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NdmParser *self = (t_NdmParser *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_NdmParser::install(PyObject *module)
          {
            installType(&PY_TYPE(NdmParser), &PY_TYPE_DEF(NdmParser), module, "NdmParser", 0);
          }

          void t_NdmParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmParser), "class_", make_descriptor(NdmParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmParser), "wrapfn_", make_descriptor(t_NdmParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NdmParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NdmParser::initializeClass, 1)))
              return NULL;
            return t_NdmParser::wrap_Object(NdmParser(((t_NdmParser *) arg)->object.this$));
          }
          static PyObject *t_NdmParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NdmParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NdmParser_of_(t_NdmParser *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NdmParser_addComment(t_NdmParser *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.addComment(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addComment", arg);
            return NULL;
          }

          static PyObject *t_NdmParser_build(t_NdmParser *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::ndm::Ndm result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.build());
              return ::org::orekit::files::ccsds::ndm::t_Ndm::wrap_Object(result);
            }

            return callSuper(PY_TYPE(NdmParser), (PyObject *) self, "build", args, 2);
          }

          static PyObject *t_NdmParser_getSpecialXmlElementsBuilders(t_NdmParser *self, PyObject *args)
          {
            ::java::util::Map result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
            }

            return callSuper(PY_TYPE(NdmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
          }

          static PyObject *t_NdmParser_reset(t_NdmParser *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
            {
              OBJ_CALL(self->object.reset(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(NdmParser), (PyObject *) self, "reset", args, 2);
          }
          static PyObject *t_NdmParser_get__parameters_(t_NdmParser *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_NdmParser_get__specialXmlElementsBuilders(t_NdmParser *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/MultivariateRealDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      ::java::lang::Class *MultivariateRealDistribution::class$ = NULL;
      jmethodID *MultivariateRealDistribution::mids$ = NULL;
      bool MultivariateRealDistribution::live$ = false;

      jclass MultivariateRealDistribution::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/distribution/MultivariateRealDistribution");

          mids$ = new jmethodID[max_mid];
          mids$[mid_density_b060e4326765ccf1] = env->getMethodID(cls, "density", "([D)D");
          mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_reseedRandomGenerator_3d7dd2314a0dd456] = env->getMethodID(cls, "reseedRandomGenerator", "(J)V");
          mids$[mid_sample_25e1757a36c4dde2] = env->getMethodID(cls, "sample", "()[D");
          mids$[mid_sample_23a0aa7ddbf2fcc5] = env->getMethodID(cls, "sample", "(I)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MultivariateRealDistribution::density(const JArray< jdouble > & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_density_b060e4326765ccf1], a0.this$);
      }

      jint MultivariateRealDistribution::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
      }

      void MultivariateRealDistribution::reseedRandomGenerator(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_reseedRandomGenerator_3d7dd2314a0dd456], a0);
      }

      JArray< jdouble > MultivariateRealDistribution::sample() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_sample_25e1757a36c4dde2]));
      }

      JArray< JArray< jdouble > > MultivariateRealDistribution::sample(jint a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_sample_23a0aa7ddbf2fcc5], a0));
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
      static PyObject *t_MultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateRealDistribution_density(t_MultivariateRealDistribution *self, PyObject *arg);
      static PyObject *t_MultivariateRealDistribution_getDimension(t_MultivariateRealDistribution *self);
      static PyObject *t_MultivariateRealDistribution_reseedRandomGenerator(t_MultivariateRealDistribution *self, PyObject *arg);
      static PyObject *t_MultivariateRealDistribution_sample(t_MultivariateRealDistribution *self, PyObject *args);
      static PyObject *t_MultivariateRealDistribution_get__dimension(t_MultivariateRealDistribution *self, void *data);
      static PyGetSetDef t_MultivariateRealDistribution__fields_[] = {
        DECLARE_GET_FIELD(t_MultivariateRealDistribution, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultivariateRealDistribution__methods_[] = {
        DECLARE_METHOD(t_MultivariateRealDistribution, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateRealDistribution, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateRealDistribution, density, METH_O),
        DECLARE_METHOD(t_MultivariateRealDistribution, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_MultivariateRealDistribution, reseedRandomGenerator, METH_O),
        DECLARE_METHOD(t_MultivariateRealDistribution, sample, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultivariateRealDistribution)[] = {
        { Py_tp_methods, t_MultivariateRealDistribution__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MultivariateRealDistribution__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultivariateRealDistribution)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultivariateRealDistribution, t_MultivariateRealDistribution, MultivariateRealDistribution);

      void t_MultivariateRealDistribution::install(PyObject *module)
      {
        installType(&PY_TYPE(MultivariateRealDistribution), &PY_TYPE_DEF(MultivariateRealDistribution), module, "MultivariateRealDistribution", 0);
      }

      void t_MultivariateRealDistribution::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateRealDistribution), "class_", make_descriptor(MultivariateRealDistribution::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateRealDistribution), "wrapfn_", make_descriptor(t_MultivariateRealDistribution::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateRealDistribution), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultivariateRealDistribution::initializeClass, 1)))
          return NULL;
        return t_MultivariateRealDistribution::wrap_Object(MultivariateRealDistribution(((t_MultivariateRealDistribution *) arg)->object.this$));
      }
      static PyObject *t_MultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultivariateRealDistribution::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultivariateRealDistribution_density(t_MultivariateRealDistribution *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.density(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "density", arg);
        return NULL;
      }

      static PyObject *t_MultivariateRealDistribution_getDimension(t_MultivariateRealDistribution *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultivariateRealDistribution_reseedRandomGenerator(t_MultivariateRealDistribution *self, PyObject *arg)
      {
        jlong a0;

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(self->object.reseedRandomGenerator(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "reseedRandomGenerator", arg);
        return NULL;
      }

      static PyObject *t_MultivariateRealDistribution_sample(t_MultivariateRealDistribution *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.sample());
            return result.wrap();
          }
          break;
         case 1:
          {
            jint a0;
            JArray< JArray< jdouble > > result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.sample(a0));
              return JArray<jobject>(result.this$).wrap(NULL);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "sample", args);
        return NULL;
      }

      static PyObject *t_MultivariateRealDistribution_get__dimension(t_MultivariateRealDistribution *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$QuadraticSmoothStepFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *SmoothStepFactory$QuadraticSmoothStepFunction::class$ = NULL;
        jmethodID *SmoothStepFactory$QuadraticSmoothStepFunction::mids$ = NULL;
        bool SmoothStepFactory$QuadraticSmoothStepFunction::live$ = false;

        jclass SmoothStepFactory$QuadraticSmoothStepFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/SmoothStepFactory$QuadraticSmoothStepFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_f804f816b79164cb] = env->getMethodID(cls, "value", "(DDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble SmoothStepFactory$QuadraticSmoothStepFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        jdouble SmoothStepFactory$QuadraticSmoothStepFunction::value(jdouble a0, jdouble a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_f804f816b79164cb], a0, a1, a2);
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
      namespace polynomials {
        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_value(t_SmoothStepFactory$QuadraticSmoothStepFunction *self, PyObject *args);

        static PyMethodDef t_SmoothStepFactory$QuadraticSmoothStepFunction__methods_[] = {
          DECLARE_METHOD(t_SmoothStepFactory$QuadraticSmoothStepFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$QuadraticSmoothStepFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$QuadraticSmoothStepFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothStepFactory$QuadraticSmoothStepFunction)[] = {
          { Py_tp_methods, t_SmoothStepFactory$QuadraticSmoothStepFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothStepFactory$QuadraticSmoothStepFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction),
          NULL
        };

        DEFINE_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction, t_SmoothStepFactory$QuadraticSmoothStepFunction, SmoothStepFactory$QuadraticSmoothStepFunction);

        void t_SmoothStepFactory$QuadraticSmoothStepFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), &PY_TYPE_DEF(SmoothStepFactory$QuadraticSmoothStepFunction), module, "SmoothStepFactory$QuadraticSmoothStepFunction", 0);
        }

        void t_SmoothStepFactory$QuadraticSmoothStepFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), "class_", make_descriptor(SmoothStepFactory$QuadraticSmoothStepFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), "wrapfn_", make_descriptor(t_SmoothStepFactory$QuadraticSmoothStepFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothStepFactory$QuadraticSmoothStepFunction::initializeClass, 1)))
            return NULL;
          return t_SmoothStepFactory$QuadraticSmoothStepFunction::wrap_Object(SmoothStepFactory$QuadraticSmoothStepFunction(((t_SmoothStepFactory$QuadraticSmoothStepFunction *) arg)->object.this$));
        }
        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothStepFactory$QuadraticSmoothStepFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_value(t_SmoothStepFactory$QuadraticSmoothStepFunction *self, PyObject *args)
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
            break;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.value(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          return callSuper(PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/Side.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Side.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Side::class$ = NULL;
        jmethodID *Side::mids$ = NULL;
        bool Side::live$ = false;
        Side *Side::BOTH = NULL;
        Side *Side::HYPER = NULL;
        Side *Side::MINUS = NULL;
        Side *Side::PLUS = NULL;

        jclass Side::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Side");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_2d2fecea542ec7ca] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/partitioning/Side;");
            mids$[mid_values_6370b085362e9a30] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/partitioning/Side;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BOTH = new Side(env->getStaticObjectField(cls, "BOTH", "Lorg/hipparchus/geometry/partitioning/Side;"));
            HYPER = new Side(env->getStaticObjectField(cls, "HYPER", "Lorg/hipparchus/geometry/partitioning/Side;"));
            MINUS = new Side(env->getStaticObjectField(cls, "MINUS", "Lorg/hipparchus/geometry/partitioning/Side;"));
            PLUS = new Side(env->getStaticObjectField(cls, "PLUS", "Lorg/hipparchus/geometry/partitioning/Side;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Side Side::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Side(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2d2fecea542ec7ca], a0.this$));
        }

        JArray< Side > Side::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Side >(env->callStaticObjectMethod(cls, mids$[mid_values_6370b085362e9a30]));
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
        static PyObject *t_Side_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Side_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Side_of_(t_Side *self, PyObject *args);
        static PyObject *t_Side_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Side_values(PyTypeObject *type);
        static PyObject *t_Side_get__parameters_(t_Side *self, void *data);
        static PyGetSetDef t_Side__fields_[] = {
          DECLARE_GET_FIELD(t_Side, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Side__methods_[] = {
          DECLARE_METHOD(t_Side, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Side, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Side, of_, METH_VARARGS),
          DECLARE_METHOD(t_Side, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Side, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Side)[] = {
          { Py_tp_methods, t_Side__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Side__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Side)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Side, t_Side, Side);
        PyObject *t_Side::wrap_Object(const Side& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Side::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Side *self = (t_Side *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Side::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Side::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Side *self = (t_Side *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Side::install(PyObject *module)
        {
          installType(&PY_TYPE(Side), &PY_TYPE_DEF(Side), module, "Side", 0);
        }

        void t_Side::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "class_", make_descriptor(Side::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "wrapfn_", make_descriptor(t_Side::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "boxfn_", make_descriptor(boxObject));
          env->getClass(Side::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "BOTH", make_descriptor(t_Side::wrap_Object(*Side::BOTH)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "HYPER", make_descriptor(t_Side::wrap_Object(*Side::HYPER)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "MINUS", make_descriptor(t_Side::wrap_Object(*Side::MINUS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "PLUS", make_descriptor(t_Side::wrap_Object(*Side::PLUS)));
        }

        static PyObject *t_Side_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Side::initializeClass, 1)))
            return NULL;
          return t_Side::wrap_Object(Side(((t_Side *) arg)->object.this$));
        }
        static PyObject *t_Side_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Side::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Side_of_(t_Side *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Side_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Side result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::Side::valueOf(a0));
            return t_Side::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Side_values(PyTypeObject *type)
        {
          JArray< Side > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::Side::values());
          return JArray<jobject>(result.this$).wrap(t_Side::wrap_jobject);
        }
        static PyObject *t_Side_get__parameters_(t_Side *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *AbstractIntegratedPropagator$MainStateEquations::class$ = NULL;
        jmethodID *AbstractIntegratedPropagator$MainStateEquations::mids$ = NULL;
        bool AbstractIntegratedPropagator$MainStateEquations::live$ = false;

        jclass AbstractIntegratedPropagator$MainStateEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_computeDerivatives_f227e5f48720b798] = env->getMethodID(cls, "computeDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)[D");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< jdouble > AbstractIntegratedPropagator$MainStateEquations::computeDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_f227e5f48720b798], a0.this$));
        }

        void AbstractIntegratedPropagator$MainStateEquations::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
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
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_computeDerivatives(t_AbstractIntegratedPropagator$MainStateEquations *self, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_init(t_AbstractIntegratedPropagator$MainStateEquations *self, PyObject *args);

        static PyMethodDef t_AbstractIntegratedPropagator$MainStateEquations__methods_[] = {
          DECLARE_METHOD(t_AbstractIntegratedPropagator$MainStateEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator$MainStateEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator$MainStateEquations, computeDerivatives, METH_O),
          DECLARE_METHOD(t_AbstractIntegratedPropagator$MainStateEquations, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractIntegratedPropagator$MainStateEquations)[] = {
          { Py_tp_methods, t_AbstractIntegratedPropagator$MainStateEquations__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractIntegratedPropagator$MainStateEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractIntegratedPropagator$MainStateEquations, t_AbstractIntegratedPropagator$MainStateEquations, AbstractIntegratedPropagator$MainStateEquations);

        void t_AbstractIntegratedPropagator$MainStateEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractIntegratedPropagator$MainStateEquations), &PY_TYPE_DEF(AbstractIntegratedPropagator$MainStateEquations), module, "AbstractIntegratedPropagator$MainStateEquations", 0);
        }

        void t_AbstractIntegratedPropagator$MainStateEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator$MainStateEquations), "class_", make_descriptor(AbstractIntegratedPropagator$MainStateEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator$MainStateEquations), "wrapfn_", make_descriptor(t_AbstractIntegratedPropagator$MainStateEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator$MainStateEquations), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractIntegratedPropagator$MainStateEquations::initializeClass, 1)))
            return NULL;
          return t_AbstractIntegratedPropagator$MainStateEquations::wrap_Object(AbstractIntegratedPropagator$MainStateEquations(((t_AbstractIntegratedPropagator$MainStateEquations *) arg)->object.this$));
        }
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractIntegratedPropagator$MainStateEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_computeDerivatives(t_AbstractIntegratedPropagator$MainStateEquations *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.computeDerivatives(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "computeDerivatives", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_init(t_AbstractIntegratedPropagator$MainStateEquations *self, PyObject *args)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSEphemeris.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GLONASSEphemeris::class$ = NULL;
            jmethodID *GLONASSEphemeris::mids$ = NULL;
            bool GLONASSEphemeris::live$ = false;

            jclass GLONASSEphemeris::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GLONASSEphemeris");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_6b9092a5a5611226] = env->getMethodID(cls, "<init>", "(IIDDDDDDDDDD)V");
                mids$[mid_init$_ff8a76f46a0c3d9b] = env->getMethodID(cls, "<init>", "(IIDDDDDDDDDDLorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getN4_55546ef6a647f39b] = env->getMethodID(cls, "getN4", "()I");
                mids$[mid_getNa_55546ef6a647f39b] = env->getMethodID(cls, "getNa", "()I");
                mids$[mid_getTime_b74f83833fdad017] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getX_b74f83833fdad017] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_b74f83833fdad017] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_b74f83833fdad017] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_b74f83833fdad017] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_b74f83833fdad017] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_b74f83833fdad017] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_b74f83833fdad017] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_b74f83833fdad017] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_b74f83833fdad017] = env->getMethodID(cls, "getZDotDot", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GLONASSEphemeris::GLONASSEphemeris(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6b9092a5a5611226, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11)) {}

            GLONASSEphemeris::GLONASSEphemeris(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, const ::org::orekit::time::AbsoluteDate & a12) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff8a76f46a0c3d9b, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12.this$)) {}

            ::org::orekit::time::AbsoluteDate GLONASSEphemeris::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
            }

            jint GLONASSEphemeris::getN4() const
            {
              return env->callIntMethod(this$, mids$[mid_getN4_55546ef6a647f39b]);
            }

            jint GLONASSEphemeris::getNa() const
            {
              return env->callIntMethod(this$, mids$[mid_getNa_55546ef6a647f39b]);
            }

            jdouble GLONASSEphemeris::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_b74f83833fdad017]);
            }

            jdouble GLONASSEphemeris::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_b74f83833fdad017]);
            }

            jdouble GLONASSEphemeris::getXDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDot_b74f83833fdad017]);
            }

            jdouble GLONASSEphemeris::getXDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDotDot_b74f83833fdad017]);
            }

            jdouble GLONASSEphemeris::getY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY_b74f83833fdad017]);
            }

            jdouble GLONASSEphemeris::getYDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDot_b74f83833fdad017]);
            }

            jdouble GLONASSEphemeris::getYDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDotDot_b74f83833fdad017]);
            }

            jdouble GLONASSEphemeris::getZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZ_b74f83833fdad017]);
            }

            jdouble GLONASSEphemeris::getZDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDot_b74f83833fdad017]);
            }

            jdouble GLONASSEphemeris::getZDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDotDot_b74f83833fdad017]);
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
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_GLONASSEphemeris_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSEphemeris_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GLONASSEphemeris_init_(t_GLONASSEphemeris *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GLONASSEphemeris_getDate(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getN4(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getNa(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getTime(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getX(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getXDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getXDotDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getY(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getYDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getYDotDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getZ(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getZDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getZDotDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_get__date(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__n4(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__na(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__time(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__x(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__xDot(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__xDotDot(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__y(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__yDot(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__yDotDot(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__z(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__zDot(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__zDotDot(t_GLONASSEphemeris *self, void *data);
            static PyGetSetDef t_GLONASSEphemeris__fields_[] = {
              DECLARE_GET_FIELD(t_GLONASSEphemeris, date),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, n4),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, na),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, time),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, x),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, xDot),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, xDotDot),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, y),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, yDot),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, yDotDot),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, z),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, zDot),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, zDotDot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GLONASSEphemeris__methods_[] = {
              DECLARE_METHOD(t_GLONASSEphemeris, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSEphemeris, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSEphemeris, getDate, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getN4, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getNa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getTime, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getX, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getXDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getXDotDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getY, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getYDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getYDotDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getZ, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getZDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getZDotDot, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GLONASSEphemeris)[] = {
              { Py_tp_methods, t_GLONASSEphemeris__methods_ },
              { Py_tp_init, (void *) t_GLONASSEphemeris_init_ },
              { Py_tp_getset, t_GLONASSEphemeris__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GLONASSEphemeris)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GLONASSEphemeris, t_GLONASSEphemeris, GLONASSEphemeris);

            void t_GLONASSEphemeris::install(PyObject *module)
            {
              installType(&PY_TYPE(GLONASSEphemeris), &PY_TYPE_DEF(GLONASSEphemeris), module, "GLONASSEphemeris", 0);
            }

            void t_GLONASSEphemeris::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSEphemeris), "class_", make_descriptor(GLONASSEphemeris::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSEphemeris), "wrapfn_", make_descriptor(t_GLONASSEphemeris::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSEphemeris), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GLONASSEphemeris_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GLONASSEphemeris::initializeClass, 1)))
                return NULL;
              return t_GLONASSEphemeris::wrap_Object(GLONASSEphemeris(((t_GLONASSEphemeris *) arg)->object.this$));
            }
            static PyObject *t_GLONASSEphemeris_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GLONASSEphemeris::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GLONASSEphemeris_init_(t_GLONASSEphemeris *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 12:
                {
                  jint a0;
                  jint a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  jdouble a8;
                  jdouble a9;
                  jdouble a10;
                  jdouble a11;
                  GLONASSEphemeris object((jobject) NULL);

                  if (!parseArgs(args, "IIDDDDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
                  {
                    INT_CALL(object = GLONASSEphemeris(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 13:
                {
                  jint a0;
                  jint a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  jdouble a8;
                  jdouble a9;
                  jdouble a10;
                  jdouble a11;
                  ::org::orekit::time::AbsoluteDate a12((jobject) NULL);
                  GLONASSEphemeris object((jobject) NULL);

                  if (!parseArgs(args, "IIDDDDDDDDDDk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12))
                  {
                    INT_CALL(object = GLONASSEphemeris(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

            static PyObject *t_GLONASSEphemeris_getDate(t_GLONASSEphemeris *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_GLONASSEphemeris_getN4(t_GLONASSEphemeris *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getN4());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSEphemeris_getNa(t_GLONASSEphemeris *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getNa());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSEphemeris_getTime(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getX(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getXDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getXDotDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getY(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getYDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getYDotDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getZ(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getZDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getZDotDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_get__date(t_GLONASSEphemeris *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_GLONASSEphemeris_get__n4(t_GLONASSEphemeris *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getN4());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSEphemeris_get__na(t_GLONASSEphemeris *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getNa());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSEphemeris_get__time(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__x(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__xDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__xDotDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__y(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__yDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__yDotDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__z(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZ());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__zDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__zDotDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDotDot());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/weather/PythonWeatherModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/weather/WeatherModel.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          ::java::lang::Class *PythonWeatherModel::class$ = NULL;
          jmethodID *PythonWeatherModel::mids$ = NULL;
          bool PythonWeatherModel::live$ = false;

          jclass PythonWeatherModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/weather/PythonWeatherModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_weatherParameters_98ef3c02384a4218] = env->getMethodID(cls, "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonWeatherModel::PythonWeatherModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonWeatherModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonWeatherModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonWeatherModel::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        namespace weather {
          static PyObject *t_PythonWeatherModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonWeatherModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonWeatherModel_init_(t_PythonWeatherModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonWeatherModel_finalize(t_PythonWeatherModel *self);
          static PyObject *t_PythonWeatherModel_pythonExtension(t_PythonWeatherModel *self, PyObject *args);
          static void JNICALL t_PythonWeatherModel_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonWeatherModel_weatherParameters1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1);
          static PyObject *t_PythonWeatherModel_get__self(t_PythonWeatherModel *self, void *data);
          static PyGetSetDef t_PythonWeatherModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonWeatherModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonWeatherModel__methods_[] = {
            DECLARE_METHOD(t_PythonWeatherModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonWeatherModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonWeatherModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonWeatherModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonWeatherModel)[] = {
            { Py_tp_methods, t_PythonWeatherModel__methods_ },
            { Py_tp_init, (void *) t_PythonWeatherModel_init_ },
            { Py_tp_getset, t_PythonWeatherModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonWeatherModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonWeatherModel, t_PythonWeatherModel, PythonWeatherModel);

          void t_PythonWeatherModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonWeatherModel), &PY_TYPE_DEF(PythonWeatherModel), module, "PythonWeatherModel", 1);
          }

          void t_PythonWeatherModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonWeatherModel), "class_", make_descriptor(PythonWeatherModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonWeatherModel), "wrapfn_", make_descriptor(t_PythonWeatherModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonWeatherModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonWeatherModel::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonWeatherModel_pythonDecRef0 },
              { "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonWeatherModel_weatherParameters1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonWeatherModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonWeatherModel::initializeClass, 1)))
              return NULL;
            return t_PythonWeatherModel::wrap_Object(PythonWeatherModel(((t_PythonWeatherModel *) arg)->object.this$));
          }
          static PyObject *t_PythonWeatherModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonWeatherModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonWeatherModel_init_(t_PythonWeatherModel *self, PyObject *args, PyObject *kwds)
          {
            PythonWeatherModel object((jobject) NULL);

            INT_CALL(object = PythonWeatherModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonWeatherModel_finalize(t_PythonWeatherModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonWeatherModel_pythonExtension(t_PythonWeatherModel *self, PyObject *args)
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

          static void JNICALL t_PythonWeatherModel_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonWeatherModel::mids$[PythonWeatherModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonWeatherModel::mids$[PythonWeatherModel::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonWeatherModel_weatherParameters1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonWeatherModel::mids$[PythonWeatherModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "weatherParameters", "dO", (double) a0, o1);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonWeatherModel_get__self(t_PythonWeatherModel *self, void *data)
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
#include "org/hipparchus/util/KthSelector.h"
#include "org/hipparchus/util/PivotingStrategy.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *KthSelector::class$ = NULL;
      jmethodID *KthSelector::mids$ = NULL;
      bool KthSelector::live$ = false;

      jclass KthSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/KthSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d6c8260e9faaacc1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/PivotingStrategy;)V");
          mids$[mid_getPivotingStrategy_ba4eca3a4b36ce9e] = env->getMethodID(cls, "getPivotingStrategy", "()Lorg/hipparchus/util/PivotingStrategy;");
          mids$[mid_select_02d177e13ca362af] = env->getMethodID(cls, "select", "([D[II)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      KthSelector::KthSelector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      KthSelector::KthSelector(const ::org::hipparchus::util::PivotingStrategy & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d6c8260e9faaacc1, a0.this$)) {}

      ::org::hipparchus::util::PivotingStrategy KthSelector::getPivotingStrategy() const
      {
        return ::org::hipparchus::util::PivotingStrategy(env->callObjectMethod(this$, mids$[mid_getPivotingStrategy_ba4eca3a4b36ce9e]));
      }

      jdouble KthSelector::select(const JArray< jdouble > & a0, const JArray< jint > & a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_select_02d177e13ca362af], a0.this$, a1.this$, a2);
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
      static PyObject *t_KthSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_KthSelector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_KthSelector_init_(t_KthSelector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_KthSelector_getPivotingStrategy(t_KthSelector *self);
      static PyObject *t_KthSelector_select(t_KthSelector *self, PyObject *args);
      static PyObject *t_KthSelector_get__pivotingStrategy(t_KthSelector *self, void *data);
      static PyGetSetDef t_KthSelector__fields_[] = {
        DECLARE_GET_FIELD(t_KthSelector, pivotingStrategy),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_KthSelector__methods_[] = {
        DECLARE_METHOD(t_KthSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KthSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KthSelector, getPivotingStrategy, METH_NOARGS),
        DECLARE_METHOD(t_KthSelector, select, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(KthSelector)[] = {
        { Py_tp_methods, t_KthSelector__methods_ },
        { Py_tp_init, (void *) t_KthSelector_init_ },
        { Py_tp_getset, t_KthSelector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(KthSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(KthSelector, t_KthSelector, KthSelector);

      void t_KthSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(KthSelector), &PY_TYPE_DEF(KthSelector), module, "KthSelector", 0);
      }

      void t_KthSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(KthSelector), "class_", make_descriptor(KthSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KthSelector), "wrapfn_", make_descriptor(t_KthSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KthSelector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_KthSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, KthSelector::initializeClass, 1)))
          return NULL;
        return t_KthSelector::wrap_Object(KthSelector(((t_KthSelector *) arg)->object.this$));
      }
      static PyObject *t_KthSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, KthSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_KthSelector_init_(t_KthSelector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            KthSelector object((jobject) NULL);

            INT_CALL(object = KthSelector());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::hipparchus::util::PivotingStrategy a0((jobject) NULL);
            PyTypeObject **p0;
            KthSelector object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::util::PivotingStrategy::initializeClass, &a0, &p0, ::org::hipparchus::util::t_PivotingStrategy::parameters_))
            {
              INT_CALL(object = KthSelector(a0));
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

      static PyObject *t_KthSelector_getPivotingStrategy(t_KthSelector *self)
      {
        ::org::hipparchus::util::PivotingStrategy result((jobject) NULL);
        OBJ_CALL(result = self->object.getPivotingStrategy());
        return ::org::hipparchus::util::t_PivotingStrategy::wrap_Object(result);
      }

      static PyObject *t_KthSelector_select(t_KthSelector *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jint > a1((jobject) NULL);
        jint a2;
        jdouble result;

        if (!parseArgs(args, "[D[II", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.select(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "select", args);
        return NULL;
      }

      static PyObject *t_KthSelector_get__pivotingStrategy(t_KthSelector *self, void *data)
      {
        ::org::hipparchus::util::PivotingStrategy value((jobject) NULL);
        OBJ_CALL(value = self->object.getPivotingStrategy());
        return ::org::hipparchus::util::t_PivotingStrategy::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/AbstractEvaluation.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *AbstractEvaluation::class$ = NULL;
            jmethodID *AbstractEvaluation::mids$ = NULL;
            bool AbstractEvaluation::live$ = false;

            jclass AbstractEvaluation::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/AbstractEvaluation");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getChiSquare_b74f83833fdad017] = env->getMethodID(cls, "getChiSquare", "()D");
                mids$[mid_getCost_b74f83833fdad017] = env->getMethodID(cls, "getCost", "()D");
                mids$[mid_getCovariances_f5dd9d6021dc9dae] = env->getMethodID(cls, "getCovariances", "(D)Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_getRMS_b74f83833fdad017] = env->getMethodID(cls, "getRMS", "()D");
                mids$[mid_getReducedChiSquare_2afcbc21f4e57ab2] = env->getMethodID(cls, "getReducedChiSquare", "(I)D");
                mids$[mid_getSigma_0af7505d8931441d] = env->getMethodID(cls, "getSigma", "(D)Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractEvaluation::AbstractEvaluation(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

            jdouble AbstractEvaluation::getChiSquare() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getChiSquare_b74f83833fdad017]);
            }

            jdouble AbstractEvaluation::getCost() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCost_b74f83833fdad017]);
            }

            ::org::hipparchus::linear::RealMatrix AbstractEvaluation::getCovariances(jdouble a0) const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariances_f5dd9d6021dc9dae], a0));
            }

            jdouble AbstractEvaluation::getRMS() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRMS_b74f83833fdad017]);
            }

            jdouble AbstractEvaluation::getReducedChiSquare(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getReducedChiSquare_2afcbc21f4e57ab2], a0);
            }

            ::org::hipparchus::linear::RealVector AbstractEvaluation::getSigma(jdouble a0) const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSigma_0af7505d8931441d], a0));
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
            static PyObject *t_AbstractEvaluation_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractEvaluation_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractEvaluation_init_(t_AbstractEvaluation *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractEvaluation_getChiSquare(t_AbstractEvaluation *self);
            static PyObject *t_AbstractEvaluation_getCost(t_AbstractEvaluation *self);
            static PyObject *t_AbstractEvaluation_getCovariances(t_AbstractEvaluation *self, PyObject *arg);
            static PyObject *t_AbstractEvaluation_getRMS(t_AbstractEvaluation *self);
            static PyObject *t_AbstractEvaluation_getReducedChiSquare(t_AbstractEvaluation *self, PyObject *arg);
            static PyObject *t_AbstractEvaluation_getSigma(t_AbstractEvaluation *self, PyObject *arg);
            static PyObject *t_AbstractEvaluation_get__chiSquare(t_AbstractEvaluation *self, void *data);
            static PyObject *t_AbstractEvaluation_get__cost(t_AbstractEvaluation *self, void *data);
            static PyObject *t_AbstractEvaluation_get__rMS(t_AbstractEvaluation *self, void *data);
            static PyGetSetDef t_AbstractEvaluation__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractEvaluation, chiSquare),
              DECLARE_GET_FIELD(t_AbstractEvaluation, cost),
              DECLARE_GET_FIELD(t_AbstractEvaluation, rMS),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractEvaluation__methods_[] = {
              DECLARE_METHOD(t_AbstractEvaluation, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractEvaluation, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractEvaluation, getChiSquare, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEvaluation, getCost, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEvaluation, getCovariances, METH_O),
              DECLARE_METHOD(t_AbstractEvaluation, getRMS, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEvaluation, getReducedChiSquare, METH_O),
              DECLARE_METHOD(t_AbstractEvaluation, getSigma, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractEvaluation)[] = {
              { Py_tp_methods, t_AbstractEvaluation__methods_ },
              { Py_tp_init, (void *) t_AbstractEvaluation_init_ },
              { Py_tp_getset, t_AbstractEvaluation__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractEvaluation)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractEvaluation, t_AbstractEvaluation, AbstractEvaluation);

            void t_AbstractEvaluation::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractEvaluation), &PY_TYPE_DEF(AbstractEvaluation), module, "AbstractEvaluation", 0);
            }

            void t_AbstractEvaluation::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEvaluation), "class_", make_descriptor(AbstractEvaluation::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEvaluation), "wrapfn_", make_descriptor(t_AbstractEvaluation::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEvaluation), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractEvaluation_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractEvaluation::initializeClass, 1)))
                return NULL;
              return t_AbstractEvaluation::wrap_Object(AbstractEvaluation(((t_AbstractEvaluation *) arg)->object.this$));
            }
            static PyObject *t_AbstractEvaluation_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractEvaluation::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractEvaluation_init_(t_AbstractEvaluation *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              AbstractEvaluation object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = AbstractEvaluation(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractEvaluation_getChiSquare(t_AbstractEvaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getChiSquare());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEvaluation_getCost(t_AbstractEvaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCost());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEvaluation_getCovariances(t_AbstractEvaluation *self, PyObject *arg)
            {
              jdouble a0;
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getCovariances(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCovariances", arg);
              return NULL;
            }

            static PyObject *t_AbstractEvaluation_getRMS(t_AbstractEvaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRMS());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEvaluation_getReducedChiSquare(t_AbstractEvaluation *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getReducedChiSquare(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getReducedChiSquare", arg);
              return NULL;
            }

            static PyObject *t_AbstractEvaluation_getSigma(t_AbstractEvaluation *self, PyObject *arg)
            {
              jdouble a0;
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getSigma(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getSigma", arg);
              return NULL;
            }

            static PyObject *t_AbstractEvaluation_get__chiSquare(t_AbstractEvaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getChiSquare());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractEvaluation_get__cost(t_AbstractEvaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCost());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractEvaluation_get__rMS(t_AbstractEvaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRMS());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ITRFVersionLoader.h"
#include "org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ITRFVersionLoader::class$ = NULL;
      jmethodID *ITRFVersionLoader::mids$ = NULL;
      bool ITRFVersionLoader::live$ = false;
      ::java::lang::String *ITRFVersionLoader::SUPPORTED_NAMES = NULL;

      jclass ITRFVersionLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ITRFVersionLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_0343d25c5af74eca] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_getConfiguration_c175c26b8f14b277] = env->getMethodID(cls, "getConfiguration", "(Ljava/lang/String;I)Lorg/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "SUPPORTED_NAMES", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ITRFVersionLoader::ITRFVersionLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      ITRFVersionLoader::ITRFVersionLoader(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

      ITRFVersionLoader::ITRFVersionLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0343d25c5af74eca, a0.this$, a1.this$)) {}

      ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration ITRFVersionLoader::getConfiguration(const ::java::lang::String & a0, jint a1) const
      {
        return ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration(env->callObjectMethod(this$, mids$[mid_getConfiguration_c175c26b8f14b277], a0.this$, a1));
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
      static PyObject *t_ITRFVersionLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersionLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ITRFVersionLoader_init_(t_ITRFVersionLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ITRFVersionLoader_getConfiguration(t_ITRFVersionLoader *self, PyObject *args);

      static PyMethodDef t_ITRFVersionLoader__methods_[] = {
        DECLARE_METHOD(t_ITRFVersionLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersionLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersionLoader, getConfiguration, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ITRFVersionLoader)[] = {
        { Py_tp_methods, t_ITRFVersionLoader__methods_ },
        { Py_tp_init, (void *) t_ITRFVersionLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ITRFVersionLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ITRFVersionLoader, t_ITRFVersionLoader, ITRFVersionLoader);

      void t_ITRFVersionLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(ITRFVersionLoader), &PY_TYPE_DEF(ITRFVersionLoader), module, "ITRFVersionLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "ITRFVersionConfiguration", make_descriptor(&PY_TYPE_DEF(ITRFVersionLoader$ITRFVersionConfiguration)));
      }

      void t_ITRFVersionLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "class_", make_descriptor(ITRFVersionLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "wrapfn_", make_descriptor(t_ITRFVersionLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "boxfn_", make_descriptor(boxObject));
        env->getClass(ITRFVersionLoader::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "SUPPORTED_NAMES", make_descriptor(j2p(*ITRFVersionLoader::SUPPORTED_NAMES)));
      }

      static PyObject *t_ITRFVersionLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ITRFVersionLoader::initializeClass, 1)))
          return NULL;
        return t_ITRFVersionLoader::wrap_Object(ITRFVersionLoader(((t_ITRFVersionLoader *) arg)->object.this$));
      }
      static PyObject *t_ITRFVersionLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ITRFVersionLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ITRFVersionLoader_init_(t_ITRFVersionLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ITRFVersionLoader object((jobject) NULL);

            INT_CALL(object = ITRFVersionLoader());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ITRFVersionLoader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = ITRFVersionLoader(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            ITRFVersionLoader object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ITRFVersionLoader(a0, a1));
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

      static PyObject *t_ITRFVersionLoader_getConfiguration(t_ITRFVersionLoader *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        jint a1;
        ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration result((jobject) NULL);

        if (!parseArgs(args, "sI", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getConfiguration(a0, a1));
          return ::org::orekit::frames::t_ITRFVersionLoader$ITRFVersionConfiguration::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getConfiguration", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/JacobiPreconditioner.h"
#include "org/hipparchus/linear/JacobiPreconditioner.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *JacobiPreconditioner::class$ = NULL;
      jmethodID *JacobiPreconditioner::mids$ = NULL;
      bool JacobiPreconditioner::live$ = false;

      jclass JacobiPreconditioner::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/JacobiPreconditioner");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2808bdf785b578a3] = env->getMethodID(cls, "<init>", "([DZ)V");
          mids$[mid_create_f81e8324397286d3] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/linear/RealLinearOperator;)Lorg/hipparchus/linear/JacobiPreconditioner;");
          mids$[mid_getColumnDimension_55546ef6a647f39b] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getRowDimension_55546ef6a647f39b] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_operate_d5f1d017fd25113b] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_sqrt_68c74764af0bb4df] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/linear/RealLinearOperator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JacobiPreconditioner::JacobiPreconditioner(const JArray< jdouble > & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2808bdf785b578a3, a0.this$, a1)) {}

      JacobiPreconditioner JacobiPreconditioner::create(const ::org::hipparchus::linear::RealLinearOperator & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JacobiPreconditioner(env->callStaticObjectMethod(cls, mids$[mid_create_f81e8324397286d3], a0.this$));
      }

      jint JacobiPreconditioner::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_55546ef6a647f39b]);
      }

      jint JacobiPreconditioner::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_55546ef6a647f39b]);
      }

      ::org::hipparchus::linear::RealVector JacobiPreconditioner::operate(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operate_d5f1d017fd25113b], a0.this$));
      }

      ::org::hipparchus::linear::RealLinearOperator JacobiPreconditioner::sqrt() const
      {
        return ::org::hipparchus::linear::RealLinearOperator(env->callObjectMethod(this$, mids$[mid_sqrt_68c74764af0bb4df]));
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
      static PyObject *t_JacobiPreconditioner_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JacobiPreconditioner_instance_(PyTypeObject *type, PyObject *arg);
      static int t_JacobiPreconditioner_init_(t_JacobiPreconditioner *self, PyObject *args, PyObject *kwds);
      static PyObject *t_JacobiPreconditioner_create(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JacobiPreconditioner_getColumnDimension(t_JacobiPreconditioner *self);
      static PyObject *t_JacobiPreconditioner_getRowDimension(t_JacobiPreconditioner *self);
      static PyObject *t_JacobiPreconditioner_operate(t_JacobiPreconditioner *self, PyObject *arg);
      static PyObject *t_JacobiPreconditioner_sqrt(t_JacobiPreconditioner *self);
      static PyObject *t_JacobiPreconditioner_get__columnDimension(t_JacobiPreconditioner *self, void *data);
      static PyObject *t_JacobiPreconditioner_get__rowDimension(t_JacobiPreconditioner *self, void *data);
      static PyGetSetDef t_JacobiPreconditioner__fields_[] = {
        DECLARE_GET_FIELD(t_JacobiPreconditioner, columnDimension),
        DECLARE_GET_FIELD(t_JacobiPreconditioner, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JacobiPreconditioner__methods_[] = {
        DECLARE_METHOD(t_JacobiPreconditioner, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JacobiPreconditioner, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JacobiPreconditioner, create, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JacobiPreconditioner, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_JacobiPreconditioner, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_JacobiPreconditioner, operate, METH_O),
        DECLARE_METHOD(t_JacobiPreconditioner, sqrt, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JacobiPreconditioner)[] = {
        { Py_tp_methods, t_JacobiPreconditioner__methods_ },
        { Py_tp_init, (void *) t_JacobiPreconditioner_init_ },
        { Py_tp_getset, t_JacobiPreconditioner__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JacobiPreconditioner)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(JacobiPreconditioner, t_JacobiPreconditioner, JacobiPreconditioner);

      void t_JacobiPreconditioner::install(PyObject *module)
      {
        installType(&PY_TYPE(JacobiPreconditioner), &PY_TYPE_DEF(JacobiPreconditioner), module, "JacobiPreconditioner", 0);
      }

      void t_JacobiPreconditioner::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPreconditioner), "class_", make_descriptor(JacobiPreconditioner::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPreconditioner), "wrapfn_", make_descriptor(t_JacobiPreconditioner::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPreconditioner), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_JacobiPreconditioner_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JacobiPreconditioner::initializeClass, 1)))
          return NULL;
        return t_JacobiPreconditioner::wrap_Object(JacobiPreconditioner(((t_JacobiPreconditioner *) arg)->object.this$));
      }
      static PyObject *t_JacobiPreconditioner_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JacobiPreconditioner::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_JacobiPreconditioner_init_(t_JacobiPreconditioner *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        jboolean a1;
        JacobiPreconditioner object((jobject) NULL);

        if (!parseArgs(args, "[DZ", &a0, &a1))
        {
          INT_CALL(object = JacobiPreconditioner(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_JacobiPreconditioner_create(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
        JacobiPreconditioner result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealLinearOperator::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::JacobiPreconditioner::create(a0));
          return t_JacobiPreconditioner::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", arg);
        return NULL;
      }

      static PyObject *t_JacobiPreconditioner_getColumnDimension(t_JacobiPreconditioner *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_JacobiPreconditioner_getRowDimension(t_JacobiPreconditioner *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_JacobiPreconditioner_operate(t_JacobiPreconditioner *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "operate", arg);
        return NULL;
      }

      static PyObject *t_JacobiPreconditioner_sqrt(t_JacobiPreconditioner *self)
      {
        ::org::hipparchus::linear::RealLinearOperator result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return ::org::hipparchus::linear::t_RealLinearOperator::wrap_Object(result);
      }

      static PyObject *t_JacobiPreconditioner_get__columnDimension(t_JacobiPreconditioner *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_JacobiPreconditioner_get__rowDimension(t_JacobiPreconditioner *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {

        ::java::lang::Class *NaNStrategy::class$ = NULL;
        jmethodID *NaNStrategy::mids$ = NULL;
        bool NaNStrategy::live$ = false;
        NaNStrategy *NaNStrategy::FAILED = NULL;
        NaNStrategy *NaNStrategy::FIXED = NULL;
        NaNStrategy *NaNStrategy::MAXIMAL = NULL;
        NaNStrategy *NaNStrategy::MINIMAL = NULL;
        NaNStrategy *NaNStrategy::REMOVED = NULL;

        jclass NaNStrategy::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/ranking/NaNStrategy");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_0505cd0bd306e8c5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/ranking/NaNStrategy;");
            mids$[mid_values_8f7b764ea282c040] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/ranking/NaNStrategy;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            FAILED = new NaNStrategy(env->getStaticObjectField(cls, "FAILED", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            FIXED = new NaNStrategy(env->getStaticObjectField(cls, "FIXED", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            MAXIMAL = new NaNStrategy(env->getStaticObjectField(cls, "MAXIMAL", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            MINIMAL = new NaNStrategy(env->getStaticObjectField(cls, "MINIMAL", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            REMOVED = new NaNStrategy(env->getStaticObjectField(cls, "REMOVED", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NaNStrategy NaNStrategy::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return NaNStrategy(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0505cd0bd306e8c5], a0.this$));
        }

        JArray< NaNStrategy > NaNStrategy::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< NaNStrategy >(env->callStaticObjectMethod(cls, mids$[mid_values_8f7b764ea282c040]));
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
      namespace ranking {
        static PyObject *t_NaNStrategy_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NaNStrategy_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NaNStrategy_of_(t_NaNStrategy *self, PyObject *args);
        static PyObject *t_NaNStrategy_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_NaNStrategy_values(PyTypeObject *type);
        static PyObject *t_NaNStrategy_get__parameters_(t_NaNStrategy *self, void *data);
        static PyGetSetDef t_NaNStrategy__fields_[] = {
          DECLARE_GET_FIELD(t_NaNStrategy, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NaNStrategy__methods_[] = {
          DECLARE_METHOD(t_NaNStrategy, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NaNStrategy, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NaNStrategy, of_, METH_VARARGS),
          DECLARE_METHOD(t_NaNStrategy, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_NaNStrategy, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NaNStrategy)[] = {
          { Py_tp_methods, t_NaNStrategy__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_NaNStrategy__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NaNStrategy)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(NaNStrategy, t_NaNStrategy, NaNStrategy);
        PyObject *t_NaNStrategy::wrap_Object(const NaNStrategy& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NaNStrategy::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NaNStrategy *self = (t_NaNStrategy *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NaNStrategy::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NaNStrategy::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NaNStrategy *self = (t_NaNStrategy *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NaNStrategy::install(PyObject *module)
        {
          installType(&PY_TYPE(NaNStrategy), &PY_TYPE_DEF(NaNStrategy), module, "NaNStrategy", 0);
        }

        void t_NaNStrategy::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "class_", make_descriptor(NaNStrategy::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "wrapfn_", make_descriptor(t_NaNStrategy::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "boxfn_", make_descriptor(boxObject));
          env->getClass(NaNStrategy::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "FAILED", make_descriptor(t_NaNStrategy::wrap_Object(*NaNStrategy::FAILED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "FIXED", make_descriptor(t_NaNStrategy::wrap_Object(*NaNStrategy::FIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "MAXIMAL", make_descriptor(t_NaNStrategy::wrap_Object(*NaNStrategy::MAXIMAL)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "MINIMAL", make_descriptor(t_NaNStrategy::wrap_Object(*NaNStrategy::MINIMAL)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "REMOVED", make_descriptor(t_NaNStrategy::wrap_Object(*NaNStrategy::REMOVED)));
        }

        static PyObject *t_NaNStrategy_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NaNStrategy::initializeClass, 1)))
            return NULL;
          return t_NaNStrategy::wrap_Object(NaNStrategy(((t_NaNStrategy *) arg)->object.this$));
        }
        static PyObject *t_NaNStrategy_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NaNStrategy::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NaNStrategy_of_(t_NaNStrategy *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_NaNStrategy_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          NaNStrategy result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::ranking::NaNStrategy::valueOf(a0));
            return t_NaNStrategy::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_NaNStrategy_values(PyTypeObject *type)
        {
          JArray< NaNStrategy > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::stat::ranking::NaNStrategy::values());
          return JArray<jobject>(result.this$).wrap(t_NaNStrategy::wrap_jobject);
        }
        static PyObject *t_NaNStrategy_get__parameters_(t_NaNStrategy *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldApsideDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldApsideDetector::class$ = NULL;
        jmethodID *FieldApsideDetector::mids$ = NULL;
        bool FieldApsideDetector::live$ = false;

        jclass FieldApsideDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldApsideDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_01b80e5fc8224f27] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
            mids$[mid_init$_5e1983e19d92fe51] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;)V");
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_create_b191d53830706160] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldApsideDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldApsideDetector::FieldApsideDetector(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_01b80e5fc8224f27, a0.this$)) {}

        FieldApsideDetector::FieldApsideDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::orbits::FieldOrbit & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_5e1983e19d92fe51, a0.this$, a1.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldApsideDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2203631097e94c79], a0.this$));
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
        static PyObject *t_FieldApsideDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldApsideDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldApsideDetector_of_(t_FieldApsideDetector *self, PyObject *args);
        static int t_FieldApsideDetector_init_(t_FieldApsideDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldApsideDetector_g(t_FieldApsideDetector *self, PyObject *args);
        static PyObject *t_FieldApsideDetector_get__parameters_(t_FieldApsideDetector *self, void *data);
        static PyGetSetDef t_FieldApsideDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldApsideDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldApsideDetector__methods_[] = {
          DECLARE_METHOD(t_FieldApsideDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldApsideDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldApsideDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldApsideDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldApsideDetector)[] = {
          { Py_tp_methods, t_FieldApsideDetector__methods_ },
          { Py_tp_init, (void *) t_FieldApsideDetector_init_ },
          { Py_tp_getset, t_FieldApsideDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldApsideDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldApsideDetector, t_FieldApsideDetector, FieldApsideDetector);
        PyObject *t_FieldApsideDetector::wrap_Object(const FieldApsideDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldApsideDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldApsideDetector *self = (t_FieldApsideDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldApsideDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldApsideDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldApsideDetector *self = (t_FieldApsideDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldApsideDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldApsideDetector), &PY_TYPE_DEF(FieldApsideDetector), module, "FieldApsideDetector", 0);
        }

        void t_FieldApsideDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldApsideDetector), "class_", make_descriptor(FieldApsideDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldApsideDetector), "wrapfn_", make_descriptor(t_FieldApsideDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldApsideDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldApsideDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldApsideDetector::initializeClass, 1)))
            return NULL;
          return t_FieldApsideDetector::wrap_Object(FieldApsideDetector(((t_FieldApsideDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldApsideDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldApsideDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldApsideDetector_of_(t_FieldApsideDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldApsideDetector_init_(t_FieldApsideDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              FieldApsideDetector object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
              {
                INT_CALL(object = FieldApsideDetector(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
              PyTypeObject **p1;
              FieldApsideDetector object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_))
              {
                INT_CALL(object = FieldApsideDetector(a0, a1));
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

        static PyObject *t_FieldApsideDetector_g(t_FieldApsideDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldApsideDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_FieldApsideDetector_get__parameters_(t_FieldApsideDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SparseFieldMatrix.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SparseFieldMatrix::class$ = NULL;
      jmethodID *SparseFieldMatrix::mids$ = NULL;
      bool SparseFieldMatrix::live$ = false;

      jclass SparseFieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SparseFieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_02ab84aa7626616d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_3c04247304967ec8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_init$_b6c946d1cbf160f0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
          mids$[mid_addToEntry_c2695120fce254e7] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_copy_81d49643ce3a3c0b] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createMatrix_add2e370542edc2f] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnDimension_55546ef6a647f39b] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getEntry_d0f2803baa5859d6] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowDimension_55546ef6a647f39b] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_multiplyEntry_c2695120fce254e7] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_multiplyTransposed_e74c5d5fdc2ea025] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_setEntry_c2695120fce254e7] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_transposeMultiply_e74c5d5fdc2ea025] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SparseFieldMatrix::SparseFieldMatrix(const ::org::hipparchus::Field & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_02ab84aa7626616d, a0.this$)) {}

      SparseFieldMatrix::SparseFieldMatrix(const ::org::hipparchus::linear::FieldMatrix & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_3c04247304967ec8, a0.this$)) {}

      SparseFieldMatrix::SparseFieldMatrix(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_b6c946d1cbf160f0, a0.this$, a1, a2)) {}

      void SparseFieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_c2695120fce254e7], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldMatrix::copy() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_81d49643ce3a3c0b]));
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_add2e370542edc2f], a0, a1));
      }

      jint SparseFieldMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_55546ef6a647f39b]);
      }

      ::org::hipparchus::FieldElement SparseFieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_d0f2803baa5859d6], a0, a1));
      }

      jint SparseFieldMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_55546ef6a647f39b]);
      }

      void SparseFieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_c2695120fce254e7], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldMatrix::multiplyTransposed(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_e74c5d5fdc2ea025], a0.this$));
      }

      void SparseFieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_c2695120fce254e7], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldMatrix::transposeMultiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_e74c5d5fdc2ea025], a0.this$));
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
      static PyObject *t_SparseFieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseFieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseFieldMatrix_of_(t_SparseFieldMatrix *self, PyObject *args);
      static int t_SparseFieldMatrix_init_(t_SparseFieldMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SparseFieldMatrix_addToEntry(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_copy(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_createMatrix(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_getColumnDimension(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_getEntry(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_getRowDimension(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_multiplyEntry(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_multiplyTransposed(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_setEntry(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_transposeMultiply(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_get__columnDimension(t_SparseFieldMatrix *self, void *data);
      static PyObject *t_SparseFieldMatrix_get__rowDimension(t_SparseFieldMatrix *self, void *data);
      static PyObject *t_SparseFieldMatrix_get__parameters_(t_SparseFieldMatrix *self, void *data);
      static PyGetSetDef t_SparseFieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_SparseFieldMatrix, columnDimension),
        DECLARE_GET_FIELD(t_SparseFieldMatrix, rowDimension),
        DECLARE_GET_FIELD(t_SparseFieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SparseFieldMatrix__methods_[] = {
        DECLARE_METHOD(t_SparseFieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseFieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseFieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, transposeMultiply, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SparseFieldMatrix)[] = {
        { Py_tp_methods, t_SparseFieldMatrix__methods_ },
        { Py_tp_init, (void *) t_SparseFieldMatrix_init_ },
        { Py_tp_getset, t_SparseFieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SparseFieldMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractFieldMatrix),
        NULL
      };

      DEFINE_TYPE(SparseFieldMatrix, t_SparseFieldMatrix, SparseFieldMatrix);
      PyObject *t_SparseFieldMatrix::wrap_Object(const SparseFieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SparseFieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SparseFieldMatrix *self = (t_SparseFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SparseFieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SparseFieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SparseFieldMatrix *self = (t_SparseFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SparseFieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(SparseFieldMatrix), &PY_TYPE_DEF(SparseFieldMatrix), module, "SparseFieldMatrix", 0);
      }

      void t_SparseFieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldMatrix), "class_", make_descriptor(SparseFieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldMatrix), "wrapfn_", make_descriptor(t_SparseFieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SparseFieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SparseFieldMatrix::initializeClass, 1)))
          return NULL;
        return t_SparseFieldMatrix::wrap_Object(SparseFieldMatrix(((t_SparseFieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_SparseFieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SparseFieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SparseFieldMatrix_of_(t_SparseFieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SparseFieldMatrix_init_(t_SparseFieldMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            SparseFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = SparseFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            SparseFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              INT_CALL(object = SparseFieldMatrix(a0));
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
            SparseFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = SparseFieldMatrix(a0, a1, a2));
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

      static PyObject *t_SparseFieldMatrix_addToEntry(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_copy(t_SparseFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_createMatrix(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_getColumnDimension(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_getEntry(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_getRowDimension(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_multiplyEntry(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_multiplyTransposed(t_SparseFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiplyTransposed(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_setEntry(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_transposeMultiply(t_SparseFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.transposeMultiply(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }
      static PyObject *t_SparseFieldMatrix_get__parameters_(t_SparseFieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_SparseFieldMatrix_get__columnDimension(t_SparseFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SparseFieldMatrix_get__rowDimension(t_SparseFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/ZipfDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *ZipfDistribution::class$ = NULL;
        jmethodID *ZipfDistribution::mids$ = NULL;
        bool ZipfDistribution::live$ = false;

        jclass ZipfDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/ZipfDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
            mids$[mid_cumulativeProbability_2afcbc21f4e57ab2] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getExponent_b74f83833fdad017] = env->getMethodID(cls, "getExponent", "()D");
            mids$[mid_getNumberOfElements_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfElements", "()I");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_55546ef6a647f39b] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_55546ef6a647f39b] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_2afcbc21f4e57ab2] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_2afcbc21f4e57ab2] = env->getMethodID(cls, "probability", "(I)D");
            mids$[mid_calculateNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "calculateNumericalMean", "()D");
            mids$[mid_calculateNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "calculateNumericalVariance", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ZipfDistribution::ZipfDistribution(jint a0, jdouble a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}

        jdouble ZipfDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_2afcbc21f4e57ab2], a0);
        }

        jdouble ZipfDistribution::getExponent() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getExponent_b74f83833fdad017]);
        }

        jint ZipfDistribution::getNumberOfElements() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfElements_55546ef6a647f39b]);
        }

        jdouble ZipfDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble ZipfDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jint ZipfDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_55546ef6a647f39b]);
        }

        jint ZipfDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_55546ef6a647f39b]);
        }

        jboolean ZipfDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        jdouble ZipfDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_2afcbc21f4e57ab2], a0);
        }

        jdouble ZipfDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_2afcbc21f4e57ab2], a0);
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
      namespace discrete {
        static PyObject *t_ZipfDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ZipfDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ZipfDistribution_init_(t_ZipfDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ZipfDistribution_cumulativeProbability(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_getExponent(t_ZipfDistribution *self);
        static PyObject *t_ZipfDistribution_getNumberOfElements(t_ZipfDistribution *self);
        static PyObject *t_ZipfDistribution_getNumericalMean(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_getNumericalVariance(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_getSupportLowerBound(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_getSupportUpperBound(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_isSupportConnected(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_logProbability(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_probability(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_get__exponent(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__numberOfElements(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__numericalMean(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__numericalVariance(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__supportConnected(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__supportLowerBound(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__supportUpperBound(t_ZipfDistribution *self, void *data);
        static PyGetSetDef t_ZipfDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ZipfDistribution, exponent),
          DECLARE_GET_FIELD(t_ZipfDistribution, numberOfElements),
          DECLARE_GET_FIELD(t_ZipfDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ZipfDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ZipfDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ZipfDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ZipfDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ZipfDistribution__methods_[] = {
          DECLARE_METHOD(t_ZipfDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ZipfDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ZipfDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_ZipfDistribution, getNumberOfElements, METH_NOARGS),
          DECLARE_METHOD(t_ZipfDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ZipfDistribution)[] = {
          { Py_tp_methods, t_ZipfDistribution__methods_ },
          { Py_tp_init, (void *) t_ZipfDistribution_init_ },
          { Py_tp_getset, t_ZipfDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ZipfDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(ZipfDistribution, t_ZipfDistribution, ZipfDistribution);

        void t_ZipfDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ZipfDistribution), &PY_TYPE_DEF(ZipfDistribution), module, "ZipfDistribution", 0);
        }

        void t_ZipfDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ZipfDistribution), "class_", make_descriptor(ZipfDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ZipfDistribution), "wrapfn_", make_descriptor(t_ZipfDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ZipfDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ZipfDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ZipfDistribution::initializeClass, 1)))
            return NULL;
          return t_ZipfDistribution::wrap_Object(ZipfDistribution(((t_ZipfDistribution *) arg)->object.this$));
        }
        static PyObject *t_ZipfDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ZipfDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ZipfDistribution_init_(t_ZipfDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          ZipfDistribution object((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            INT_CALL(object = ZipfDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ZipfDistribution_cumulativeProbability(t_ZipfDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ZipfDistribution_getExponent(t_ZipfDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getExponent());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ZipfDistribution_getNumberOfElements(t_ZipfDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfElements());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ZipfDistribution_getNumericalMean(t_ZipfDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ZipfDistribution_getNumericalVariance(t_ZipfDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ZipfDistribution_getSupportLowerBound(t_ZipfDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ZipfDistribution_getSupportUpperBound(t_ZipfDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ZipfDistribution_isSupportConnected(t_ZipfDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ZipfDistribution_logProbability(t_ZipfDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_ZipfDistribution_probability(t_ZipfDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_ZipfDistribution_get__exponent(t_ZipfDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getExponent());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ZipfDistribution_get__numberOfElements(t_ZipfDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfElements());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_ZipfDistribution_get__numericalMean(t_ZipfDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ZipfDistribution_get__numericalVariance(t_ZipfDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ZipfDistribution_get__supportConnected(t_ZipfDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ZipfDistribution_get__supportLowerBound(t_ZipfDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_ZipfDistribution_get__supportUpperBound(t_ZipfDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/PrintStream.h"
#include "java/util/Locale.h"
#include "java/lang/CharSequence.h"
#include "java/io/OutputStream.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/io/File.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/PrintStream.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *PrintStream::class$ = NULL;
    jmethodID *PrintStream::mids$ = NULL;
    bool PrintStream::live$ = false;

    jclass PrintStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/PrintStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7e1d51614d5d6a43] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
        mids$[mid_init$_9601da1efb310931] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_6e63b60ae073cb68] = env->getMethodID(cls, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
        mids$[mid_init$_a627ad9c5959309d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_init$_41d3e7c3eb1b0829] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;Z)V");
        mids$[mid_init$_595843ddec8a90ca] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;ZLjava/lang/String;)V");
        mids$[mid_append_b1b6ed812f278d3f] = env->getMethodID(cls, "append", "(C)Ljava/io/PrintStream;");
        mids$[mid_append_a93aca03ab265567] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/io/PrintStream;");
        mids$[mid_append_4930f6548c58c9a7] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/io/PrintStream;");
        mids$[mid_checkError_9ab94ac1dc23b105] = env->getMethodID(cls, "checkError", "()Z");
        mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_a1fa5dae97ea5ed2] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_format_bf26a86a1af4f777] = env->getMethodID(cls, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
        mids$[mid_format_d32d82855f8adc41] = env->getMethodID(cls, "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
        mids$[mid_print_dd3f254991df5d48] = env->getMethodID(cls, "print", "([C)V");
        mids$[mid_print_734b91ac30d5f9b4] = env->getMethodID(cls, "print", "(Ljava/lang/String;)V");
        mids$[mid_print_fcb96c98de6fad04] = env->getMethodID(cls, "print", "(Z)V");
        mids$[mid_print_df95ad02f5b4acd9] = env->getMethodID(cls, "print", "(C)V");
        mids$[mid_print_8ba9fe7a847cecad] = env->getMethodID(cls, "print", "(D)V");
        mids$[mid_print_bb7181dc3b1dc22b] = env->getMethodID(cls, "print", "(F)V");
        mids$[mid_print_44ed599e93e8a30c] = env->getMethodID(cls, "print", "(I)V");
        mids$[mid_print_55f3c894852c27a3] = env->getMethodID(cls, "print", "(Ljava/lang/Object;)V");
        mids$[mid_print_3d7dd2314a0dd456] = env->getMethodID(cls, "print", "(J)V");
        mids$[mid_printf_bf26a86a1af4f777] = env->getMethodID(cls, "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
        mids$[mid_printf_d32d82855f8adc41] = env->getMethodID(cls, "printf", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
        mids$[mid_println_a1fa5dae97ea5ed2] = env->getMethodID(cls, "println", "()V");
        mids$[mid_println_dd3f254991df5d48] = env->getMethodID(cls, "println", "([C)V");
        mids$[mid_println_734b91ac30d5f9b4] = env->getMethodID(cls, "println", "(Ljava/lang/String;)V");
        mids$[mid_println_fcb96c98de6fad04] = env->getMethodID(cls, "println", "(Z)V");
        mids$[mid_println_df95ad02f5b4acd9] = env->getMethodID(cls, "println", "(C)V");
        mids$[mid_println_8ba9fe7a847cecad] = env->getMethodID(cls, "println", "(D)V");
        mids$[mid_println_bb7181dc3b1dc22b] = env->getMethodID(cls, "println", "(F)V");
        mids$[mid_println_44ed599e93e8a30c] = env->getMethodID(cls, "println", "(I)V");
        mids$[mid_println_55f3c894852c27a3] = env->getMethodID(cls, "println", "(Ljava/lang/Object;)V");
        mids$[mid_println_3d7dd2314a0dd456] = env->getMethodID(cls, "println", "(J)V");
        mids$[mid_write_44ed599e93e8a30c] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_a9fddc59b07ce512] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_setError_a1fa5dae97ea5ed2] = env->getMethodID(cls, "setError", "()V");
        mids$[mid_clearError_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearError", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    PrintStream::PrintStream(const ::java::io::File & a0) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_7e1d51614d5d6a43, a0.this$)) {}

    PrintStream::PrintStream(const ::java::io::OutputStream & a0) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_9601da1efb310931, a0.this$)) {}

    PrintStream::PrintStream(const ::java::lang::String & a0) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    PrintStream::PrintStream(const ::java::io::File & a0, const ::java::lang::String & a1) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_6e63b60ae073cb68, a0.this$, a1.this$)) {}

    PrintStream::PrintStream(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_a627ad9c5959309d, a0.this$, a1.this$)) {}

    PrintStream::PrintStream(const ::java::io::OutputStream & a0, jboolean a1) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_41d3e7c3eb1b0829, a0.this$, a1)) {}

    PrintStream::PrintStream(const ::java::io::OutputStream & a0, jboolean a1, const ::java::lang::String & a2) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_595843ddec8a90ca, a0.this$, a1, a2.this$)) {}

    PrintStream PrintStream::append(jchar a0) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_append_b1b6ed812f278d3f], a0));
    }

    PrintStream PrintStream::append(const ::java::lang::CharSequence & a0) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_append_a93aca03ab265567], a0.this$));
    }

    PrintStream PrintStream::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_append_4930f6548c58c9a7], a0.this$, a1, a2));
    }

    jboolean PrintStream::checkError() const
    {
      return env->callBooleanMethod(this$, mids$[mid_checkError_9ab94ac1dc23b105]);
    }

    void PrintStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
    }

    void PrintStream::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_a1fa5dae97ea5ed2]);
    }

    PrintStream PrintStream::format(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_format_bf26a86a1af4f777], a0.this$, a1.this$));
    }

    PrintStream PrintStream::format(const ::java::util::Locale & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_format_d32d82855f8adc41], a0.this$, a1.this$, a2.this$));
    }

    void PrintStream::print(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_dd3f254991df5d48], a0.this$);
    }

    void PrintStream::print(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_734b91ac30d5f9b4], a0.this$);
    }

    void PrintStream::print(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_fcb96c98de6fad04], a0);
    }

    void PrintStream::print(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_df95ad02f5b4acd9], a0);
    }

    void PrintStream::print(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_8ba9fe7a847cecad], a0);
    }

    void PrintStream::print(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_bb7181dc3b1dc22b], a0);
    }

    void PrintStream::print(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_44ed599e93e8a30c], a0);
    }

    void PrintStream::print(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_55f3c894852c27a3], a0.this$);
    }

    void PrintStream::print(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_3d7dd2314a0dd456], a0);
    }

    PrintStream PrintStream::printf(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_printf_bf26a86a1af4f777], a0.this$, a1.this$));
    }

    PrintStream PrintStream::printf(const ::java::util::Locale & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_printf_d32d82855f8adc41], a0.this$, a1.this$, a2.this$));
    }

    void PrintStream::println() const
    {
      env->callVoidMethod(this$, mids$[mid_println_a1fa5dae97ea5ed2]);
    }

    void PrintStream::println(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_dd3f254991df5d48], a0.this$);
    }

    void PrintStream::println(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_734b91ac30d5f9b4], a0.this$);
    }

    void PrintStream::println(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_fcb96c98de6fad04], a0);
    }

    void PrintStream::println(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_df95ad02f5b4acd9], a0);
    }

    void PrintStream::println(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_8ba9fe7a847cecad], a0);
    }

    void PrintStream::println(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_bb7181dc3b1dc22b], a0);
    }

    void PrintStream::println(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_44ed599e93e8a30c], a0);
    }

    void PrintStream::println(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_55f3c894852c27a3], a0.this$);
    }

    void PrintStream::println(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_3d7dd2314a0dd456], a0);
    }

    void PrintStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_44ed599e93e8a30c], a0);
    }

    void PrintStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_a9fddc59b07ce512], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_PrintStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_PrintStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_PrintStream_init_(t_PrintStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_PrintStream_append(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_checkError(t_PrintStream *self);
    static PyObject *t_PrintStream_close(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_flush(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_format(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_print(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_printf(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_println(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_write(t_PrintStream *self, PyObject *args);

    static PyMethodDef t_PrintStream__methods_[] = {
      DECLARE_METHOD(t_PrintStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrintStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrintStream, append, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, checkError, METH_NOARGS),
      DECLARE_METHOD(t_PrintStream, close, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, flush, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, format, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, print, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, printf, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, println, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(PrintStream)[] = {
      { Py_tp_methods, t_PrintStream__methods_ },
      { Py_tp_init, (void *) t_PrintStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(PrintStream)[] = {
      &PY_TYPE_DEF(::java::io::FilterOutputStream),
      NULL
    };

    DEFINE_TYPE(PrintStream, t_PrintStream, PrintStream);

    void t_PrintStream::install(PyObject *module)
    {
      installType(&PY_TYPE(PrintStream), &PY_TYPE_DEF(PrintStream), module, "PrintStream", 0);
    }

    void t_PrintStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintStream), "class_", make_descriptor(PrintStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintStream), "wrapfn_", make_descriptor(t_PrintStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_PrintStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, PrintStream::initializeClass, 1)))
        return NULL;
      return t_PrintStream::wrap_Object(PrintStream(((t_PrintStream *) arg)->object.this$));
    }
    static PyObject *t_PrintStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, PrintStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_PrintStream_init_(t_PrintStream *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::File a0((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
          {
            INT_CALL(object = PrintStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::OutputStream a0((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::OutputStream::initializeClass, &a0))
          {
            INT_CALL(object = PrintStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = PrintStream(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::File a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::File::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintStream(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = PrintStream(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::OutputStream a0((jobject) NULL);
          jboolean a1;
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "kZ", ::java::io::OutputStream::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintStream(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          ::java::io::OutputStream a0((jobject) NULL);
          jboolean a1;
          ::java::lang::String a2((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "kZs", ::java::io::OutputStream::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PrintStream(a0, a1, a2));
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

    static PyObject *t_PrintStream_append(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_PrintStream::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_PrintStream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_PrintStream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "append", args);
      return NULL;
    }

    static PyObject *t_PrintStream_checkError(t_PrintStream *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.checkError());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_PrintStream_close(t_PrintStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrintStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_PrintStream_flush(t_PrintStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrintStream), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_PrintStream_format(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.format(a0, a1));
            return t_PrintStream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return t_PrintStream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "format", args);
      return NULL;
    }

    static PyObject *t_PrintStream_print(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jboolean a0;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jchar a0;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jfloat a0;

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "print", args);
      return NULL;
    }

    static PyObject *t_PrintStream_printf(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.printf(a0, a1));
            return t_PrintStream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.printf(a0, a1, a2));
            return t_PrintStream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "printf", args);
      return NULL;
    }

    static PyObject *t_PrintStream_println(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(self->object.println());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jboolean a0;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jchar a0;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jfloat a0;

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "println", args);
      return NULL;
    }

    static PyObject *t_PrintStream_write(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(PrintStream), (PyObject *) self, "write", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PythonGroundReceiverMeasurement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonGroundReceiverMeasurement::class$ = NULL;
        jmethodID *PythonGroundReceiverMeasurement::mids$ = NULL;
        bool PythonGroundReceiverMeasurement::live$ = false;

        jclass PythonGroundReceiverMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonGroundReceiverMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_30a9252c5d1ad83a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;ZLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_theoreticalEvaluation_d598991c5cac8ab0] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonGroundReceiverMeasurement::PythonGroundReceiverMeasurement(const ::org::orekit::estimation::measurements::GroundStation & a0, jboolean a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_30a9252c5d1ad83a, a0.this$, a1, a2.this$, a3, a4, a5, a6.this$)) {}

        void PythonGroundReceiverMeasurement::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonGroundReceiverMeasurement::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonGroundReceiverMeasurement::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        static PyObject *t_PythonGroundReceiverMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonGroundReceiverMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonGroundReceiverMeasurement_of_(t_PythonGroundReceiverMeasurement *self, PyObject *args);
        static int t_PythonGroundReceiverMeasurement_init_(t_PythonGroundReceiverMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonGroundReceiverMeasurement_finalize(t_PythonGroundReceiverMeasurement *self);
        static PyObject *t_PythonGroundReceiverMeasurement_pythonExtension(t_PythonGroundReceiverMeasurement *self, PyObject *args);
        static void JNICALL t_PythonGroundReceiverMeasurement_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonGroundReceiverMeasurement_theoreticalEvaluation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static jobject JNICALL t_PythonGroundReceiverMeasurement_theoreticalEvaluationWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static PyObject *t_PythonGroundReceiverMeasurement_get__self(t_PythonGroundReceiverMeasurement *self, void *data);
        static PyObject *t_PythonGroundReceiverMeasurement_get__parameters_(t_PythonGroundReceiverMeasurement *self, void *data);
        static PyGetSetDef t_PythonGroundReceiverMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_PythonGroundReceiverMeasurement, self),
          DECLARE_GET_FIELD(t_PythonGroundReceiverMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonGroundReceiverMeasurement__methods_[] = {
          DECLARE_METHOD(t_PythonGroundReceiverMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGroundReceiverMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGroundReceiverMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonGroundReceiverMeasurement, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonGroundReceiverMeasurement, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonGroundReceiverMeasurement)[] = {
          { Py_tp_methods, t_PythonGroundReceiverMeasurement__methods_ },
          { Py_tp_init, (void *) t_PythonGroundReceiverMeasurement_init_ },
          { Py_tp_getset, t_PythonGroundReceiverMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonGroundReceiverMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(PythonGroundReceiverMeasurement, t_PythonGroundReceiverMeasurement, PythonGroundReceiverMeasurement);
        PyObject *t_PythonGroundReceiverMeasurement::wrap_Object(const PythonGroundReceiverMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonGroundReceiverMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonGroundReceiverMeasurement *self = (t_PythonGroundReceiverMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonGroundReceiverMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonGroundReceiverMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonGroundReceiverMeasurement *self = (t_PythonGroundReceiverMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonGroundReceiverMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonGroundReceiverMeasurement), &PY_TYPE_DEF(PythonGroundReceiverMeasurement), module, "PythonGroundReceiverMeasurement", 1);
        }

        void t_PythonGroundReceiverMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundReceiverMeasurement), "class_", make_descriptor(PythonGroundReceiverMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundReceiverMeasurement), "wrapfn_", make_descriptor(t_PythonGroundReceiverMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundReceiverMeasurement), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonGroundReceiverMeasurement::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonGroundReceiverMeasurement_pythonDecRef0 },
            { "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonGroundReceiverMeasurement_theoreticalEvaluation1 },
            { "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;", (void *) t_PythonGroundReceiverMeasurement_theoreticalEvaluationWithoutDerivatives2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonGroundReceiverMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonGroundReceiverMeasurement::initializeClass, 1)))
            return NULL;
          return t_PythonGroundReceiverMeasurement::wrap_Object(PythonGroundReceiverMeasurement(((t_PythonGroundReceiverMeasurement *) arg)->object.this$));
        }
        static PyObject *t_PythonGroundReceiverMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonGroundReceiverMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonGroundReceiverMeasurement_of_(t_PythonGroundReceiverMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonGroundReceiverMeasurement_init_(t_PythonGroundReceiverMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          jboolean a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          PythonGroundReceiverMeasurement object((jobject) NULL);

          if (!parseArgs(args, "kZkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = PythonGroundReceiverMeasurement(a0, a1, a2, a3, a4, a5, a6));
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

        static PyObject *t_PythonGroundReceiverMeasurement_finalize(t_PythonGroundReceiverMeasurement *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonGroundReceiverMeasurement_pythonExtension(t_PythonGroundReceiverMeasurement *self, PyObject *args)
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

        static void JNICALL t_PythonGroundReceiverMeasurement_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGroundReceiverMeasurement::mids$[PythonGroundReceiverMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonGroundReceiverMeasurement::mids$[PythonGroundReceiverMeasurement::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonGroundReceiverMeasurement_theoreticalEvaluation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGroundReceiverMeasurement::mids$[PythonGroundReceiverMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "theoreticalEvaluation", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("theoreticalEvaluation", result);
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

        static jobject JNICALL t_PythonGroundReceiverMeasurement_theoreticalEvaluationWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGroundReceiverMeasurement::mids$[PythonGroundReceiverMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "theoreticalEvaluationWithoutDerivatives", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &value))
          {
            throwTypeError("theoreticalEvaluationWithoutDerivatives", result);
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

        static PyObject *t_PythonGroundReceiverMeasurement_get__self(t_PythonGroundReceiverMeasurement *self, void *data)
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
        static PyObject *t_PythonGroundReceiverMeasurement_get__parameters_(t_PythonGroundReceiverMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonKalmanObserver.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonKalmanObserver::class$ = NULL;
        jmethodID *PythonKalmanObserver::mids$ = NULL;
        bool PythonKalmanObserver::live$ = false;

        jclass PythonKalmanObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonKalmanObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_evaluationPerformed_406840a7e4ebe025] = env->getMethodID(cls, "evaluationPerformed", "(Lorg/orekit/estimation/sequential/KalmanEstimation;)V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonKalmanObserver::PythonKalmanObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonKalmanObserver::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonKalmanObserver::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonKalmanObserver::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        static PyObject *t_PythonKalmanObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonKalmanObserver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonKalmanObserver_init_(t_PythonKalmanObserver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonKalmanObserver_finalize(t_PythonKalmanObserver *self);
        static PyObject *t_PythonKalmanObserver_pythonExtension(t_PythonKalmanObserver *self, PyObject *args);
        static void JNICALL t_PythonKalmanObserver_evaluationPerformed0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonKalmanObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonKalmanObserver_get__self(t_PythonKalmanObserver *self, void *data);
        static PyGetSetDef t_PythonKalmanObserver__fields_[] = {
          DECLARE_GET_FIELD(t_PythonKalmanObserver, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonKalmanObserver__methods_[] = {
          DECLARE_METHOD(t_PythonKalmanObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonKalmanObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonKalmanObserver, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonKalmanObserver, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonKalmanObserver)[] = {
          { Py_tp_methods, t_PythonKalmanObserver__methods_ },
          { Py_tp_init, (void *) t_PythonKalmanObserver_init_ },
          { Py_tp_getset, t_PythonKalmanObserver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonKalmanObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonKalmanObserver, t_PythonKalmanObserver, PythonKalmanObserver);

        void t_PythonKalmanObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonKalmanObserver), &PY_TYPE_DEF(PythonKalmanObserver), module, "PythonKalmanObserver", 1);
        }

        void t_PythonKalmanObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanObserver), "class_", make_descriptor(PythonKalmanObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanObserver), "wrapfn_", make_descriptor(t_PythonKalmanObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanObserver), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonKalmanObserver::initializeClass);
          JNINativeMethod methods[] = {
            { "evaluationPerformed", "(Lorg/orekit/estimation/sequential/KalmanEstimation;)V", (void *) t_PythonKalmanObserver_evaluationPerformed0 },
            { "pythonDecRef", "()V", (void *) t_PythonKalmanObserver_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonKalmanObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonKalmanObserver::initializeClass, 1)))
            return NULL;
          return t_PythonKalmanObserver::wrap_Object(PythonKalmanObserver(((t_PythonKalmanObserver *) arg)->object.this$));
        }
        static PyObject *t_PythonKalmanObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonKalmanObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonKalmanObserver_init_(t_PythonKalmanObserver *self, PyObject *args, PyObject *kwds)
        {
          PythonKalmanObserver object((jobject) NULL);

          INT_CALL(object = PythonKalmanObserver());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonKalmanObserver_finalize(t_PythonKalmanObserver *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonKalmanObserver_pythonExtension(t_PythonKalmanObserver *self, PyObject *args)
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

        static void JNICALL t_PythonKalmanObserver_evaluationPerformed0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanObserver::mids$[PythonKalmanObserver::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::sequential::t_KalmanEstimation::wrap_Object(::org::orekit::estimation::sequential::KalmanEstimation(a0));
          PyObject *result = PyObject_CallMethod(obj, "evaluationPerformed", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonKalmanObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanObserver::mids$[PythonKalmanObserver::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonKalmanObserver::mids$[PythonKalmanObserver::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonKalmanObserver_get__self(t_PythonKalmanObserver *self, void *data)
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
#include "org/orekit/propagation/sampling/PythonMultiSatFixedStepHandler.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonMultiSatFixedStepHandler::class$ = NULL;
        jmethodID *PythonMultiSatFixedStepHandler::mids$ = NULL;
        bool PythonMultiSatFixedStepHandler::live$ = false;

        jclass PythonMultiSatFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonMultiSatFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_0e7c3032c7c93ed3] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_0e7c3032c7c93ed3] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_153af04ac8851d6f] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonMultiSatFixedStepHandler::PythonMultiSatFixedStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonMultiSatFixedStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonMultiSatFixedStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonMultiSatFixedStepHandler::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      namespace sampling {
        static PyObject *t_PythonMultiSatFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonMultiSatFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonMultiSatFixedStepHandler_init_(t_PythonMultiSatFixedStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonMultiSatFixedStepHandler_finalize(t_PythonMultiSatFixedStepHandler *self);
        static PyObject *t_PythonMultiSatFixedStepHandler_pythonExtension(t_PythonMultiSatFixedStepHandler *self, PyObject *args);
        static void JNICALL t_PythonMultiSatFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonMultiSatFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonMultiSatFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static void JNICALL t_PythonMultiSatFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonMultiSatFixedStepHandler_get__self(t_PythonMultiSatFixedStepHandler *self, void *data);
        static PyGetSetDef t_PythonMultiSatFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonMultiSatFixedStepHandler, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonMultiSatFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonMultiSatFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonMultiSatFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonMultiSatFixedStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonMultiSatFixedStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonMultiSatFixedStepHandler)[] = {
          { Py_tp_methods, t_PythonMultiSatFixedStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonMultiSatFixedStepHandler_init_ },
          { Py_tp_getset, t_PythonMultiSatFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonMultiSatFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonMultiSatFixedStepHandler, t_PythonMultiSatFixedStepHandler, PythonMultiSatFixedStepHandler);

        void t_PythonMultiSatFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonMultiSatFixedStepHandler), &PY_TYPE_DEF(PythonMultiSatFixedStepHandler), module, "PythonMultiSatFixedStepHandler", 1);
        }

        void t_PythonMultiSatFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatFixedStepHandler), "class_", make_descriptor(PythonMultiSatFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatFixedStepHandler), "wrapfn_", make_descriptor(t_PythonMultiSatFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatFixedStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonMultiSatFixedStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Ljava/util/List;)V", (void *) t_PythonMultiSatFixedStepHandler_finish0 },
            { "handleStep", "(Ljava/util/List;)V", (void *) t_PythonMultiSatFixedStepHandler_handleStep1 },
            { "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;D)V", (void *) t_PythonMultiSatFixedStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonMultiSatFixedStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonMultiSatFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonMultiSatFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonMultiSatFixedStepHandler::wrap_Object(PythonMultiSatFixedStepHandler(((t_PythonMultiSatFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonMultiSatFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonMultiSatFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonMultiSatFixedStepHandler_init_(t_PythonMultiSatFixedStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonMultiSatFixedStepHandler object((jobject) NULL);

          INT_CALL(object = PythonMultiSatFixedStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonMultiSatFixedStepHandler_finalize(t_PythonMultiSatFixedStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonMultiSatFixedStepHandler_pythonExtension(t_PythonMultiSatFixedStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonMultiSatFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonMultiSatFixedStepHandler_get__self(t_PythonMultiSatFixedStepHandler *self, void *data)
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
#include "org/orekit/geometry/fov/SmoothFieldOfView.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *SmoothFieldOfView::class$ = NULL;
        jmethodID *SmoothFieldOfView::mids$ = NULL;
        bool SmoothFieldOfView::live$ = false;

        jclass SmoothFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/SmoothFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCenter_8b724f8b4fdad1a2] = env->getMethodID(cls, "getCenter", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getFootprint_f20a8500298f8a78] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_getX_8b724f8b4fdad1a2] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getY_8b724f8b4fdad1a2] = env->getMethodID(cls, "getY", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getZ_8b724f8b4fdad1a2] = env->getMethodID(cls, "getZ", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_directionAt_498f52cd8e5a7072] = env->getMethodID(cls, "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmoothFieldOfView::getCenter() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCenter_8b724f8b4fdad1a2]));
        }

        ::java::util::List SmoothFieldOfView::getFootprint(const ::org::orekit::frames::Transform & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFootprint_f20a8500298f8a78], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmoothFieldOfView::getX() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getX_8b724f8b4fdad1a2]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmoothFieldOfView::getY() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getY_8b724f8b4fdad1a2]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmoothFieldOfView::getZ() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getZ_8b724f8b4fdad1a2]));
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
    namespace geometry {
      namespace fov {
        static PyObject *t_SmoothFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothFieldOfView_getCenter(t_SmoothFieldOfView *self);
        static PyObject *t_SmoothFieldOfView_getFootprint(t_SmoothFieldOfView *self, PyObject *args);
        static PyObject *t_SmoothFieldOfView_getX(t_SmoothFieldOfView *self);
        static PyObject *t_SmoothFieldOfView_getY(t_SmoothFieldOfView *self);
        static PyObject *t_SmoothFieldOfView_getZ(t_SmoothFieldOfView *self);
        static PyObject *t_SmoothFieldOfView_get__center(t_SmoothFieldOfView *self, void *data);
        static PyObject *t_SmoothFieldOfView_get__x(t_SmoothFieldOfView *self, void *data);
        static PyObject *t_SmoothFieldOfView_get__y(t_SmoothFieldOfView *self, void *data);
        static PyObject *t_SmoothFieldOfView_get__z(t_SmoothFieldOfView *self, void *data);
        static PyGetSetDef t_SmoothFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_SmoothFieldOfView, center),
          DECLARE_GET_FIELD(t_SmoothFieldOfView, x),
          DECLARE_GET_FIELD(t_SmoothFieldOfView, y),
          DECLARE_GET_FIELD(t_SmoothFieldOfView, z),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SmoothFieldOfView__methods_[] = {
          DECLARE_METHOD(t_SmoothFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothFieldOfView, getCenter, METH_NOARGS),
          DECLARE_METHOD(t_SmoothFieldOfView, getFootprint, METH_VARARGS),
          DECLARE_METHOD(t_SmoothFieldOfView, getX, METH_NOARGS),
          DECLARE_METHOD(t_SmoothFieldOfView, getY, METH_NOARGS),
          DECLARE_METHOD(t_SmoothFieldOfView, getZ, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothFieldOfView)[] = {
          { Py_tp_methods, t_SmoothFieldOfView__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SmoothFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::AbstractFieldOfView),
          NULL
        };

        DEFINE_TYPE(SmoothFieldOfView, t_SmoothFieldOfView, SmoothFieldOfView);

        void t_SmoothFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothFieldOfView), &PY_TYPE_DEF(SmoothFieldOfView), module, "SmoothFieldOfView", 0);
        }

        void t_SmoothFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothFieldOfView), "class_", make_descriptor(SmoothFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothFieldOfView), "wrapfn_", make_descriptor(t_SmoothFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothFieldOfView::initializeClass, 1)))
            return NULL;
          return t_SmoothFieldOfView::wrap_Object(SmoothFieldOfView(((t_SmoothFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_SmoothFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothFieldOfView_getCenter(t_SmoothFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getCenter());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmoothFieldOfView_getFootprint(t_SmoothFieldOfView *self, PyObject *args)
        {
          ::org::orekit::frames::Transform a0((jobject) NULL);
          ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
          jdouble a2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::frames::Transform::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getFootprint(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result);
          }

          return callSuper(PY_TYPE(SmoothFieldOfView), (PyObject *) self, "getFootprint", args, 2);
        }

        static PyObject *t_SmoothFieldOfView_getX(t_SmoothFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getX());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmoothFieldOfView_getY(t_SmoothFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getY());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmoothFieldOfView_getZ(t_SmoothFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getZ());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmoothFieldOfView_get__center(t_SmoothFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getCenter());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SmoothFieldOfView_get__x(t_SmoothFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getX());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SmoothFieldOfView_get__y(t_SmoothFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getY());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SmoothFieldOfView_get__z(t_SmoothFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getZ());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/ExtremumApproachDetector.h"
#include "org/orekit/propagation/events/ExtremumApproachDetector.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ExtremumApproachDetector::class$ = NULL;
        jmethodID *ExtremumApproachDetector::mids$ = NULL;
        bool ExtremumApproachDetector::live$ = false;

        jclass ExtremumApproachDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ExtremumApproachDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d5a0feed7c9d2c33] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;)V");
            mids$[mid_computeDeltaPV_f9d7146927e7d993] = env->getMethodID(cls, "computeDeltaPV", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getSecondaryPVProvider_8a41319e47f3bd7c] = env->getMethodID(cls, "getSecondaryPVProvider", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_create_c1b9267e93db4bfe] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ExtremumApproachDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ExtremumApproachDetector::ExtremumApproachDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_d5a0feed7c9d2c33, a0.this$)) {}

        ::org::orekit::utils::PVCoordinates ExtremumApproachDetector::computeDeltaPV(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeDeltaPV_f9d7146927e7d993], a0.this$));
        }

        jdouble ExtremumApproachDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::utils::PVCoordinatesProvider ExtremumApproachDetector::getSecondaryPVProvider() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getSecondaryPVProvider_8a41319e47f3bd7c]));
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
        static PyObject *t_ExtremumApproachDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ExtremumApproachDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ExtremumApproachDetector_of_(t_ExtremumApproachDetector *self, PyObject *args);
        static int t_ExtremumApproachDetector_init_(t_ExtremumApproachDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ExtremumApproachDetector_computeDeltaPV(t_ExtremumApproachDetector *self, PyObject *arg);
        static PyObject *t_ExtremumApproachDetector_g(t_ExtremumApproachDetector *self, PyObject *args);
        static PyObject *t_ExtremumApproachDetector_getSecondaryPVProvider(t_ExtremumApproachDetector *self);
        static PyObject *t_ExtremumApproachDetector_get__secondaryPVProvider(t_ExtremumApproachDetector *self, void *data);
        static PyObject *t_ExtremumApproachDetector_get__parameters_(t_ExtremumApproachDetector *self, void *data);
        static PyGetSetDef t_ExtremumApproachDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ExtremumApproachDetector, secondaryPVProvider),
          DECLARE_GET_FIELD(t_ExtremumApproachDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ExtremumApproachDetector__methods_[] = {
          DECLARE_METHOD(t_ExtremumApproachDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExtremumApproachDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExtremumApproachDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ExtremumApproachDetector, computeDeltaPV, METH_O),
          DECLARE_METHOD(t_ExtremumApproachDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_ExtremumApproachDetector, getSecondaryPVProvider, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ExtremumApproachDetector)[] = {
          { Py_tp_methods, t_ExtremumApproachDetector__methods_ },
          { Py_tp_init, (void *) t_ExtremumApproachDetector_init_ },
          { Py_tp_getset, t_ExtremumApproachDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ExtremumApproachDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ExtremumApproachDetector, t_ExtremumApproachDetector, ExtremumApproachDetector);
        PyObject *t_ExtremumApproachDetector::wrap_Object(const ExtremumApproachDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ExtremumApproachDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ExtremumApproachDetector *self = (t_ExtremumApproachDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ExtremumApproachDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ExtremumApproachDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ExtremumApproachDetector *self = (t_ExtremumApproachDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ExtremumApproachDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ExtremumApproachDetector), &PY_TYPE_DEF(ExtremumApproachDetector), module, "ExtremumApproachDetector", 0);
        }

        void t_ExtremumApproachDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtremumApproachDetector), "class_", make_descriptor(ExtremumApproachDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtremumApproachDetector), "wrapfn_", make_descriptor(t_ExtremumApproachDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtremumApproachDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ExtremumApproachDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ExtremumApproachDetector::initializeClass, 1)))
            return NULL;
          return t_ExtremumApproachDetector::wrap_Object(ExtremumApproachDetector(((t_ExtremumApproachDetector *) arg)->object.this$));
        }
        static PyObject *t_ExtremumApproachDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ExtremumApproachDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ExtremumApproachDetector_of_(t_ExtremumApproachDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ExtremumApproachDetector_init_(t_ExtremumApproachDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
          ExtremumApproachDetector object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0))
          {
            INT_CALL(object = ExtremumApproachDetector(a0));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ExtremumApproachDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ExtremumApproachDetector_computeDeltaPV(t_ExtremumApproachDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinates result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.computeDeltaPV(a0));
            return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "computeDeltaPV", arg);
          return NULL;
        }

        static PyObject *t_ExtremumApproachDetector_g(t_ExtremumApproachDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExtremumApproachDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ExtremumApproachDetector_getSecondaryPVProvider(t_ExtremumApproachDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondaryPVProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }
        static PyObject *t_ExtremumApproachDetector_get__parameters_(t_ExtremumApproachDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ExtremumApproachDetector_get__secondaryPVProvider(t_ExtremumApproachDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondaryPVProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
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
          mids$[mid_init$_7d8f123763cd893c] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
          mids$[mid_guess_25e1757a36c4dde2] = env->getMethodID(cls, "guess", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GaussianCurveFitter$ParameterGuesser::GaussianCurveFitter$ParameterGuesser(const ::java::util::Collection & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7d8f123763cd893c, a0.this$)) {}

      JArray< jdouble > GaussianCurveFitter$ParameterGuesser::guess() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_guess_25e1757a36c4dde2]));
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
#include "org/hipparchus/distribution/multivariate/AbstractMultivariateRealDistribution.h"
#include "org/hipparchus/distribution/MultivariateRealDistribution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        ::java::lang::Class *AbstractMultivariateRealDistribution::class$ = NULL;
        jmethodID *AbstractMultivariateRealDistribution::mids$ = NULL;
        bool AbstractMultivariateRealDistribution::live$ = false;

        jclass AbstractMultivariateRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/multivariate/AbstractMultivariateRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_reseedRandomGenerator_3d7dd2314a0dd456] = env->getMethodID(cls, "reseedRandomGenerator", "(J)V");
            mids$[mid_sample_25e1757a36c4dde2] = env->getMethodID(cls, "sample", "()[D");
            mids$[mid_sample_23a0aa7ddbf2fcc5] = env->getMethodID(cls, "sample", "(I)[[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint AbstractMultivariateRealDistribution::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
        }

        void AbstractMultivariateRealDistribution::reseedRandomGenerator(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reseedRandomGenerator_3d7dd2314a0dd456], a0);
        }

        JArray< jdouble > AbstractMultivariateRealDistribution::sample() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_sample_25e1757a36c4dde2]));
        }

        JArray< JArray< jdouble > > AbstractMultivariateRealDistribution::sample(jint a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_sample_23a0aa7ddbf2fcc5], a0));
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
        static PyObject *t_AbstractMultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMultivariateRealDistribution_getDimension(t_AbstractMultivariateRealDistribution *self);
        static PyObject *t_AbstractMultivariateRealDistribution_reseedRandomGenerator(t_AbstractMultivariateRealDistribution *self, PyObject *arg);
        static PyObject *t_AbstractMultivariateRealDistribution_sample(t_AbstractMultivariateRealDistribution *self, PyObject *args);
        static PyObject *t_AbstractMultivariateRealDistribution_get__dimension(t_AbstractMultivariateRealDistribution *self, void *data);
        static PyGetSetDef t_AbstractMultivariateRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractMultivariateRealDistribution, dimension),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractMultivariateRealDistribution__methods_[] = {
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, reseedRandomGenerator, METH_O),
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, sample, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractMultivariateRealDistribution)[] = {
          { Py_tp_methods, t_AbstractMultivariateRealDistribution__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractMultivariateRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractMultivariateRealDistribution)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractMultivariateRealDistribution, t_AbstractMultivariateRealDistribution, AbstractMultivariateRealDistribution);

        void t_AbstractMultivariateRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractMultivariateRealDistribution), &PY_TYPE_DEF(AbstractMultivariateRealDistribution), module, "AbstractMultivariateRealDistribution", 0);
        }

        void t_AbstractMultivariateRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultivariateRealDistribution), "class_", make_descriptor(AbstractMultivariateRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultivariateRealDistribution), "wrapfn_", make_descriptor(t_AbstractMultivariateRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultivariateRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractMultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractMultivariateRealDistribution::initializeClass, 1)))
            return NULL;
          return t_AbstractMultivariateRealDistribution::wrap_Object(AbstractMultivariateRealDistribution(((t_AbstractMultivariateRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_AbstractMultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractMultivariateRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractMultivariateRealDistribution_getDimension(t_AbstractMultivariateRealDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractMultivariateRealDistribution_reseedRandomGenerator(t_AbstractMultivariateRealDistribution *self, PyObject *arg)
        {
          jlong a0;

          if (!parseArg(arg, "J", &a0))
          {
            OBJ_CALL(self->object.reseedRandomGenerator(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reseedRandomGenerator", arg);
          return NULL;
        }

        static PyObject *t_AbstractMultivariateRealDistribution_sample(t_AbstractMultivariateRealDistribution *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.sample());
              return result.wrap();
            }
            break;
           case 1:
            {
              jint a0;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.sample(a0));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sample", args);
          return NULL;
        }

        static PyObject *t_AbstractMultivariateRealDistribution_get__dimension(t_AbstractMultivariateRealDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/HighamHall54FieldIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *HighamHall54FieldIntegratorBuilder::class$ = NULL;
        jmethodID *HighamHall54FieldIntegratorBuilder::mids$ = NULL;
        bool HighamHall54FieldIntegratorBuilder::live$ = false;

        jclass HighamHall54FieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/HighamHall54FieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_ce58c6ef4cfb23c4] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HighamHall54FieldIntegratorBuilder::HighamHall54FieldIntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator HighamHall54FieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_ce58c6ef4cfb23c4], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_HighamHall54FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54FieldIntegratorBuilder_of_(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args);
        static int t_HighamHall54FieldIntegratorBuilder_init_(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HighamHall54FieldIntegratorBuilder_buildIntegrator(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegratorBuilder_get__parameters_(t_HighamHall54FieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_HighamHall54FieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HighamHall54FieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_HighamHall54FieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54FieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54FieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HighamHall54FieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_HighamHall54FieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_HighamHall54FieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_HighamHall54FieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HighamHall54FieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(HighamHall54FieldIntegratorBuilder, t_HighamHall54FieldIntegratorBuilder, HighamHall54FieldIntegratorBuilder);
        PyObject *t_HighamHall54FieldIntegratorBuilder::wrap_Object(const HighamHall54FieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HighamHall54FieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HighamHall54FieldIntegratorBuilder *self = (t_HighamHall54FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_HighamHall54FieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HighamHall54FieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HighamHall54FieldIntegratorBuilder *self = (t_HighamHall54FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_HighamHall54FieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(HighamHall54FieldIntegratorBuilder), &PY_TYPE_DEF(HighamHall54FieldIntegratorBuilder), module, "HighamHall54FieldIntegratorBuilder", 0);
        }

        void t_HighamHall54FieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegratorBuilder), "class_", make_descriptor(HighamHall54FieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegratorBuilder), "wrapfn_", make_descriptor(t_HighamHall54FieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HighamHall54FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HighamHall54FieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_HighamHall54FieldIntegratorBuilder::wrap_Object(HighamHall54FieldIntegratorBuilder(((t_HighamHall54FieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_HighamHall54FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HighamHall54FieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_HighamHall54FieldIntegratorBuilder_of_(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_HighamHall54FieldIntegratorBuilder_init_(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          HighamHall54FieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = HighamHall54FieldIntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HighamHall54FieldIntegratorBuilder_buildIntegrator(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_HighamHall54FieldIntegratorBuilder_get__parameters_(t_HighamHall54FieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/PolynomialThrustSegment.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PolynomialThrustSegment::class$ = NULL;
          jmethodID *PolynomialThrustSegment::mids$ = NULL;
          bool PolynomialThrustSegment::live$ = false;

          jclass PolynomialThrustSegment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PolynomialThrustSegment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d8b9ab520b52e3e3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/analysis/polynomials/PolynomialFunction;Lorg/hipparchus/analysis/polynomials/PolynomialFunction;Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
              mids$[mid_getThrustVector_082e6346b274f880] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_362941be972fb4b5] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PolynomialThrustSegment::PolynomialThrustSegment(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a1, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a2, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d8b9ab520b52e3e3, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D PolynomialThrustSegment::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_082e6346b274f880], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PolynomialThrustSegment::getThrustVector(const ::org::orekit::time::FieldAbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_362941be972fb4b5], a0.this$));
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
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          static PyObject *t_PolynomialThrustSegment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolynomialThrustSegment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PolynomialThrustSegment_init_(t_PolynomialThrustSegment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PolynomialThrustSegment_getThrustVector(t_PolynomialThrustSegment *self, PyObject *args);

          static PyMethodDef t_PolynomialThrustSegment__methods_[] = {
            DECLARE_METHOD(t_PolynomialThrustSegment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolynomialThrustSegment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolynomialThrustSegment, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PolynomialThrustSegment)[] = {
            { Py_tp_methods, t_PolynomialThrustSegment__methods_ },
            { Py_tp_init, (void *) t_PolynomialThrustSegment_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PolynomialThrustSegment)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PolynomialThrustSegment, t_PolynomialThrustSegment, PolynomialThrustSegment);

          void t_PolynomialThrustSegment::install(PyObject *module)
          {
            installType(&PY_TYPE(PolynomialThrustSegment), &PY_TYPE_DEF(PolynomialThrustSegment), module, "PolynomialThrustSegment", 0);
          }

          void t_PolynomialThrustSegment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialThrustSegment), "class_", make_descriptor(PolynomialThrustSegment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialThrustSegment), "wrapfn_", make_descriptor(t_PolynomialThrustSegment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialThrustSegment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PolynomialThrustSegment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PolynomialThrustSegment::initializeClass, 1)))
              return NULL;
            return t_PolynomialThrustSegment::wrap_Object(PolynomialThrustSegment(((t_PolynomialThrustSegment *) arg)->object.this$));
          }
          static PyObject *t_PolynomialThrustSegment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PolynomialThrustSegment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PolynomialThrustSegment_init_(t_PolynomialThrustSegment *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::analysis::polynomials::PolynomialFunction a1((jobject) NULL);
            ::org::hipparchus::analysis::polynomials::PolynomialFunction a2((jobject) NULL);
            ::org::hipparchus::analysis::polynomials::PolynomialFunction a3((jobject) NULL);
            PolynomialThrustSegment object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = PolynomialThrustSegment(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PolynomialThrustSegment_getThrustVector(t_PolynomialThrustSegment *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/ExponentialDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *ExponentialDistribution::class$ = NULL;
        jmethodID *ExponentialDistribution::mids$ = NULL;
        bool ExponentialDistribution::live$ = false;

        jclass ExponentialDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/ExponentialDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_cumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_04fd0666b613d2ab] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getMean_b74f83833fdad017] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_04fd0666b613d2ab] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ExponentialDistribution::ExponentialDistribution(jdouble a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        jdouble ExponentialDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble ExponentialDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jdouble ExponentialDistribution::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_b74f83833fdad017]);
        }

        jdouble ExponentialDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble ExponentialDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble ExponentialDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble ExponentialDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        jdouble ExponentialDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab], a0);
        }

        jboolean ExponentialDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        jdouble ExponentialDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_04fd0666b613d2ab], a0);
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
      namespace continuous {
        static PyObject *t_ExponentialDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ExponentialDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ExponentialDistribution_init_(t_ExponentialDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ExponentialDistribution_cumulativeProbability(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_density(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_getMean(t_ExponentialDistribution *self);
        static PyObject *t_ExponentialDistribution_getNumericalMean(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_getNumericalVariance(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_getSupportLowerBound(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_getSupportUpperBound(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_inverseCumulativeProbability(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_isSupportConnected(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_logDensity(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_get__mean(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__numericalMean(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__numericalVariance(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__supportConnected(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__supportLowerBound(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__supportUpperBound(t_ExponentialDistribution *self, void *data);
        static PyGetSetDef t_ExponentialDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ExponentialDistribution, mean),
          DECLARE_GET_FIELD(t_ExponentialDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ExponentialDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ExponentialDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ExponentialDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ExponentialDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ExponentialDistribution__methods_[] = {
          DECLARE_METHOD(t_ExponentialDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExponentialDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExponentialDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getMean, METH_NOARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ExponentialDistribution)[] = {
          { Py_tp_methods, t_ExponentialDistribution__methods_ },
          { Py_tp_init, (void *) t_ExponentialDistribution_init_ },
          { Py_tp_getset, t_ExponentialDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ExponentialDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(ExponentialDistribution, t_ExponentialDistribution, ExponentialDistribution);

        void t_ExponentialDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ExponentialDistribution), &PY_TYPE_DEF(ExponentialDistribution), module, "ExponentialDistribution", 0);
        }

        void t_ExponentialDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExponentialDistribution), "class_", make_descriptor(ExponentialDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExponentialDistribution), "wrapfn_", make_descriptor(t_ExponentialDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExponentialDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ExponentialDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ExponentialDistribution::initializeClass, 1)))
            return NULL;
          return t_ExponentialDistribution::wrap_Object(ExponentialDistribution(((t_ExponentialDistribution *) arg)->object.this$));
        }
        static PyObject *t_ExponentialDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ExponentialDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ExponentialDistribution_init_(t_ExponentialDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ExponentialDistribution object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ExponentialDistribution(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ExponentialDistribution_cumulativeProbability(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ExponentialDistribution_density(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_ExponentialDistribution_getMean(t_ExponentialDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ExponentialDistribution_getNumericalMean(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ExponentialDistribution_getNumericalVariance(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ExponentialDistribution_getSupportLowerBound(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ExponentialDistribution_getSupportUpperBound(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ExponentialDistribution_inverseCumulativeProbability(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_ExponentialDistribution_isSupportConnected(t_ExponentialDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ExponentialDistribution_logDensity(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_ExponentialDistribution_get__mean(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ExponentialDistribution_get__numericalMean(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ExponentialDistribution_get__numericalVariance(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ExponentialDistribution_get__supportConnected(t_ExponentialDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ExponentialDistribution_get__supportLowerBound(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ExponentialDistribution_get__supportUpperBound(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MultidimensionalCounter$Iterator.h"
#include "java/util/Iterator.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MultidimensionalCounter$Iterator::class$ = NULL;
      jmethodID *MultidimensionalCounter$Iterator::mids$ = NULL;
      bool MultidimensionalCounter$Iterator::live$ = false;

      jclass MultidimensionalCounter$Iterator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MultidimensionalCounter$Iterator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCount_55546ef6a647f39b] = env->getMethodID(cls, "getCount", "()I");
          mids$[mid_getCount_0e7cf35192c3effe] = env->getMethodID(cls, "getCount", "(I)I");
          mids$[mid_getCounts_4d095d7a08163110] = env->getMethodID(cls, "getCounts", "()[I");
          mids$[mid_hasNext_9ab94ac1dc23b105] = env->getMethodID(cls, "hasNext", "()Z");
          mids$[mid_next_c1f5a8ce392a14f8] = env->getMethodID(cls, "next", "()Ljava/lang/Integer;");
          mids$[mid_remove_a1fa5dae97ea5ed2] = env->getMethodID(cls, "remove", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint MultidimensionalCounter$Iterator::getCount() const
      {
        return env->callIntMethod(this$, mids$[mid_getCount_55546ef6a647f39b]);
      }

      jint MultidimensionalCounter$Iterator::getCount(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getCount_0e7cf35192c3effe], a0);
      }

      JArray< jint > MultidimensionalCounter$Iterator::getCounts() const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCounts_4d095d7a08163110]));
      }

      jboolean MultidimensionalCounter$Iterator::hasNext() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasNext_9ab94ac1dc23b105]);
      }

      ::java::lang::Integer MultidimensionalCounter$Iterator::next() const
      {
        return ::java::lang::Integer(env->callObjectMethod(this$, mids$[mid_next_c1f5a8ce392a14f8]));
      }

      void MultidimensionalCounter$Iterator::remove() const
      {
        env->callVoidMethod(this$, mids$[mid_remove_a1fa5dae97ea5ed2]);
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
      static PyObject *t_MultidimensionalCounter$Iterator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultidimensionalCounter$Iterator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultidimensionalCounter$Iterator_getCount(t_MultidimensionalCounter$Iterator *self, PyObject *args);
      static PyObject *t_MultidimensionalCounter$Iterator_getCounts(t_MultidimensionalCounter$Iterator *self);
      static PyObject *t_MultidimensionalCounter$Iterator_hasNext(t_MultidimensionalCounter$Iterator *self);
      static PyObject *t_MultidimensionalCounter$Iterator_next(t_MultidimensionalCounter$Iterator *self);
      static PyObject *t_MultidimensionalCounter$Iterator_remove(t_MultidimensionalCounter$Iterator *self);
      static PyObject *t_MultidimensionalCounter$Iterator_get__count(t_MultidimensionalCounter$Iterator *self, void *data);
      static PyObject *t_MultidimensionalCounter$Iterator_get__counts(t_MultidimensionalCounter$Iterator *self, void *data);
      static PyGetSetDef t_MultidimensionalCounter$Iterator__fields_[] = {
        DECLARE_GET_FIELD(t_MultidimensionalCounter$Iterator, count),
        DECLARE_GET_FIELD(t_MultidimensionalCounter$Iterator, counts),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultidimensionalCounter$Iterator__methods_[] = {
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, getCount, METH_VARARGS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, getCounts, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, hasNext, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, next, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, remove, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultidimensionalCounter$Iterator)[] = {
        { Py_tp_methods, t_MultidimensionalCounter$Iterator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MultidimensionalCounter$Iterator__fields_ },
        { Py_tp_iter, (void *) PyObject_SelfIter },
        { Py_tp_iternext, (void *) ((PyObject *(*)(::java::util::t_Iterator *)) get_iterator_next< ::java::util::t_Iterator,::java::lang::t_Integer >) },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultidimensionalCounter$Iterator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultidimensionalCounter$Iterator, t_MultidimensionalCounter$Iterator, MultidimensionalCounter$Iterator);

      void t_MultidimensionalCounter$Iterator::install(PyObject *module)
      {
        installType(&PY_TYPE(MultidimensionalCounter$Iterator), &PY_TYPE_DEF(MultidimensionalCounter$Iterator), module, "MultidimensionalCounter$Iterator", 0);
      }

      void t_MultidimensionalCounter$Iterator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter$Iterator), "class_", make_descriptor(MultidimensionalCounter$Iterator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter$Iterator), "wrapfn_", make_descriptor(t_MultidimensionalCounter$Iterator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter$Iterator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultidimensionalCounter$Iterator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultidimensionalCounter$Iterator::initializeClass, 1)))
          return NULL;
        return t_MultidimensionalCounter$Iterator::wrap_Object(MultidimensionalCounter$Iterator(((t_MultidimensionalCounter$Iterator *) arg)->object.this$));
      }
      static PyObject *t_MultidimensionalCounter$Iterator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultidimensionalCounter$Iterator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultidimensionalCounter$Iterator_getCount(t_MultidimensionalCounter$Iterator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.getCount());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getCount(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getCount", args);
        return NULL;
      }

      static PyObject *t_MultidimensionalCounter$Iterator_getCounts(t_MultidimensionalCounter$Iterator *self)
      {
        JArray< jint > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCounts());
        return result.wrap();
      }

      static PyObject *t_MultidimensionalCounter$Iterator_hasNext(t_MultidimensionalCounter$Iterator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasNext());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_MultidimensionalCounter$Iterator_next(t_MultidimensionalCounter$Iterator *self)
      {
        ::java::lang::Integer result((jobject) NULL);
        OBJ_CALL(result = self->object.next());
        return ::java::lang::t_Integer::wrap_Object(result);
      }

      static PyObject *t_MultidimensionalCounter$Iterator_remove(t_MultidimensionalCounter$Iterator *self)
      {
        OBJ_CALL(self->object.remove());
        Py_RETURN_NONE;
      }

      static PyObject *t_MultidimensionalCounter$Iterator_get__count(t_MultidimensionalCounter$Iterator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCount());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultidimensionalCounter$Iterator_get__counts(t_MultidimensionalCounter$Iterator *self, void *data)
      {
        JArray< jint > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCounts());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/DataFormat.h"
#include "org/orekit/gnss/metric/ntrip/DataFormat.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *DataFormat::class$ = NULL;
          jmethodID *DataFormat::mids$ = NULL;
          bool DataFormat::live$ = false;
          DataFormat *DataFormat::BINEX = NULL;
          DataFormat *DataFormat::CMR = NULL;
          DataFormat *DataFormat::CMR_PLUS = NULL;
          DataFormat *DataFormat::RAW = NULL;
          DataFormat *DataFormat::RINEX = NULL;
          DataFormat *DataFormat::RTCA = NULL;
          DataFormat *DataFormat::RTCM_2 = NULL;
          DataFormat *DataFormat::RTCM_3 = NULL;
          DataFormat *DataFormat::RTCM_SAPOS = NULL;
          DataFormat *DataFormat::SAPOS_ADV = NULL;
          DataFormat *DataFormat::SP3 = NULL;

          jclass DataFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/DataFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDataFormat_09163b69fefc729e] = env->getStaticMethodID(cls, "getDataFormat", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/DataFormat;");
              mids$[mid_valueOf_09163b69fefc729e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/DataFormat;");
              mids$[mid_values_e867222b4082b80e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/DataFormat;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BINEX = new DataFormat(env->getStaticObjectField(cls, "BINEX", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              CMR = new DataFormat(env->getStaticObjectField(cls, "CMR", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              CMR_PLUS = new DataFormat(env->getStaticObjectField(cls, "CMR_PLUS", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RAW = new DataFormat(env->getStaticObjectField(cls, "RAW", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RINEX = new DataFormat(env->getStaticObjectField(cls, "RINEX", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RTCA = new DataFormat(env->getStaticObjectField(cls, "RTCA", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RTCM_2 = new DataFormat(env->getStaticObjectField(cls, "RTCM_2", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RTCM_3 = new DataFormat(env->getStaticObjectField(cls, "RTCM_3", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RTCM_SAPOS = new DataFormat(env->getStaticObjectField(cls, "RTCM_SAPOS", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              SAPOS_ADV = new DataFormat(env->getStaticObjectField(cls, "SAPOS_ADV", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              SP3 = new DataFormat(env->getStaticObjectField(cls, "SP3", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DataFormat DataFormat::getDataFormat(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return DataFormat(env->callStaticObjectMethod(cls, mids$[mid_getDataFormat_09163b69fefc729e], a0.this$));
          }

          DataFormat DataFormat::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return DataFormat(env->callStaticObjectMethod(cls, mids$[mid_valueOf_09163b69fefc729e], a0.this$));
          }

          JArray< DataFormat > DataFormat::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< DataFormat >(env->callStaticObjectMethod(cls, mids$[mid_values_e867222b4082b80e]));
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
        namespace ntrip {
          static PyObject *t_DataFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataFormat_of_(t_DataFormat *self, PyObject *args);
          static PyObject *t_DataFormat_getDataFormat(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataFormat_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_DataFormat_values(PyTypeObject *type);
          static PyObject *t_DataFormat_get__parameters_(t_DataFormat *self, void *data);
          static PyGetSetDef t_DataFormat__fields_[] = {
            DECLARE_GET_FIELD(t_DataFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DataFormat__methods_[] = {
            DECLARE_METHOD(t_DataFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_DataFormat, getDataFormat, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataFormat, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DataFormat, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DataFormat)[] = {
            { Py_tp_methods, t_DataFormat__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DataFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DataFormat)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(DataFormat, t_DataFormat, DataFormat);
          PyObject *t_DataFormat::wrap_Object(const DataFormat& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DataFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DataFormat *self = (t_DataFormat *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DataFormat::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DataFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DataFormat *self = (t_DataFormat *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DataFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(DataFormat), &PY_TYPE_DEF(DataFormat), module, "DataFormat", 0);
          }

          void t_DataFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "class_", make_descriptor(DataFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "wrapfn_", make_descriptor(t_DataFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "boxfn_", make_descriptor(boxObject));
            env->getClass(DataFormat::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "BINEX", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::BINEX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "CMR", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::CMR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "CMR_PLUS", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::CMR_PLUS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RAW", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RAW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RINEX", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RINEX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RTCA", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RTCA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RTCM_2", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RTCM_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RTCM_3", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RTCM_3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RTCM_SAPOS", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RTCM_SAPOS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "SAPOS_ADV", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::SAPOS_ADV)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "SP3", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::SP3)));
          }

          static PyObject *t_DataFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DataFormat::initializeClass, 1)))
              return NULL;
            return t_DataFormat::wrap_Object(DataFormat(((t_DataFormat *) arg)->object.this$));
          }
          static PyObject *t_DataFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DataFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DataFormat_of_(t_DataFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_DataFormat_getDataFormat(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            DataFormat result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::DataFormat::getDataFormat(a0));
              return t_DataFormat::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getDataFormat", arg);
            return NULL;
          }

          static PyObject *t_DataFormat_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            DataFormat result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::DataFormat::valueOf(a0));
              return t_DataFormat::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_DataFormat_values(PyTypeObject *type)
          {
            JArray< DataFormat > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::DataFormat::values());
            return JArray<jobject>(result.this$).wrap(t_DataFormat::wrap_jobject);
          }
          static PyObject *t_DataFormat_get__parameters_(t_DataFormat *self, void *data)
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
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {

        ::java::lang::Class *SupportBallGenerator::class$ = NULL;
        jmethodID *SupportBallGenerator::mids$ = NULL;
        bool SupportBallGenerator::live$ = false;

        jclass SupportBallGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/enclosing/SupportBallGenerator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_ballOnSupport_1093dd6e31c1164f] = env->getMethodID(cls, "ballOnSupport", "(Ljava/util/List;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::enclosing::EnclosingBall SupportBallGenerator::ballOnSupport(const ::java::util::List & a0) const
        {
          return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_ballOnSupport_1093dd6e31c1164f], a0.this$));
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
      namespace enclosing {
        static PyObject *t_SupportBallGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SupportBallGenerator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SupportBallGenerator_of_(t_SupportBallGenerator *self, PyObject *args);
        static PyObject *t_SupportBallGenerator_ballOnSupport(t_SupportBallGenerator *self, PyObject *arg);
        static PyObject *t_SupportBallGenerator_get__parameters_(t_SupportBallGenerator *self, void *data);
        static PyGetSetDef t_SupportBallGenerator__fields_[] = {
          DECLARE_GET_FIELD(t_SupportBallGenerator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SupportBallGenerator__methods_[] = {
          DECLARE_METHOD(t_SupportBallGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SupportBallGenerator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SupportBallGenerator, of_, METH_VARARGS),
          DECLARE_METHOD(t_SupportBallGenerator, ballOnSupport, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SupportBallGenerator)[] = {
          { Py_tp_methods, t_SupportBallGenerator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SupportBallGenerator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SupportBallGenerator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SupportBallGenerator, t_SupportBallGenerator, SupportBallGenerator);
        PyObject *t_SupportBallGenerator::wrap_Object(const SupportBallGenerator& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_SupportBallGenerator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SupportBallGenerator *self = (t_SupportBallGenerator *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_SupportBallGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_SupportBallGenerator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SupportBallGenerator *self = (t_SupportBallGenerator *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_SupportBallGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(SupportBallGenerator), &PY_TYPE_DEF(SupportBallGenerator), module, "SupportBallGenerator", 0);
        }

        void t_SupportBallGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SupportBallGenerator), "class_", make_descriptor(SupportBallGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SupportBallGenerator), "wrapfn_", make_descriptor(t_SupportBallGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SupportBallGenerator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SupportBallGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SupportBallGenerator::initializeClass, 1)))
            return NULL;
          return t_SupportBallGenerator::wrap_Object(SupportBallGenerator(((t_SupportBallGenerator *) arg)->object.this$));
        }
        static PyObject *t_SupportBallGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SupportBallGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SupportBallGenerator_of_(t_SupportBallGenerator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SupportBallGenerator_ballOnSupport(t_SupportBallGenerator *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(result = self->object.ballOnSupport(a0));
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "ballOnSupport", arg);
          return NULL;
        }
        static PyObject *t_SupportBallGenerator_get__parameters_(t_SupportBallGenerator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/events/FieldEventState$EventOccurrence.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventState::class$ = NULL;
        jmethodID *FieldEventState::mids$ = NULL;
        bool FieldEventState::live$ = false;

        jclass FieldEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ca1d91eb6a3ce219] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_doEvent_a0a44322b5800790] = env->getMethodID(cls, "doEvent", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/events/FieldEventState$EventOccurrence;");
            mids$[mid_evaluateStep_ed8f8b343c93190f] = env->getMethodID(cls, "evaluateStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)Z");
            mids$[mid_getEventDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getEventDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_getEventDetector_e78af9d734a5fbe1] = env->getMethodID(cls, "getEventDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_getPendingEvent_9ab94ac1dc23b105] = env->getMethodID(cls, "getPendingEvent", "()Z");
            mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_reinitializeBegin_fa82adff12d70536] = env->getMethodID(cls, "reinitializeBegin", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_tryAdvance_a2d04bc21b332743] = env->getMethodID(cls, "tryAdvance", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventState::FieldEventState(const ::org::orekit::propagation::events::FieldEventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ca1d91eb6a3ce219, a0.this$)) {}

        ::org::orekit::propagation::events::FieldEventState$EventOccurrence FieldEventState::doEvent(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::orekit::propagation::events::FieldEventState$EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_a0a44322b5800790], a0.this$));
        }

        jboolean FieldEventState::evaluateStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_ed8f8b343c93190f], a0.this$);
        }

        ::org::orekit::time::FieldAbsoluteDate FieldEventState::getEventDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEventDate_fa23a4301b9c83e7]));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldEventState::getEventDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_e78af9d734a5fbe1]));
        }

        jboolean FieldEventState::getPendingEvent() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getPendingEvent_9ab94ac1dc23b105]);
        }

        void FieldEventState::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
        }

        void FieldEventState::reinitializeBegin(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reinitializeBegin_fa82adff12d70536], a0.this$);
        }

        jboolean FieldEventState::tryAdvance(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tryAdvance_a2d04bc21b332743], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState_of_(t_FieldEventState *self, PyObject *args);
        static int t_FieldEventState_init_(t_FieldEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventState_doEvent(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_evaluateStep(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_getEventDate(t_FieldEventState *self);
        static PyObject *t_FieldEventState_getEventDetector(t_FieldEventState *self);
        static PyObject *t_FieldEventState_getPendingEvent(t_FieldEventState *self);
        static PyObject *t_FieldEventState_init(t_FieldEventState *self, PyObject *args);
        static PyObject *t_FieldEventState_reinitializeBegin(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_tryAdvance(t_FieldEventState *self, PyObject *args);
        static PyObject *t_FieldEventState_get__eventDate(t_FieldEventState *self, void *data);
        static PyObject *t_FieldEventState_get__eventDetector(t_FieldEventState *self, void *data);
        static PyObject *t_FieldEventState_get__pendingEvent(t_FieldEventState *self, void *data);
        static PyObject *t_FieldEventState_get__parameters_(t_FieldEventState *self, void *data);
        static PyGetSetDef t_FieldEventState__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventState, eventDate),
          DECLARE_GET_FIELD(t_FieldEventState, eventDetector),
          DECLARE_GET_FIELD(t_FieldEventState, pendingEvent),
          DECLARE_GET_FIELD(t_FieldEventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventState__methods_[] = {
          DECLARE_METHOD(t_FieldEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventState, doEvent, METH_O),
          DECLARE_METHOD(t_FieldEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_FieldEventState, getEventDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState, getPendingEvent, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventState, reinitializeBegin, METH_O),
          DECLARE_METHOD(t_FieldEventState, tryAdvance, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventState)[] = {
          { Py_tp_methods, t_FieldEventState__methods_ },
          { Py_tp_init, (void *) t_FieldEventState_init_ },
          { Py_tp_getset, t_FieldEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventState, t_FieldEventState, FieldEventState);
        PyObject *t_FieldEventState::wrap_Object(const FieldEventState& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState *self = (t_FieldEventState *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldEventState::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState *self = (t_FieldEventState *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventState), &PY_TYPE_DEF(FieldEventState), module, "FieldEventState", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "EventOccurrence", make_descriptor(&PY_TYPE_DEF(FieldEventState$EventOccurrence)));
        }

        void t_FieldEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "class_", make_descriptor(FieldEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "wrapfn_", make_descriptor(t_FieldEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventState::initializeClass, 1)))
            return NULL;
          return t_FieldEventState::wrap_Object(FieldEventState(((t_FieldEventState *) arg)->object.this$));
        }
        static PyObject *t_FieldEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventState_of_(t_FieldEventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventState_init_(t_FieldEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          FieldEventState object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            INT_CALL(object = FieldEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventState_doEvent(t_FieldEventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FieldEventState$EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::orekit::propagation::events::t_FieldEventState$EventOccurrence::wrap_Object(result, self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_evaluateStep(t_FieldEventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_getEventDate(t_FieldEventState *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldEventState_getEventDetector(t_FieldEventState *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result);
        }

        static PyObject *t_FieldEventState_getPendingEvent(t_FieldEventState *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getPendingEvent());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldEventState_init(t_FieldEventState *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldEventState_reinitializeBegin(t_FieldEventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(self->object.reinitializeBegin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reinitializeBegin", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_tryAdvance(t_FieldEventState *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean result;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.tryAdvance(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "tryAdvance", args);
          return NULL;
        }
        static PyObject *t_FieldEventState_get__parameters_(t_FieldEventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventState_get__eventDate(t_FieldEventState *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_FieldEventState_get__eventDetector(t_FieldEventState *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }

        static PyObject *t_FieldEventState_get__pendingEvent(t_FieldEventState *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getPendingEvent());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/iod/IodLambert.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodLambert::class$ = NULL;
        jmethodID *IodLambert::mids$ = NULL;
        bool IodLambert::live$ = false;

        jclass IodLambert::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodLambert");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_d38177db26866f22] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;ZILorg/orekit/estimation/measurements/PV;Lorg/orekit/estimation/measurements/PV;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_3ef8ea131d5aef8a] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;ZILorg/orekit/estimation/measurements/Position;Lorg/orekit/estimation/measurements/Position;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_2e3d5773c6019239] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;ZILorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodLambert::IodLambert(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        ::org::orekit::orbits::Orbit IodLambert::estimate(const ::org::orekit::frames::Frame & a0, jboolean a1, jint a2, const ::org::orekit::estimation::measurements::PV & a3, const ::org::orekit::estimation::measurements::PV & a4) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_d38177db26866f22], a0.this$, a1, a2, a3.this$, a4.this$));
        }

        ::org::orekit::orbits::Orbit IodLambert::estimate(const ::org::orekit::frames::Frame & a0, jboolean a1, jint a2, const ::org::orekit::estimation::measurements::Position & a3, const ::org::orekit::estimation::measurements::Position & a4) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_3ef8ea131d5aef8a], a0.this$, a1, a2, a3.this$, a4.this$));
        }

        ::org::orekit::orbits::Orbit IodLambert::estimate(const ::org::orekit::frames::Frame & a0, jboolean a1, jint a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::orekit::time::AbsoluteDate & a6) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_2e3d5773c6019239], a0.this$, a1, a2, a3.this$, a4.this$, a5.this$, a6.this$));
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
      namespace iod {
        static PyObject *t_IodLambert_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodLambert_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodLambert_init_(t_IodLambert *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodLambert_estimate(t_IodLambert *self, PyObject *args);

        static PyMethodDef t_IodLambert__methods_[] = {
          DECLARE_METHOD(t_IodLambert, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodLambert, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodLambert, estimate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodLambert)[] = {
          { Py_tp_methods, t_IodLambert__methods_ },
          { Py_tp_init, (void *) t_IodLambert_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodLambert)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodLambert, t_IodLambert, IodLambert);

        void t_IodLambert::install(PyObject *module)
        {
          installType(&PY_TYPE(IodLambert), &PY_TYPE_DEF(IodLambert), module, "IodLambert", 0);
        }

        void t_IodLambert::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLambert), "class_", make_descriptor(IodLambert::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLambert), "wrapfn_", make_descriptor(t_IodLambert::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLambert), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodLambert_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodLambert::initializeClass, 1)))
            return NULL;
          return t_IodLambert::wrap_Object(IodLambert(((t_IodLambert *) arg)->object.this$));
        }
        static PyObject *t_IodLambert_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodLambert::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodLambert_init_(t_IodLambert *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodLambert object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodLambert(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodLambert_estimate(t_IodLambert *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jboolean a1;
              jint a2;
              ::org::orekit::estimation::measurements::PV a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::estimation::measurements::PV a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kZIKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::estimation::measurements::t_PV::parameters_, &a4, &p4, ::org::orekit::estimation::measurements::t_PV::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jboolean a1;
              jint a2;
              ::org::orekit::estimation::measurements::Position a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::estimation::measurements::Position a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kZIKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::estimation::measurements::t_Position::parameters_, &a4, &p4, ::org::orekit::estimation::measurements::t_Position::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 7:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jboolean a1;
              jint a2;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a6((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kZIkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }
      }
    }
  }
}
